# lfs-8.3-systemd

http://www.linuxfromscratch.org/lfs/downloads/stable-systemd/LFS-BOOK-8.3-systemd-NOCHUNKS.html


Host system:

    $ _lfs_get_target_triplets
    ~/___/target-triplets ~
    --2018-11-26 08:05:05--  http://ftp.gnu.org/gnu/binutils/binutils-2.31.1.tar.xz
    Resolving ftp.gnu.org (ftp.gnu.org)... 208.118.235.20, 2001:4830:134:3::b
    Connecting to ftp.gnu.org (ftp.gnu.org)|208.118.235.20|:80... connected.
    HTTP request sent, awaiting response... 200 OK
    Length: 20467996 (20M) [application/x-tar]
    Saving to: 'binutils-2.31.1.tar.xz.1'

    binutils-2.31.1.tar.xz.1                             100%[==================================================>]  19.52M  7.60MB/s    in 2.6s

    2018-11-26 08:05:08 (7.60 MB/s) - 'binutils-2.31.1.tar.xz.1' saved [20467996/20467996]

    x86_64-pc-linux-gnu
    ~

    $ _lfs_get_ld_search_order
    SEARCH_DIR("=/usr/local/lib/x86_64-linux-gnu");
    SEARCH_DIR("=/lib/x86_64-linux-gnu");
    SEARCH_DIR("=/usr/lib/x86_64-linux-gnu");
    SEARCH_DIR("=/usr/lib/x86_64-linux-gnu64");
    SEARCH_DIR("=/usr/local/lib64");
    SEARCH_DIR("=/lib64");
    SEARCH_DIR("=/usr/lib64");
    SEARCH_DIR("=/usr/local/lib");
    SEARCH_DIR("=/lib");
    SEARCH_DIR("=/usr/lib");
    SEARCH_DIR("=/usr/x86_64-linux-gnu/lib64");
    SEARCH_DIR("=/usr/x86_64-linux-gnu/lib");

    $ _lfs_show_linked_files_for_dummy_program
    attempt to open /usr/lib/gcc/x86_64-linux-gnu/7/../../../x86_64-linux-gnu/Scrt1.o succeeded
    attempt to open /usr/lib/gcc/x86_64-linux-gnu/7/../../../x86_64-linux-gnu/crti.o succeeded
    attempt to open /usr/lib/gcc/x86_64-linux-gnu/7/crtbeginS.o succeeded
    attempt to open /tmp/ccxDimXD.o succeeded
    attempt to open /usr/lib/gcc/x86_64-linux-gnu/7/libgcc.a succeeded
    attempt to open /usr/lib/gcc/x86_64-linux-gnu/7/libgcc_s.so succeeded
    attempt to open /usr/lib/gcc/x86_64-linux-gnu/7/libgcc_s.so.1 succeeded
    attempt to open /usr/lib/gcc/x86_64-linux-gnu/7/libgcc.a succeeded
    attempt to open /usr/lib/gcc/x86_64-linux-gnu/7/../../../x86_64-linux-gnu/libc.so succeeded
    attempt to open /lib/x86_64-linux-gnu/libc.so.6 succeeded
    attempt to open /usr/lib/x86_64-linux-gnu/libc_nonshared.a succeeded
    attempt to open /lib/x86_64-linux-gnu/ld-linux-x86-64.so.2 succeeded
    attempt to open /usr/lib/gcc/x86_64-linux-gnu/7/libgcc.a succeeded
    attempt to open /usr/lib/gcc/x86_64-linux-gnu/7/libgcc_s.so succeeded
    attempt to open /usr/lib/gcc/x86_64-linux-gnu/7/libgcc_s.so.1 succeeded
    attempt to open /usr/lib/gcc/x86_64-linux-gnu/7/libgcc.a succeeded
    attempt to open /usr/lib/gcc/x86_64-linux-gnu/7/crtendS.o succeeded
    attempt to open /usr/lib/gcc/x86_64-linux-gnu/7/../../../x86_64-linux-gnu/crtn.o succeeded

    $ _lfs_show_linker_used_by_gcc
    ld

    $ _lfs_gcc_dummy_program_verbose
    Using built-in specs.
    COLLECT_GCC=gcc
    COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/7/lto-wrapper
    OFFLOAD_TARGET_NAMES=nvptx-none
    OFFLOAD_TARGET_DEFAULT=1
    Target: x86_64-linux-gnu
    Configured with: ../src/configure -v --with-pkgversion='Ubuntu 7.3.0-27ubuntu1~18.04' --with-bugurl=file:///usr/share/doc/gcc-7/README.Bugs --enable-languages=c,ada,c++,go,brig,d,fortran,objc,obj-c++ --prefix=
    /usr --with-gcc-major-version-only --program-suffix=-7 --program-prefix=x86_64-linux-gnu- --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libd
    ir=/usr/lib --enable-nls --with-sysroot=/ --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-
    libmpx --enable-plugin --enable-default-pie --with-system-zlib --with-target-system-zlib --enable-objc-gc=auto --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m6
    4,mx32 --enable-multilib --with-tune=generic --enable-offload-targets=nvptx-none --without-cuda-driver --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
    Thread model: posix
    gcc version 7.3.0 (Ubuntu 7.3.0-27ubuntu1~18.04)
    COLLECT_GCC_OPTIONS='-v' '-mtune=generic' '-march=x86-64'
     /usr/lib/gcc/x86_64-linux-gnu/7/cc1 -quiet -v -imultiarch x86_64-linux-gnu dummy.c -quiet -dumpbase dummy.c -mtune=generic -march=x86-64 -auxbase dummy -version -fstack-protector-strong -Wformat -Wformat-secu
    rity -o /tmp/ccMlGnX1.s
    GNU C11 (Ubuntu 7.3.0-27ubuntu1~18.04) version 7.3.0 (x86_64-linux-gnu)
            compiled by GNU C version 7.3.0, GMP version 6.1.2, MPFR version 4.0.1, MPC version 1.1.0, isl version isl-0.19-GMP

    GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
    ignoring nonexistent directory "/usr/local/include/x86_64-linux-gnu"
    ignoring nonexistent directory "/usr/lib/gcc/x86_64-linux-gnu/7/../../../../x86_64-linux-gnu/include"
    #include "..." search starts here:
    #include <...> search starts here:
     /usr/lib/gcc/x86_64-linux-gnu/7/include
     /usr/local/include
     /usr/lib/gcc/x86_64-linux-gnu/7/include-fixed
     /usr/include/x86_64-linux-gnu
     /usr/include
    End of search list.
    GNU C11 (Ubuntu 7.3.0-27ubuntu1~18.04) version 7.3.0 (x86_64-linux-gnu)
            compiled by GNU C version 7.3.0, GMP version 6.1.2, MPFR version 4.0.1, MPC version 1.1.0, isl version isl-0.19-GMP

    GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
    Compiler executable checksum: c8081a99abb72bbfd9129549110a350c
    COLLECT_GCC_OPTIONS='-v' '-mtune=generic' '-march=x86-64'
     as -v --64 -o /tmp/cc8onvPo.o /tmp/ccMlGnX1.s
    GNU assembler version 2.30 (x86_64-linux-gnu) using BFD version (GNU Binutils for Ubuntu) 2.30
    COMPILER_PATH=/usr/lib/gcc/x86_64-linux-gnu/7/:/usr/lib/gcc/x86_64-linux-gnu/7/:/usr/lib/gcc/x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/7/:/usr/lib/gcc/x86_64-linux-gnu/
    LIBRARY_PATH=/usr/lib/gcc/x86_64-linux-gnu/7/:/usr/lib/gcc/x86_64-linux-gnu/7/../../../x86_64-linux-gnu/:/usr/lib/gcc/x86_64-linux-gnu/7/../../../../lib/:/lib/x86_64-linux-gnu/:/lib/../lib/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-linux-gnu/7/../../../:/lib/:/usr/lib/
    COLLECT_GCC_OPTIONS='-v' '-mtune=generic' '-march=x86-64'
     /usr/lib/gcc/x86_64-linux-gnu/7/collect2 -plugin /usr/lib/gcc/x86_64-linux-gnu/7/liblto_plugin.so -plugin-opt=/usr/lib/gcc/x86_64-linux-gnu/7/lto-wrapper -plugin-opt=-fresolution=/tmp/cc6xRDIL.res -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lgcc_s -plugin-opt=-pass-through=-lc -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lgcc_s --sysroot=/ --build-id --eh-frame-hdr -m elf_x86_64 --hash-style=gnu --as-needed -dynamic-linker /lib64/ld-linux-x86-64.so.2 -pie -z now -z relro /usr/lib/gcc/x86_64-linux-gnu/7/../../../x86_64-linux-gnu/Scrt1.o /usr/lib/gcc/x86_64-linux-gnu/7/../../../x86_64-linux-gnu/crti.o /usr/lib/gcc/x86_64-linux-gnu/7/crtbeginS.o -L/usr/lib/gcc/x86_64-linux-gnu/7 -L/usr/lib/gcc/x86_64-linux-gnu/7/../../../x86_64-linux-gnu -L/usr/lib/gcc/x86_64-linux-gnu/7/../../../../lib -L/lib/x86_64-linux-gnu -L/lib/../lib -L/usr/lib/x86_64-linux-gnu -L/usr/lib/../lib -L/usr/lib/gcc/x86_64-linux-gnu/7/../../.. /tmp/cc8onvPo.o -lgcc --push-state --as-needed -lgcc_s --pop-state -lc -lgcc --push-state --as-needed -lgcc_s --pop-state /usr/lib/gcc/x86_64-linux-gnu/7/crtendS.o /usr/lib/gcc/x86_64-linux-gnu/7/../../../x86_64-linux-gnu/crtn.o
    COLLECT_GCC_OPTIONS='-v' '-mtune=generic' '-march=x86-64'


