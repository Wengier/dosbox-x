#define GLIB_COMPILATION 1

/* config.h.win32.in Merged from two versions generated by configure for gcc and MSVC.  */
/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* The normal alignment of `guint32', in bytes. */
#define ALIGNOF_GUINT32 4

/* The normal alignment of `guint64', in bytes. */
#define ALIGNOF_GUINT64 8

/* The normal alignment of `unsigned long', in bytes. */
#define ALIGNOF_UNSIGNED_LONG 4

/* poll doesn't work on devices */
#define BROKEN_POLL 1

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Whether to disable memory pools */
/* #undef DISABLE_MEM_POOLS */

/* Whether to enable GC friendliness by default */
/* #undef ENABLE_GC_FRIENDLY_DEFAULT */

/* always defined to indicate that i18n is enabled */
#define ENABLE_NLS 1

/* Define the gettext package to be used */
#define GETTEXT_PACKAGE "glib20"

/* Define to the GLIB binary age */
#define GLIB_BINARY_AGE 5002

/* Define to the GLIB interface age */
#define GLIB_INTERFACE_AGE 2

/* Define the location where the catalogs will be installed */
#define GLIB_LOCALE_DIR "NONE/share/locale"

/* Define to the GLIB major version */
#define GLIB_MAJOR_VERSION 2

/* Define to the GLIB micro version */
#define GLIB_MICRO_VERSION 2

/* Define to the GLIB minor version */
#define GLIB_MINOR_VERSION 50

/* A 'va_copy' style function */
#ifndef _MSC_VER
#define G_VA_COPY va_copy
#else /* _MSC_VER */
/* #undef G_VA_COPY */
#endif /* _MSC_VER */

/* 'va_lists' cannot be copies as values */
/* #undef G_VA_COPY_AS_ARRAY */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
/* #undef HAVE_ALLOCA_H */

/* Define to 1 if you have the <attr/xattr.h> header file. */
/* #undef HAVE_ATTR_XATTR_H */

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

#if (_MSC_VER >= 1900)
/* Define if you have a version of the snprintf function with semantics as
   specified by the ISO C99 standard. */
#define HAVE_C99_SNPRINTF 1

/* Define if you have a version of the vsnprintf function with semantics as
   specified by the ISO C99 standard. */
#define HAVE_C99_VSNPRINTF 1
#endif

/* define to 1 if Carbon is available */
/* #undef HAVE_CARBON */

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* define to 1 if Cocoa is available */
/* #undef HAVE_COCOA */

/* Have nl_langinfo (CODESET) */
/* #undef HAVE_CODESET */

/* Define to 1 if you have the <crt_externs.h> header file. */
/* #undef HAVE_CRT_EXTERNS_H */

/* Define if dbus-1 is available */
/* #undef HAVE_DBUS1 */

/* Define to 1 if you have the `dcgettext' function. */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#ifndef _MSC_VER
#define HAVE_DIRENT_H 1
#else
/* #undef HAVE_DIRENT_H */
#endif

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if using dtrace probes. */
/* #undef HAVE_DTRACE */

/* Define to 1 if you have the `endmntent' function. */
/* #undef HAVE_ENDMNTENT */

/* Define to 1 if you have the `endservent' function. */
/* #undef HAVE_ENDSERVENT */

/* we have the eventfd(2) system call */
/* #undef HAVE_EVENTFD */

/* Define to 1 if you have the `fallocate' function. */
/* #undef HAVE_FALLOCATE */

/* Define if we have FAM */
/* #undef HAVE_FAM */

/* Define to 1 if you have the <fam.h> header file. */
/* #undef HAVE_FAM_H */

/* Define if we have FAMNoExists in fam */
/* #undef HAVE_FAM_NO_EXISTS */

/* Define to 1 if you have the `fchmod' function. */
/* #undef HAVE_FCHMOD */

/* Define to 1 if you have the `fchown' function. */
/* #undef HAVE_FCHOWN */

/* Define to 1 if you have the `fdwalk' function. */
/* #undef HAVE_FDWALK */

/* Define to 1 if you have the <fstab.h> header file. */
/* #undef HAVE_FSTAB_H */

