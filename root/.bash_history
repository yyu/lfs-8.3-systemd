    This is specific to kernels prior to the 2.6 series and \033[1;31mmust not\033[0;35m be created on an LFS system
    as it can cause problems for packages you may wish to build once your base LFS system is complete.
    '
    ________________________________________NOTE________________________________________ '
    The headers in the system s include directory (/usr/include) should always be the ones against which Glibc was compiled,
    that is, the sanitised headers installed in Section 6.7, “Linux-4.18.5 API Headers”.
    Therefore, they should never be replaced by either the raw kernel headers or any other kernel sanitized headers.
    '
}

_lfs_configure_linux_module_load_order() {
    ________________________________________________________________________________ '
    8.3.2. Configuring Linux Module Load Order

    Most of the time Linux modules are loaded automatically, but sometimes it needs some specific direction.
    The program that loads modules, modprobe or insmod, uses /etc/modprobe.d/usb.conf for this purpose.
    This file needs to be created so that if the USB drivers (ehci_hcd, ohci_hcd and uhci_hcd) have been built as modules,
    they will be loaded in the correct order;
    ehci_hcd needs to be loaded prior to ohci_hcd and uhci_hcd in order to avoid a warning being output at boot time.

    Create a new file /etc/modprobe.d/usb.conf:
    '
    install -v -m755 -d /etc/modprobe.d
    cat > /etc/modprobe.d/usb.conf << "EOF"
# Begin /etc/modprobe.d/usb.conf

install ohci_hcd /sbin/modprobe ehci_hcd ; /sbin/modprobe -i ohci_hcd ; true
install uhci_hcd /sbin/modprobe ehci_hcd ; /sbin/modprobe -i uhci_hcd ; true

# End /etc/modprobe.d/usb.conf
EOF
}

_lfs_create_emergency_boot_disk() {
    ________________________________________________________________________________ '
    Ensure that an emergency boot disk is ready to “rescue” the computer if the computer becomes unusable (un-bootable).
    If you do not already have a boot device, you can create one.
    In order for the procedure below to work, you need to jump ahead to BLFS and install xorriso from the libisoburn package.
    '
    cd /tmp
    grub-mkrescue --output=grub-img.iso
    xorriso -as cdrecord -v dev=/dev/cdrw blank=as_needed grub-img.iso
    ________________________________________NOTE________________________________________ '
    To boot LFS on host systems that have UEFI enabled, the kernel needs to have been built with the
    CONFIG_EFI_STUB capabality described in the previous section.
    However, LFS can be booted using GRUB2 without such an addition.
    To do this, the UEFI Mode and Secure Boot capabilities in the host system s BIOS need to be turned off.
    For details, see the lfs-uefi.txt hint at http://www.linuxfromscratch.org/hints/downloads/files/lfs-uefi.txt.
    '
}

_lfs_grub() {
    ________________________________________________________________________________ '
    8.4.2. GRUB Naming Conventions
    \033[0;32m
    GRUB uses its own naming structure for drives and partitions in the form of
        \033[1;32m(hdn,m)\033[0;32m,
    where \033[1;32mn\033[0;32m is the hard drive number and \033[1;32mm\033[0;32m is the partition number.

    The hard drive number starts from \033[1;32mzero\033[0;32m,
    but the partition number starts from \033[1;32mone for normal partitions\033[0;32m and \033[1;32mfive for extended partitions\033[0;32m.
    Note that this is different from earlier versions where both numbers started from zero.
    For example, \033[1;32mpartition sda1 is (hd0,1) to GRUB\033[0;32m and \033[1;32msdb3 is (hd1,3)\033[0;32m.

    In contrast to Linux, GRUB does not consider CD-ROM drives to be hard drives.
    For example, if using a CD on hdb and a second hard drive on hdc, that second hard drive would still be (hd1).
    '
    ________________________________________________________________________________ '
    8.4.3. Setting Up the Configuration

    GRUB works by writing data to the first physical track of the hard disk.
    This area is not part of any file system.
    The programs there access GRUB modules in the boot partition.
    The default location is /boot/grub/.

    The location of the boot partition is a choice of the user that affects the configuration.
    One recommendation is to have a separate small (suggested size is 100 MB) partition just for boot information.
    That way each build, whether LFS or some commercial distro, can access the same boot files and access can be made from any booted system.
    If you choose to do this, you will need to mount the separate partition,
    move all files in the current /boot directory (e.g. the linux kernel you just built in the previous section) to the new partition.
    You will then need to unmount the partition and remount it as /boot. If you do this, be sure to update /etc/fstab.

    Using the current lfs partition will also work, but configuration for multiple systems is more difficult.

    Using the above information, determine the appropriate designator for the root partition (or boot partition, if a separate one is used).
    For the following example, it is assumed that the root (or separate boot) partition is \033[1;31msdc1\033[0;37m.
    '
    ________________________________________________________________________________ '
    Install the GRUB files into /boot/grub and set up the boot track:
    grub-install /dev/sdc
    '
    ________________________________________IMPORTANT________________________________________ '
    Warning' '
    This command will overwrite the current boot loader.
    Do not run the command if this is not desired,
    for example, if using a third party boot manager to manage the Master Boot Record (MBR).
    '
    grub-install /dev/sdc
    ________________________________________________________________________________ '
    8.4.4. Creating the GRUB Configuration File

    Generate /boot/grub/grub.cfg:
    '
    cat > /boot/grub/grub.cfg << "EOF"
# Begin /boot/grub/grub.cfg
set default=0
set timeout=5

insmod ext2
set root=(hd0,1)

menuentry "GNU/Linux, Linux 4.18.5-lfs-8.3-systemd" {
        linux   /boot/vmlinuz-4.18.5-lfs-8.3-systemd root=/dev/sda1 ro
}
EOF
    ________________________________________NOTE________________________________________ '
    I got an "VFS unable to mount root fs on unknown-block(0 0)" error and it turned out
    that was because I was using a SCSI storage device controller in my virtualbox config.

    The problem went away after I changed it to SATA.

    Analysis:

    I got my clue from https://wiki.gentoo.org/wiki/Knowledge_Base:Unable_to_mount_root_fs :
    The panic informs that the Linux kernel is unable to:
    * Detect the controller for the hard disk (a likely candidate if the message says unknown-block(0,0));
    * Detect the partition because it does not have support for the partition type (less likely, but still possible);
    * Mount the partition because it does not know how to access the file system
      (a likely candidate if the message gives a non-zero figure in the first number set, such as unknown-block(2,0));
    * Detect the partition because the wrong device was passed in the boot loader configuration.

    see also:
    * https://www.linuxquestions.org/questions/linux-from-scratch-13/chapter-8-kernel-config-853146/
    '

    ________________________________________NOTE________________________________________ '
    From GRUB s perspective, the kernel files are relative to the partition used.
    If you used a separate /boot partition, remove /boot from the above linux line.
    You will also need to change the set root line to point to the boot partition.
    '

    ________________________________________________________________________________ '
    GRUB is an extremely powerful program and it provides a tremendous number of options for
    booting from a wide variety of devices, operating systems, and partition types.
    There are also many options for customization such as graphical splash screens, playing sounds, mouse input, etc.
    The details of these options are beyond the scope of this introduction.
    '

    ________________________________________IMPORTANT________________________________________ '
    Caution' '
    There is a command, grub-mkconfig, that can write a configuration file automatically.
    It uses a set of scripts in /etc/grub.d/ and will destroy any customizations that you make.
    These scripts are designed primarily for non-source distributions and are not recommended for LFS.
    If you install a commercial Linux distribution, there is a good chance that this program will be run.
    Be sure to back up your grub.cfg file.
    '
}

_lfs_os_release() {
    ________________________________________________________________________________ '
    Create an /etc/os-release file required by systemd:
    '
    cat > /etc/os-release << "EOF"
NAME="Linux From Scratch"
VERSION="8.3-systemd"
ID=lfs
PRETTY_NAME="Linux From Scratch 8.3-systemd"
VERSION_CODENAME="<your name here>"
EOF
    ________________________________________________________________________________ '
    Creating the file /etc/lfs-release is recommended for compatibility with the non-systemd branch.
    By having this file, it is very easy for you (and for us if you need to ask for help at some point)
    to find out which LFS version is installed on the system. Create this file by running:

    echo 8.3-systemd > /etc/lfs-release
    '
    echo 8.3-systemd > /etc/lfs-release
    ________________________________________________________________________________ '
    It is also a good idea to create a file to show the status of your new system with respect to the Linux Standards Base (LSB).
    '
    cat > /etc/lsb-release << "EOF"
DISTRIB_ID="Linux From Scratch"
DISTRIB_RELEASE="8.3-systemd"
DISTRIB_CODENAME="Thanksgiving2018"
DISTRIB_DESCRIPTION="Linux From Scratch"
EOF
}

_lfs_logout() {
    logout
}

_lfs_umount_all() {
    ________________________________________________________________________________ '
    Then unmount the virtual file systems:
    '
    umount -v $LFS/dev/pts
    umount -v $LFS/dev
    umount -v $LFS/run
    umount -v $LFS/proc
    umount -v $LFS/sys
    ________________________________________________________________________________ '
    If multiple partitions were created, unmount the other partitions
    '
    umount -v $LFS/usr
    umount -v $LFS/home
    ________________________________________________________________________________ '
    Unmount the LFS file system itself:
    '
    umount -v $LFS
}

_lfs_reboot() {
    ________________________________________________________________________________ '
    Now, reboot the system with:
    '
    shutdown -r now
}

################################################################################

_lfs_basic_system_install_all_1() {
    mkdir -pv $LFS_LOG_DIR
    _lfs_basic_system_install_linux_api_headers
    _lfs_basic_system_install_man-pages
    _lfs_basic_system_install_glibc
    _lfs_basic_system_configure_glibc
    _lfs_basic_system_adjust_toolchain
}

_lfs_basic_system_install_all_2() {
    mkdir -pv $LFS_LOG_DIR
    _lfs_basic_system_install_zlib
    _lfs_basic_system_install_file
    _lfs_basic_system_install_readline
    _lfs_basic_system_install_m4
    _lfs_basic_system_install_bc
    _lfs_basic_system_install_binutils
    _lfs_basic_system_install_gmp
    _lfs_basic_system_install_mpfr
    _lfs_basic_system_install_mpc
    _lfs_basic_system_install_shadow
    _lfs_basic_system_configure_shadow
    _lfs_basic_system_install_gcc
}

_lfs_basic_system_install_all_3() {
    mkdir -pv $LFS_LOG_DIR
    _lfs_basic_system_install_bzip2
    _lfs_basic_system_install_pkg-config
    _lfs_basic_system_install_ncurses
    _lfs_basic_system_install_attr
    _lfs_basic_system_install_acl
    _lfs_basic_system_install_libcap
    _lfs_basic_system_install_sed
    _lfs_basic_system_install_psmisc
    _lfs_basic_system_install_iana-etc
    _lfs_basic_system_install_bison
    _lfs_basic_system_install_flex
    _lfs_basic_system_install_grep
    _lfs_basic_system_install_bash
}

_lfs_basic_system_install_all_4() {
    mkdir -pv $LFS_LOG_DIR
    _lfs_basic_system_install_libtool
    _lfs_basic_system_install_gdbm
    _lfs_basic_system_install_gperf
    _lfs_basic_system_install_expat
    _lfs_basic_system_install_inetutils
    _lfs_basic_system_install_perl
    _lfs_basic_system_install_XML-Parser
    _lfs_basic_system_install_intltool
    _lfs_basic_system_install_autoconf
    _lfs_basic_system_install_automake
    _lfs_basic_system_install_xz
    _lfs_basic_system_install_kmod-25
    _lfs_basic_system_install_gettext
    _lfs_basic_system_install_libelf
    _lfs_basic_system_install_libffi
    _lfs_basic_system_install_openssl
    _lfs_basic_system_install_python
    _lfs_basic_system_install_ninja
    _lfs_basic_system_install_meson
}

_lfs_basic_system_install_all_5() {
    _lfs_basic_system_install_systemd
    _lfs_basic_system_install_procps-ng
    _lfs_basic_system_install_e2fsprogs
    _lfs_basic_system_install_coreutils
    _lfs_basic_system_install_check
    _lfs_basic_system_install_diffutils
    _lfs_basic_system_install_gawk
    _lfs_basic_system_install_findutils
    _lfs_basic_system_install_groff
    _lfs_basic_system_install_grub
    _lfs_basic_system_install_less
    _lfs_basic_system_install_gzip
    _lfs_basic_system_install_iproute2
    _lfs_basic_system_install_kbd
    _lfs_basic_system_install_libpipeline
    _lfs_basic_system_install_make
    _lfs_basic_system_install_patch
    _lfs_basic_system_install_dbus
    _lfs_basic_system_install_util-linux
    _lfs_basic_system_install_man-db
    _lfs_basic_system_install_tar
    _lfs_basic_system_install_texinfo
    _lfs_basic_system_install_vim
}

################################################################################
#
# on host (as root)
# =================
#
# . 000-functions.sh
#
# _lfs_host_prepare
# _lfs_version_check
#
# _lfs_create_disk_image
# _lfs_mkfs
# _lfs_mount_fs
#
# _lfs_get_packages_and_patches
# _lfs_setup_tools_directory
# _lfs_setup_user_and_group
#
# as lfs
# ------
#
# . 000-functions.sh
#
# _lfs_setup_env
#
# . 000-functions.sh
#
# # _lfs_get_target_triplets
# # _lfs_get_name_of_dynamic_linker
# # _lfs_get_ld_search_order
# # _lfs_show_linked_files_for_dummy_program
# # _lfs_show_linker_used_by_gcc
# # _lfs_gcc_dummy_program_verbose
#
# _lfs_before_temp_system_build
#
# _lfs_temp_system_build_all_1
# _lfs_temp_system_build_all_2
# _lfs_temp_system_build_all_3
#
# on host (as root)
# =================
#
# . 000-functions.sh
#
# _lfs_after_temp_system
# _lfs_create_directories_dev_proc_sys_run
# _lfs_create_initial_device_nodes
#
# _lfs_basic_system_chroot_note
# _lfs_mount_and_populate_dev
# _lfs_mount_virtual_kernel_fs
# _lfs_basic_system_enter_chroot_env
#
# on lfs (as root)
# ----------------
#
# . 000-functions.sh
#
# _lfs_create_directories
# _lfs_create_essential_files_and_symlinks
# _lfs_remove_I_have_no_name_prompt
#
# on lfs (as root)
# ----------------
#
# . 000-functions.sh
#
# _lfs_basic_system_install_all_1
# _lfs_basic_system_install_all_2
# _lfs_basic_system_install_all_3
#
# . 000-functions.sh
#
# _lfs_basic_system_install_all_4
# _lfs_basic_system_install_all_5
#
################################################################################
EEEEEOF

. 000-functions.sh
pwd
ls
du -h --max-depth=1 .
_lfs_basic_system_install_clean_up_3 
du -h --max-depth=1 .
_lfs_network_interface_configure_narrative
_lfs_configure_dhcp
_lfs_configure_dns
_lfs_configure_hostname
_lfs_configure_etc_hosts
_lfs_is_hardware_clock_set_to_utc
_lfs_configure_system_clock
_lfs_configure_linux_console
_lfs_create_etc_inputrc
_lfs_create_etc_shells
_lfs_configure_and_use_systemd
_lfs_make_lfs_bootable_create_etc_fstab
_lfs_kernel_build 
cd sources/linux-4.18.5
_lfs_kernel_build 
ls .config 
grep -i fhandle .config
vi .config 
make menuconfig
fgrep CONFIG_SYSFS_DEPRECATED CONFIG_SYSFS_DEPRECATED_V2 .config
man fgrep
fgrep '
CONFIG_SYSFS_DEPRECATED
CONFIG_SYSFS_DEPRECATED_V2' .config
fgrep 'CONFIG_FHANDLE
CONFIG_SYSFS_DEPRECATED
CONFIG_SYSFS_DEPRECATED_V2' .config
fgrep --color 'CONFIG_FHANDLE
CONFIG_SYSFS_DEPRECATED
CONFIG_SYSFS_DEPRECATED_V2' .config
fgrep --color 'CONFIG_FHANDLE
CONFIG_SYSFS_DEPRECATED
CONFIG_SYSFS_DEPRECATED_V2' .config
fgrep --color 'CONFIG_FHANDLE
CONFIG_SYSFS_DEPRECATED
CONFIG_SYSFS_DEPRECATED_V2
fgrep --color 'CONFIG_SYSFS_DEPRECATED
CONFIG_SYSFS_DEPRECATED_V2
CONFIG_AUDIT
CONFIG_UEVENT_HELPER
CONFIG_FW_LOADER_USER_HELPER
' .config
fgrep --color 'CONFIG_SYSFS_DEPRECATED
CONFIG_SYSFS_DEPRECATED_V2
CONFIG_AUDIT
CONFIG_UEVENT_HELPER
CONFIG_FW_LOADER_USER_HELPER' .config
fgrep --color 'CONFIG_SYSFS_DEPRECATED
CONFIG_SYSFS_DEPRECATED_V2
CONFIG_AUDIT
CONFIG_UEVENT_HELPER
CONFIG_FW_LOADER_USER_HELPER' .config
grep -E 'CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER' .config
grep --color -E 'CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER' .config
grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)=' .config
grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)\>' .config
grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)\>' .config
grep --color -E '(CONFIG_FHANDLE|CONFIG_CGROUPS|CONFIG_SECCOMP|CONFIG_IPV6|CONFIG_DEVTMPFS|CONFIG_DMIID|CONFIG_INOTIFY_USER|CONFIG_AUTOFS4_FS|CONFIG_TMPFS_POSIX_ACL|CONFIG_TMPFS_XATTR|CONFIG_UNWINDER_FRAME_POINTER)\>' .config
vi .config 
vi .config 
grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)\>' .config
grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)' .config
grep --color -E '(CONFIG_FHANDLE|CONFIG_CGROUPS|CONFIG_SECCOMP|CONFIG_IPV6|CONFIG_DEVTMPFS|CONFIG_DMIID|CONFIG_INOTIFY_USER|CONFIG_AUTOFS4_FS|CONFIG_TMPFS_POSIX_ACL|CONFIG_TMPFS_XATTR|CONFIG_UNWINDER_FRAME_POINTER)\>' .config
_lfs_kernel_build_config_check() {     ________________________________________________________________________________ '
    grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)\>' .config
    these should be disabled:
    '
    grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)\>' .config
    ________________________________________________________________________________ '
    grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)' .config
    '
    grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)' .config
    ________________________________________________________________________________ '
    grep --color -E '(CONFIG_FHANDLE|CONFIG_CGROUPS|CONFIG_SECCOMP|CONFIG_IPV6|CONFIG_DEVTMPFS|CONFIG_DMIID|CONFIG_INOTIFY_USER|CONFIG_AUTOFS4_FS|CONFIG_TMPFS_POSIX_ACL|CONFIG_TMPFS_XATTR|CONFIG_UNWINDER_FRAME_POINTER)\>' .config
    these should be enabled:
    '
    grep --color -E '(CONFIG_FHANDLE|CONFIG_CGROUPS|CONFIG_SECCOMP|CONFIG_IPV6|CONFIG_DEVTMPFS|CONFIG_DMIID|CONFIG_INOTIFY_USER|CONFIG_AUTOFS4_FS|CONFIG_TMPFS_POSIX_ACL|CONFIG_TMPFS_XATTR|CONFIG_UNWINDER_FRAME_POINTER)\>' .config
}
_lfs_kernel_build_config_check
_lfs_kernel_build_config_check() {     ________________________________________________________________________________ "
    grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)\>' .config
    these should be disabled:
    ";     grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)\>' .config;     ________________________________________________________________________________ "
    grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)' .config
    ";     grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)' .config;     ________________________________________________________________________________ "
    grep --color -E '(CONFIG_FHANDLE|CONFIG_CGROUPS|CONFIG_SECCOMP|CONFIG_IPV6|CONFIG_DEVTMPFS|CONFIG_DMIID|CONFIG_INOTIFY_USER|CONFIG_AUTOFS4_FS|CONFIG_TMPFS_POSIX_ACL|CONFIG_TMPFS_XATTR|CONFIG_UNWINDER_FRAME_POINTER)\>' .config
    these should be enabled:
    ";     grep --color -E '(CONFIG_FHANDLE|CONFIG_CGROUPS|CONFIG_SECCOMP|CONFIG_IPV6|CONFIG_DEVTMPFS|CONFIG_DMIID|CONFIG_INOTIFY_USER|CONFIG_AUTOFS4_FS|CONFIG_TMPFS_POSIX_ACL|CONFIG_TMPFS_XATTR|CONFIG_UNWINDER_FRAME_POINTER)\>' .config; }
_lfs_kernel_build_config_check
_lfs_kernel_build_config_check() {     ________________________________________________________________________________ "
    grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)\>' .config
    these should be disabled:";     grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)\>' .config;     ________________________________________________________________________________ "
    grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)' .config
    disabled:";     grep --color -E '(CONFIG_SYSFS_DEPRECATED|CONFIG_SYSFS_DEPRECATED_V2|CONFIG_AUDIT|CONFIG_UEVENT_HELPER|CONFIG_FW_LOADER_USER_HELPER)' .config;     ________________________________________________________________________________ "
    grep --color -E '(CONFIG_FHANDLE|CONFIG_CGROUPS|CONFIG_SECCOMP|CONFIG_IPV6|CONFIG_DEVTMPFS|CONFIG_DMIID|CONFIG_INOTIFY_USER|CONFIG_AUTOFS4_FS|CONFIG_TMPFS_POSIX_ACL|CONFIG_TMPFS_XATTR|CONFIG_UNWINDER_FRAME_POINTER)\>' .config
    these should be enabled:";     grep --color -E '(CONFIG_FHANDLE|CONFIG_CGROUPS|CONFIG_SECCOMP|CONFIG_IPV6|CONFIG_DEVTMPFS|CONFIG_DMIID|CONFIG_INOTIFY_USER|CONFIG_AUTOFS4_FS|CONFIG_TMPFS_POSIX_ACL|CONFIG_TMPFS_XATTR|CONFIG_UNWINDER_FRAME_POINTER)\>' .config; }
_lfs_kernel_build_config_check
_lfs_kernel_build() {     make;     make modules_install; }
_lfs_kernel_build
_lfs_kernel_post_build 
_lfs_configure_linux_module_load_order 
_lfs_get_target_triplets
