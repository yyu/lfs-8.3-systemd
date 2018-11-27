 #!/bin/bash
builddir=`dirname "$0"`
GCONV_PATH="${builddir}/iconvdata"

usage () {
  echo "usage: $0 [--tool=strace] PROGRAM [ARGUMENTS...]" 2>&1
  echo "       $0 --tool=valgrind PROGRAM [ARGUMENTS...]" 2>&1
}

toolname=default
while test $# -gt 0 ; do
  case "$1" in
    --tool=*)
      toolname="${1:7}"
      shift
      ;;
    --*)
      usage
      ;;
    *)
      break
      ;;
  esac
done

if test $# -eq 0 ; then
  usage
fi

case "$toolname" in
  default)
    exec   env GCONV_PATH="${builddir}"/iconvdata LOCPATH="${builddir}"/localedata LC_ALL=C  "${builddir}"/elf/ld-linux-x86-64.so.2 --library-path "${builddir}":"${builddir}"/math:"${builddir}"/elf:"${builddir}"/dlfcn:"${builddir}"/nss:"${builddir}"/nis:"${builddir}"/rt:"${builddir}"/resolv:"${builddir}"/mathvec:"${builddir}"/support:"${builddir}"/crypt:"${builddir}"/nptl ${1+"$@"}
    ;;
  strace)
    exec strace  -EGCONV_PATH=/mnt/lfs/sources/glibc-2.28/build/iconvdata  -ELOCPATH=/mnt/lfs/sources/glibc-2.28/build/localedata  -ELC_ALL=C  /mnt/lfs/sources/glibc-2.28/build/elf/ld-linux-x86-64.so.2 --library-path /mnt/lfs/sources/glibc-2.28/build:/mnt/lfs/sources/glibc-2.28/build/math:/mnt/lfs/sources/glibc-2.28/build/elf:/mnt/lfs/sources/glibc-2.28/build/dlfcn:/mnt/lfs/sources/glibc-2.28/build/nss:/mnt/lfs/sources/glibc-2.28/build/nis:/mnt/lfs/sources/glibc-2.28/build/rt:/mnt/lfs/sources/glibc-2.28/build/resolv:/mnt/lfs/sources/glibc-2.28/build/mathvec:/mnt/lfs/sources/glibc-2.28/build/support:/mnt/lfs/sources/glibc-2.28/build/crypt:/mnt/lfs/sources/glibc-2.28/build/nptl ${1+"$@"}
    ;;
  valgrind)
    exec env GCONV_PATH=/mnt/lfs/sources/glibc-2.28/build/iconvdata LOCPATH=/mnt/lfs/sources/glibc-2.28/build/localedata LC_ALL=C valgrind  /mnt/lfs/sources/glibc-2.28/build/elf/ld-linux-x86-64.so.2 --library-path /mnt/lfs/sources/glibc-2.28/build:/mnt/lfs/sources/glibc-2.28/build/math:/mnt/lfs/sources/glibc-2.28/build/elf:/mnt/lfs/sources/glibc-2.28/build/dlfcn:/mnt/lfs/sources/glibc-2.28/build/nss:/mnt/lfs/sources/glibc-2.28/build/nis:/mnt/lfs/sources/glibc-2.28/build/rt:/mnt/lfs/sources/glibc-2.28/build/resolv:/mnt/lfs/sources/glibc-2.28/build/mathvec:/mnt/lfs/sources/glibc-2.28/build/support:/mnt/lfs/sources/glibc-2.28/build/crypt:/mnt/lfs/sources/glibc-2.28/build/nptl ${1+"$@"}
    ;;
  *)
    usage
    ;;
esac