/* Define to 1 if you have the `fsync' function. */
/* #undef HAVE_FSYNC */

/* we have the futex(2) system call */
/* #undef HAVE_FUTEX */

/* Define to 1 if you have the `getc_unlocked' function. */
/* #undef HAVE_GETC_UNLOCKED */

/* Define to 1 if you have the `getfsstat' function. */
/* #undef HAVE_GETFSSTAT */

/* Define to 1 if you have the `getmntent_r' function. */
/* #undef HAVE_GETMNTENT_R */

/* Define to 1 if you have the `getprotobyname_r' function. */
/* #undef HAVE_GETPROTOBYNAME_R */

/* Define to 1 if you have the `getresuid' function. */
/* #undef HAVE_GETRESUID */

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the `getvfsstat' function. */
/* #undef HAVE_GETVFSSTAT */

/* Define to 1 if you have the `gmtime_r' function. */
/* #undef HAVE_GMTIME_R */

/* define to use system printf */
/* #undef HAVE_GOOD_PRINTF */

/* Define to 1 if you have the `hasmntopt' function. */
/* #undef HAVE_HASMNTOPT */

/* Target the Windows XP API */
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif

#if _WIN32_WINNT >= 0x0600
/* if_indextoname() and if_nametoindex() are available on Windows Vista/Server
 * 2008 or later, so we can make use of them when building agaist Vista/Server
 * 2008 or later.
 */

/* Define to 1 if you have the `if_indextoname' function. */
#define HAVE_IF_INDEXTONAME 1

/* Define to 1 if you have the `if_nametoindex' function. */
#define HAVE_IF_NAMETOINDEX 1

#endif

/* Define to 1 if you have the `inotify_init1' function. */
/* #undef HAVE_INOTIFY_INIT1 */

/* define to support printing 64-bit integers with format I64 */
#define HAVE_INT64_AND_I64 1

/* Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>. */
#if !defined (_MSC_VER) || (_MSC_VER >= 1600)
#define HAVE_INTMAX_T 1
#else /* !_MSC_VER || _MSC_VER >= 1600 */
/* #undef HAVE_INTMAX_T */
#endif /* _MSC_VER < 1600 */

/* Define to 1 if you have the <inttypes.h> header file. */
#if !defined (_MSC_VER) || (_MSC_VER >= 1800)
#define HAVE_INTTYPES_H 1
#else /* !_MSC_VER || _MSC_VER >= 1800 */
/* #undef HAVE_INTTYPES_H */
#endif /* _MSC_VER < 1800 */

/* Define if <inttypes.h> exists, doesn't clash with <sys/types.h>, and
   declares uintmax_t. */
#ifndef _MSC_VER
#define HAVE_INTTYPES_H_WITH_UINTMAX 1
#else /* !_MSC_VER */
/* #undef HAVE_INTTYPES_H_WITH_UINTMAX */
#endif /* _MSC_VER */

/* Define if we have struct ip_mreqn */
/* #undef HAVE_IP_MREQN */

/* Define to 1 if you have the `issetugid' function. */
/* #undef HAVE_ISSETUGID */

/* Define to 1 if you have the `kevent' function. */
/* #undef HAVE_KEVENT */

/* Define to 1 if you have the `kqueue' function. */
/* #undef HAVE_KQUEUE */

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
/* #undef HAVE_LANGINFO_CODESET */

/* Have nl_langinfo (_NL_CTYPE_OUTDIGITn_MB) */
/* #undef HAVE_LANGINFO_OUTDIGIT */

/* Have nl_langinfo (PM_STR) */
/* #undef HAVE_LANGINFO_TIME */

/* Define to 1 if you have the `lchmod' function. */
/* #undef HAVE_LCHMOD */

/* Define to 1 if you have the `lchown' function. */
/* #undef HAVE_LCHOWN */

/* Define if your <locale.h> file defines LC_MESSAGES. */
/* #undef HAVE_LC_MESSAGES */

/* Define if you have the __libc_enable_secure variable (GNU libc, eglibc) */
/* #undef HAVE_LIBC_ENABLE_SECURE */

/* Define if libelf is available */
/* #undef HAVE_LIBELF */