LFS:

    (lfs chroot) root:/sources/binutils-2.31.1# ./config.guess 
    x86_64-pc-linux-gnu


    (lfs chroot) root:/sources/binutils-2.31.1# _lfs_get_ld_search_order
    SEARCH_DIR("/usr/x86_64-pc-linux-gnu/lib64");
    SEARCH_DIR("/usr/local/lib64");
    SEARCH_DIR("/lib64");
    SEARCH_DIR("/usr/lib64");
    SEARCH_DIR("/usr/x86_64-pc-linux-gnu/lib");
    SEARCH_DIR("/usr/local/lib");
    SEARCH_DIR("/lib");
    SEARCH_DIR("/usr/lib");


    (lfs chroot) root:/sources/binutils-2.31.1# _lfs_show_linked_files_for_dummy_program
    attempt to open /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../../../lib/crt1.o succeeded
    attempt to open /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../../../lib/crti.o succeeded
    attempt to open /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/crtbegin.o succeeded
    attempt to open /tmp/cc1sGytA.o succeeded
    attempt to open /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/libgcc.a succeeded
    attempt to open /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../../../lib/libgcc_s.so succeeded
    attempt to open /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../../../lib/libgcc_s.so.1 succeeded
    attempt to open /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/libgcc.a succeeded
    attempt to open /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../../../lib/libc.so succeeded
    attempt to open /lib/libc.so.6 succeeded
    attempt to open /usr/lib/libc_nonshared.a succeeded
    attempt to open /lib/ld-linux-x86-64.so.2 succeeded
    attempt to open /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/libgcc.a succeeded
    attempt to open /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../../../lib/libgcc_s.so succeeded
    attempt to open /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../../../lib/libgcc_s.so.1 succeeded
    attempt to open /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/libgcc.a succeeded
    attempt to open /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/crtend.o succeeded
    attempt to open /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../../../lib/crtn.o succeeded


    (lfs chroot) root:/sources/binutils-2.31.1# _lfs_show_linker_used_by_gcc
    ld


    (lfs chroot) root:/sources/binutils-2.31.1# _lfs_gcc_dummy_program_verbose
    Using built-in specs.
    COLLECT_GCC=gcc
    COLLECT_LTO_WRAPPER=/usr/libexec/gcc/x86_64-pc-linux-gnu/8.2.0/lto-wrapper
    Target: x86_64-pc-linux-gnu
    Configured with: ../configure --prefix=/usr --enable-languages=c,c++ --disable-multilib --disable-bootstrap --disable-libmpx --with-system-zlib
    Thread model: posix
    gcc version 8.2.0 (GCC)
    COLLECT_GCC_OPTIONS='-v' '-mtune=generic' '-march=x86-64'
     /usr/libexec/gcc/x86_64-pc-linux-gnu/8.2.0/cc1 -quiet -v dummy.c -quiet -dumpbase dummy.c -mtune=generic -march=x86-64 -auxbase dummy -version -o /tmp/ccfSrPPl.s
    GNU C17 (GCC) version 8.2.0 (x86_64-pc-linux-gnu)
            compiled by GNU C version 8.2.0, GMP version 6.1.2, MPFR version 4.0.1, MPC version 1.1.0, isl version none
    GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
    ignoring nonexistent directory "/usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../../../x86_64-pc-linux-gnu/include"
    #include "..." search starts here:
    #include <...> search starts here:
     /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/include
     /usr/local/include
     /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/include-fixed
     /usr/include
    End of search list.
    GNU C17 (GCC) version 8.2.0 (x86_64-pc-linux-gnu)
            compiled by GNU C version 8.2.0, GMP version 6.1.2, MPFR version 4.0.1, MPC version 1.1.0, isl version none
    GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
    Compiler executable checksum: be4b66e14bb0d21a959664c831072216
    COLLECT_GCC_OPTIONS='-v' '-mtune=generic' '-march=x86-64'
     as -v --64 -o /tmp/ccLifQcA.o /tmp/ccfSrPPl.s
    GNU assembler version 2.31.1 (x86_64-pc-linux-gnu) using BFD version (GNU Binutils) 2.31.1
    COMPILER_PATH=/usr/libexec/gcc/x86_64-pc-linux-gnu/8.2.0/:/usr/libexec/gcc/x86_64-pc-linux-gnu/8.2.0/:/usr/libexec/gcc/x86_64-pc-linux-gnu/:/usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/:/usr/lib/gcc/x86_64-pc-linux-gnu/
    LIBRARY_PATH=/usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/:/usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../../../lib/:/lib/../lib/:/usr/lib/../lib/:/usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../../:/lib/:/usr/lib/
    COLLECT_GCC_OPTIONS='-v' '-mtune=generic' '-march=x86-64'
     /usr/libexec/gcc/x86_64-pc-linux-gnu/8.2.0/collect2 -plugin /usr/libexec/gcc/x86_64-pc-linux-gnu/8.2.0/liblto_plugin.so -plugin-opt=/usr/libexec/gcc/x86_64-pc-linux-gnu/8.2.0/lto-wrapper -plugin-opt=-fresolution=/tmp/cclv4iBO.res -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lgcc_s -plugin-opt=-pass-through=-lc -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lgcc_s --eh-frame-hdr -m elf_x86_64 -dynamic-linker /lib64/ld-linux-x86-64.so.2 /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../../../lib/crt1.o /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../../../lib/crti.o /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/crtbegin.o -L/usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0 -L/usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../../../lib -L/lib/../lib -L/usr/lib/../lib -L/usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../.. /tmp/ccLifQcA.o -lgcc --as-needed -lgcc_s --no-as-needed -lc -lgcc --as-needed -lgcc_s --no-as-needed /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/crtend.o /usr/lib/gcc/x86_64-pc-linux-gnu/8.2.0/../../../../lib/crtn.o
    COLLECT_GCC_OPTIONS='-v' '-mtune=generic' '-march=x86-64'