/* Define to 1 if you have the <linux/magic.h> header file. */
/* #undef HAVE_LINUX_MAGIC_H */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `localtime_r' function. */
/* #undef HAVE_LOCALTIME_R */

/* Define if you have the 'long double' type. */
#define HAVE_LONG_DOUBLE 1

/* Define if you have the 'long long' type. */
#define HAVE_LONG_LONG 1

/* define if system printf can print long long */
#define HAVE_LONG_LONG_FORMAT 1

/* Define to 1 if you have the `lstat' function. */
/* #undef HAVE_LSTAT */

/* Define to 1 if you have the <mach/mach_time.h> header file. */
/* #undef HAVE_MACH_MACH_TIME_H */

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the `memalign' function. */
/* #undef HAVE_MEMALIGN */

/* Define to 1 if you have the `memmem' function. */
/* #undef HAVE_MEMMEM */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mmap' function. */
/* #undef HAVE_MMAP */

/* Define to 1 if you have the <mntent.h> header file. */
/* #undef HAVE_MNTENT_H */

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* We have AF_NETLINK sockets */
/* #undef HAVE_NETLINK */

/* Define to 1 if you have the `newlocale' function. */
/* #undef HAVE_NEWLOCALE */

/* Have non-POSIX function getgrgid_r */
/* #undef HAVE_NONPOSIX_GETGRGID_R */

/* Have non-POSIX function getpwuid_r */
/* #undef HAVE_NONPOSIX_GETPWUID_R */

/* open option O_DIRECTORY */
/* #undef HAVE_OPEN_O_DIRECTORY */

/* Define to 1 if you have the `pipe2' function. */
/* #undef HAVE_PIPE2 */

/* Define to 1 if you have the `poll' function. */
/* #undef HAVE_POLL */

/* Have POSIX function getgrgid_r */
/* #undef HAVE_POSIX_GETGRGID_R */

/* Have POSIX function getpwuid_r */
/* #undef HAVE_POSIX_GETPWUID_R */

/* Define to 1 if you have the `posix_memalign' function. */
/* #undef HAVE_POSIX_MEMALIGN */

/* Define to 1 if you have the `prlimit' function. */
/* #undef HAVE_PRLIMIT */

/* Have function pthread_attr_setstacksize */
/* #undef HAVE_PTHREAD_ATTR_SETSTACKSIZE */

/* Have function pthread_condattr_setclock */
/* #undef HAVE_PTHREAD_CONDATTR_SETCLOCK */

/* Have function pthread_cond_timedwait_relative_np */
/* #undef HAVE_PTHREAD_COND_TIMEDWAIT_RELATIVE_NP */

/* Define to 1 if the system has the type `ptrdiff_t'. */
#define HAVE_PTRDIFF_T 1

/* Define to 1 if you have the `readlink' function. */
/* #undef HAVE_READLINK */

/* Define to 1 if you have the 'res_init' function. */
/* #undef HAVE_RES_INIT */

/* Define to 1 if you have the <sched.h> header file. */
/* #undef HAVE_SCHED_H */

/* Define to 1 if libselinux is available */
/* #undef HAVE_SELINUX */

/* Define to 1 if you have the `sendmmsg` function */
/* #undef HAVE_SENDMMSG */

/* Define to 1 if you have the `recvmmsg` function */
/* #undef HAVE_RECVMMSG */

/* Define to 1 if you have the <selinux/selinux.h> header file. */
/* #undef HAVE_SELINUX_SELINUX_H */

/* Define to 1 if you have the `setenv' function. */
/* #undef HAVE_SETENV */

/* Define to 1 if you have the `setmntent' function. */
/* #undef HAVE_SETMNTENT */

/* Define if you have the 'sig_atomic_t' type. */
#define HAVE_SIG_ATOMIC_T 1

/* Define to 1 if you have the `snprintf' function. */
#if !defined (_MSC_VER) || (_MSC_VER >= 1900)
#define HAVE_SNPRINTF 1
#ifdef __DMC__
#define snprintf _snprintf
#endif
#else /* !_MSC_VER || _MSC_VER >= 1900 */
/* #undef HAVE_SNPRINTF */
#endif /* _MSC_VER < 1900 */

/* Define to 1 if you have the `splice' function. */
/* #undef HAVE_SPLICE */

/* Define to 1 if you have the `statfs' function. */
/* #undef HAVE_STATFS */

/* Define to 1 if you have the `statvfs' function. */
/* #undef HAVE_STATVFS */

/* Define to 1 if you have the <stdint.h> header file. */
#ifndef _MSC_VER
#define HAVE_STDINT_H 1
#else /* _MSC_VER */
#if (_MSC_VER >= 1600) /*VS 2010 ships with stdint.h*/
#define HAVE_STDINT_H 1
#else
/* #undef HAVE_STDINT_H */
#endif
#endif /* _MSC_VER */

/* Define if <stdint.h> exists, doesn't clash with <sys/types.h>, and declares
   uintmax_t. */
#ifndef _MSC_VER
#define HAVE_STDINT_H_WITH_UINTMAX 1
#else /* _MSC_VER */
#if (_MSC_VER >= 1600)
#define HAVE_STDINT_H_WITH_UINTMAX 1
#else
/* #undef HAVE_STDINT_H_WITH_UINTMAX */
#endif
#endif /* _MSC_VER */

/* Define to 1 if you have the `stpcpy' function. */
/* #undef HAVE_STPCPY */

/* Define to 1 if you have the `strcasecmp' function. */
#if defined(_MSC_VER)
#define strcasecmp _stricmp
#endif /* _MSC_VER uses _stricmp, which is identical to strcasecmp */

#if !defined(__DMC__)
#define HAVE_STRCASECMP 1
#endif /* _MSC_VER or __gcc__ */

/* Define to 1 if you have the <strings.h> header file. */
#if !defined(_MSC_VER) && !defined(__DMC__)
#define HAVE_STRINGS_H 1
#else /* _MSC_VER or __DMC__ */
/* #undef HAVE_STRINGS_H */
#endif /* _MSC_VER or __DMC__ */

/* Have functions strlcpy and strlcat */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the `strncasecmp' function. */
#if !defined(__DMC__)
#if defined(_MSC_VER)
#define strncasecmp _strnicmp
#endif /* _MSC_VER uses _strnicmp, which is identical to strncasecmp */
#define HAVE_STRNCASECMP 1
#else /* __DMC__ */
/* #undef HAVE_STRNCASECMP */
#endif /* __DMC__ */

/* Define to 1 if you have the `strsignal' function. */
/* #undef HAVE_STRSIGNAL */

/* Define to 1 if you have the `strtod_l' function. */
/* #undef HAVE_STRTOD_L */

/* Define to 1 if you have the `strtoll_l' function. */
/* #undef HAVE_STRTOLL_L */

/* Define to 1 if you have the `strtoull_l' function. */
/* #undef HAVE_STRTOULL_L */

/* Define to 1 if `d_type' is a member of `struct dirent'. */
/* #undef HAVE_STRUCT_DIRENT_D_TYPE */

/* Define to 1 if `f_bavail' is a member of `struct statfs'. */
/* #undef HAVE_STRUCT_STATFS_F_BAVAIL */

/* Define to 1 if `f_fstypename' is a member of `struct statfs'. */
/* #undef HAVE_STRUCT_STATFS_F_FSTYPENAME */

/* Define to 1 if `f_basetype' is a member of `struct statvfs'. */
/* #undef HAVE_STRUCT_STATVFS_F_BASETYPE */

/* Define to 1 if `f_fstypename' is a member of `struct statvfs'. */
/* #undef HAVE_STRUCT_STATVFS_F_FSTYPENAME */

/* Define to 1 if `st_atimensec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIMENSEC */

/* Define to 1 if `st_atim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIM_TV_NSEC */

/* Define to 1 if `st_blksize' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BLKSIZE */

/* Define to 1 if `st_blocks' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BLOCKS */

/* Define to 1 if `st_ctimensec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_CTIMENSEC */

/* Define to 1 if `st_ctim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_CTIM_TV_NSEC */

/* Define to 1 if `st_mtimensec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_MTIMENSEC */

/* Define to 1 if `st_mtim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_MTIM_TV_NSEC */

/* Define to 1 if `tm_gmtoff' is a a member of `struct tm'. */
/* #undef HAVE_STRUCT_TM_TM_GMTOFF */

/* Define to 1 if `__tm_gmtoff' is a member of `struct tm'. */
/* #undef HAVE_STRUCT_TM___TM_GMTOFF */

/* Define to 1 if you have the `symlink' function. */
/* #undef HAVE_SYMLINK */

/* Define to 1 if you have the `sysctlbyname' function. */
/* #undef HAVE_SYSCTLBYNAME */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/event.h> header file. */
/* #undef HAVE_SYS_EVENT_H */

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/inotify.h> header file. */
/* #undef HAVE_SYS_INOTIFY_H */

/* Define to 1 if you have the <sys/mntctl.h> header file. */
/* #undef HAVE_SYS_MNTCTL_H */

/* Define to 1 if you have the <sys/mnttab.h> header file. */
/* #undef HAVE_SYS_MNTTAB_H */

/* Define to 1 if you have the <sys/mount.h> header file. */
/* #undef HAVE_SYS_MOUNT_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#if !defined(_MSC_VER) && !defined(__DMC__)
#define HAVE_SYS_PARAM_H 1
#else /* _MSC_VER or __DMC__ */
/* #undef HAVE_SYS_PARAM_H */
#endif /* _MSC_VER or __DMC__ */

/* Define to 1 if you have the <sys/prctl.h> header file. */
/* #undef HAVE_SYS_PRCTL_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef HAVE_SYS_RESOURCE_H */

/* found fd_set in sys/select.h */
/* #undef HAVE_SYS_SELECT_H */

/* Define to 1 if you have the <sys/statfs.h> header file. */
/* #undef HAVE_SYS_STATFS_H */

/* Define to 1 if you have the <sys/statvfs.h> header file. */
/* #undef HAVE_SYS_STATVFS_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
/* #undef HAVE_SYS_SYSCTL_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#ifndef _MSC_VER
#define HAVE_SYS_TIME_H 1
#else /* _MSC_VER */
/* #undef HAVE_SYS_TIME_H */
#endif /* _MSC_VER */

/* Define to 1 if you have the <sys/vfstab.h> header file. */
/* #undef HAVE_SYS_VFSTAB_H */

/* Define to 1 if you have the <sys/vfs.h> header file. */
/* #undef HAVE_SYS_VFS_H */

/* Define to 1 if you have the <sys/vmount.h> header file. */
/* #undef HAVE_SYS_VMOUNT_H */

/* Define to 1 if you have the <sys/xattr.h> header file. */
/* #undef HAVE_SYS_XATTR_H */

/* Define to 1 if you have the `timegm' function. */
/* #undef HAVE_TIMEGM */

/* Define if your printf function family supports positional parameters as
   specified by Unix98. */
/* #undef HAVE_UNIX98_PRINTF */

/* Define to 1 if you have the `unsetenv' function. */
/* #undef HAVE_UNSETENV */

/* Define to 1 if you have the `uselocale' function. */
/* #undef HAVE_USELOCALE */

/* Define to 1 if you have the `utimes' function. */
/* #undef HAVE_UTIMES */

/* Define to 1 if you have the `valloc' function. */
/* #undef HAVE_VALLOC */

/* Define to 1 if you have the <values.h> header file. */
#if !defined(_MSC_VER) && !defined(__DMC__)
#define HAVE_VALUES_H 1
#else /* _MSC_VER or __DMC__ */
/* #undef HAVE_VALUES_H */
#endif /* _MSC_VER or __DMC__ */

/* Define to 1 if you have the `vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#if !defined (_MSC_VER) || (_MSC_VER >= 1500)
#define HAVE_VSNPRINTF 1
#ifdef __DMC__
#define vsnprintf _vsnprintf
#endif
#else /* !_MSC_VER || _MSC_VER >= 1500 */
/* #undef HAVE_VSNPRINTF */
#endif /* _MSC_VER < 1500 */

/* Define if you have the 'wchar_t' type. */
#define HAVE_WCHAR_T 1

/* Define to 1 if you have the `wcslen' function. */
#define HAVE_WCSLEN 1

/* Define if you have the 'wint_t' type. */
#define HAVE_WINT_T 1

/* Define to 1 if xattr is available */
/* #undef HAVE_XATTR */

/* Define to 1 if xattr API uses XATTR_NOFOLLOW */
/* #undef HAVE_XATTR_NOFOLLOW */

/* Define to 1 if you have the <xlocale.h> header file. */
/* #undef HAVE_XLOCALE_H */

/* Define to 1 if you have the `_NSGetEnviron' function. */
/* #undef HAVE__NSGETENVIRON */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 if `major', `minor', and `makedev' are declared in <mkdev.h>.
   */
/* #undef MAJOR_IN_MKDEV */

/* Define to 1 if `major', `minor', and `makedev' are declared in
   <sysmacros.h>. */
/* #undef MAJOR_IN_SYSMACROS */

/* didn't find fd_set */
#define NO_FD_SET 1

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Define to the address where bug reports for this package should be sent. */
//#define PACKAGE_BUGREPORT "http://bugzilla.gnome.org/enter_bug.cgi?product=glib"

/* Define to the full name of this package. */
//#define PACKAGE_NAME "glib"

/* Define to the full name and version of this package. */
//#define PACKAGE_STRING "glib 2.50.2"

/* Define to the one symbol short name of this package. */
//#define PACKAGE_TARNAME "glib"

/* Define to the home page for this package. */
//#define PACKAGE_URL ""

/* Define to the version of this package. */
//#define PACKAGE_VERSION "2.50.2"

/* define if posix_memalign() can allocate any size */
/* #undef POSIX_MEMALIGN_WITH_COMPLIANT_ALLOCS */

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `long long', as computed by sizeof. */
#ifndef _MSC_VER
#define SIZEOF_LONG_LONG 8
#else /* _MSC_VER */
#define SIZEOF_LONG_LONG 0
#endif /* _MSC_VER */

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 4

/* The size of `void *', as computed by sizeof. */
#ifdef _MSC_VER
#if (defined(_M_X64) || defined(_M_AMD64))
#define SIZEOF_VOID_P 8
#elif (defined(_M_IX86))
#define SIZEOF_VOID_P 4
#endif
#else
#define SIZEOF_VOID_P 4
#endif

/* The size of `__int64', as computed by sizeof. */
#define SIZEOF___INT64 8

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Number of arguments to statfs() */
/* #undef STATFS_ARGS */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Use no threads */
/* #undef THREADS_NONE */

/* Use pthreads */
/* #undef THREADS_POSIX */

/* Use w32 threads */
#define THREADS_WIN32 1

/* Using GNU libiconv */
/* #undef USE_LIBICONV_GNU */

/* Using a native implementation of iconv in a separate library */
#define USE_LIBICONV_NATIVE 1

/* Define to use statfs() */
/* #undef USE_STATFS */

/* Define to use statvfs() */
/* #undef USE_STATVFS */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
/* # undef _ALL_SOURCE */
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
/* # undef _GNU_SOURCE */
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
/* # undef _POSIX_PTHREAD_SEMANTICS */
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
/* # undef _TANDEM_SOURCE */
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
/* # undef __EXTENSIONS__ */
#endif

/* using the system-supplied PCRE library */
/* This is defined in the *_PCRE MSVC project configs */
/* #undef USE_SYSTEM_PCRE */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
/* # define _DARWIN_USE_64_BIT_INODE 1 */
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* defines how to decorate public symbols while building */
#ifdef _MSC_VER
#define _GLIB_EXTERN __declspec (dllexport) extern
#else
#define _GLIB_EXTERN __attribute__((visibility("default"))) __declspec (dllexport) extern
#endif

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Needed to get declarations for msg_control and msg_controllen on Solaris */
/* #undef _XOPEN_SOURCE */

/* Needed to get declarations for msg_control and msg_controllen on Solaris */
/* #undef _XOPEN_SOURCE_EXTENDED */

/* Needed to get declarations for msg_control and msg_controllen on Solaris */
/* #undef __EXTENSIONS__ */

/* compiler supports atomic operations */
/* #undef __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to long or long long if <inttypes.h> and <stdint.h> don't define. */
/* #undef intmax_t */

/* Define to empty if the C compiler doesn't support this keyword. */
/* #undef signed */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
