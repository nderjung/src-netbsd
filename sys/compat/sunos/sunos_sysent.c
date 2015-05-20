/* $NetBSD: sunos_sysent.c,v 1.83 2015/03/07 16:41:54 christos Exp $ */

/*
 * System call switch table.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	NetBSD: syscalls.master,v 1.76 2013/11/07 19:37:19 njoly Exp
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: sunos_sysent.c,v 1.83 2015/03/07 16:41:54 christos Exp $");

#if defined(_KERNEL_OPT)
#include "opt_sysv.h"
#endif
#include <sys/param.h>
#include <sys/systm.h>
#include <sys/signal.h>
#include <sys/mount.h>
#include <sys/poll.h>
#include <sys/sched.h>
#include <sys/syscallargs.h>
#include <compat/sunos/sunos.h>
#include <compat/sunos/sunos_syscallargs.h>

#define	s(type)	sizeof(type)
#define	n(type)	(sizeof(type)/sizeof (register_t))
#define	ns(type)	n(type), s(type)

struct sysent sunos_sysent[] = {
	{ 0, 0, 0,
	    (sy_call_t *)sys_nosys, 0, 0 },		/* 0 = syscall */
	{ ns(struct sys_exit_args), 0,
	    (sy_call_t *)sys_exit, 0, 0 },		/* 1 = exit */
	{ 0, 0, 0,
	    (sy_call_t *)sys_fork, 0, 0 },		/* 2 = fork */
	{ ns(struct sys_read_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_read, 0, 0 },		/* 3 = read */
	{ ns(struct sys_write_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_write, 0, 0 },		/* 4 = write */
	{ ns(struct sunos_sys_open_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_open, 0, 0 },	/* 5 = open */
	{ ns(struct sys_close_args), 0,
	    (sy_call_t *)sys_close, 0, 0 },		/* 6 = close */
	{ ns(struct sunos_sys_wait4_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_wait4, 0, 0 },	/* 7 = wait4 */
	{ ns(struct sunos_sys_creat_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_creat, 0, 0 },	/* 8 = creat */
	{ ns(struct sys_link_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_link, 0, 0 },		/* 9 = link */
	{ ns(struct sys_unlink_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_unlink, 0, 0 },		/* 10 = unlink */
	{ ns(struct sunos_sys_execv_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_execv, 0, 0 },	/* 11 = execv */
	{ ns(struct sys_chdir_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_chdir, 0, 0 },		/* 12 = chdir */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 13 = obsolete old_time */
	{ ns(struct sunos_sys_mknod_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_mknod, 0, 0 },	/* 14 = mknod */
	{ ns(struct sys_chmod_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_chmod, 0, 0 },		/* 15 = chmod */
	{ ns(struct sys_chown_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_chown, 0, 0 },		/* 16 = chown */
	{ ns(struct sys_obreak_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_obreak, 0, 0 },		/* 17 = break */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 18 = obsolete old_stat */
	{ ns(struct compat_43_sys_lseek_args), 0,
	    (sy_call_t *)compat_43_sys_lseek, 0, 0 },	/* 19 = lseek */
	{ 0, 0, 0,
	    (sy_call_t *)sys_getpid_with_ppid, 0, 0 },/* 20 = getpid_with_ppid */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 21 = obsolete sunos_old_mount */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 22 = unimplemented System V umount */
	{ ns(struct sys_setuid_args), 0,
	    (sy_call_t *)sys_setuid, 0, 0 },		/* 23 = setuid */
	{ 0, 0, 0,
	    (sy_call_t *)sys_getuid_with_euid, 0, 0 },/* 24 = getuid_with_euid */
	{ ns(struct sunos_sys_stime_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_stime, 0, 0 },	/* 25 = stime */
	{ ns(struct sunos_sys_ptrace_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_ptrace, 0, 0 },	/* 26 = ptrace */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 27 = unimplemented old_sunos_alarm */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 28 = unimplemented old_sunos_fstat */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 29 = unimplemented old_sunos_pause */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 30 = unimplemented old_sunos_utime */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 31 = unimplemented old_sunos_stty */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 32 = unimplemented old_sunos_gtty */
	{ ns(struct sys_access_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_access, 0, 0 },		/* 33 = access */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 34 = unimplemented old_sunos_nice */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 35 = unimplemented old_sunos_ftime */
	{ 0, 0, 0,
	    (sy_call_t *)sys_sync, 0, 0 },		/* 36 = sync */
	{ ns(struct sys_kill_args), 0,
	    (sy_call_t *)sys_kill, 0, 0 },		/* 37 = kill */
	{ ns(struct compat_43_sys_stat_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_stat, 0, 0 },	/* 38 = stat */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 39 = unimplemented sunos_setpgrp */
	{ ns(struct compat_43_sys_lstat_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_lstat, 0, 0 },	/* 40 = lstat */
	{ ns(struct sys_dup_args), 0,
	    (sy_call_t *)sys_dup, 0, 0 },		/* 41 = dup */
	{ 0, 0, 0,
	    (sy_call_t *)sys_pipe, 0, 0 },		/* 42 = pipe */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 43 = unimplemented sunos_times */
	{ ns(struct sys_profil_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_profil, 0, 0 },		/* 44 = profil */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 45 = unimplemented */
	{ ns(struct sys_setgid_args), 0,
	    (sy_call_t *)sys_setgid, 0, 0 },		/* 46 = setgid */
	{ 0, 0, 0,
	    (sy_call_t *)sys_getgid_with_egid, 0, 0 },/* 47 = getgid_with_egid */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 48 = unimplemented sunos_ssig */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 49 = unimplemented reserved for USG */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 50 = unimplemented reserved for USG */
	{ ns(struct sys_acct_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_acct, 0, 0 },		/* 51 = acct */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 52 = unimplemented */
	{ ns(struct sunos_sys_mctl_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_mctl, 0, 0 },	/* 53 = mctl */
	{ ns(struct sunos_sys_ioctl_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_ioctl, 0, 0 },	/* 54 = ioctl */
	{ ns(struct sunos_sys_reboot_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_reboot, 0, 0 },	/* 55 = reboot */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 56 = obsolete sunos_owait3 */
	{ ns(struct sys_symlink_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_symlink, 0, 0 },		/* 57 = symlink */
	{ ns(struct sys_readlink_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_readlink, 0, 0 },	/* 58 = readlink */
	{ ns(struct sunos_sys_execve_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_execve, 0, 0 },	/* 59 = execve */
	{ ns(struct sys_umask_args), 0,
	    (sy_call_t *)sys_umask, 0, 0 },		/* 60 = umask */
	{ ns(struct sys_chroot_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_chroot, 0, 0 },		/* 61 = chroot */
	{ ns(struct compat_43_sys_fstat_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_fstat, 0, 0 },	/* 62 = fstat */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 63 = unimplemented */
	{ 0, 0, 0,
	    (sy_call_t *)compat_43_sys_getpagesize, 0, 0 },/* 64 = getpagesize */
	{ ns(struct sunos_sys_omsync_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_omsync, 0, 0 },	/* 65 = omsync */
	{ 0, 0, 0,
	    (sy_call_t *)sys_vfork, 0, 0 },		/* 66 = vfork */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 67 = obsolete vread */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 68 = obsolete vwrite */
	{ ns(struct sys_sbrk_args), 0,
	    (sy_call_t *)sys_sbrk, 0, 0 },		/* 69 = sbrk */
	{ ns(struct sys_sstk_args), 0,
	    (sy_call_t *)sys_sstk, 0, 0 },		/* 70 = sstk */
	{ ns(struct sunos_sys_mmap_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_mmap, 0, 0 },	/* 71 = mmap */
	{ ns(struct sys_ovadvise_args), 0,
	    (sy_call_t *)sys_ovadvise, 0, 0 },	/* 72 = vadvise */
	{ ns(struct sys_munmap_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_munmap, 0, 0 },		/* 73 = munmap */
	{ ns(struct sys_mprotect_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_mprotect, 0, 0 },	/* 74 = mprotect */
	{ ns(struct sys_madvise_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_madvise, 0, 0 },		/* 75 = madvise */
	{ 0, 0, 0,
	    (sy_call_t *)sunos_sys_vhangup, 0, 0 },	/* 76 = vhangup */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 77 = unimplemented vlimit */
	{ ns(struct sys_mincore_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_mincore, 0, 0 },		/* 78 = mincore */
	{ ns(struct sys_getgroups_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_getgroups, 0, 0 },	/* 79 = getgroups */
	{ ns(struct sys_setgroups_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_setgroups, 0, 0 },	/* 80 = setgroups */
	{ 0, 0, 0,
	    (sy_call_t *)sys_getpgrp, 0, 0 },		/* 81 = getpgrp */
	{ ns(struct sunos_sys_setpgrp_args), 0,
	    (sy_call_t *)sunos_sys_setpgrp, 0, 0 },	/* 82 = setpgrp */
	{ ns(struct compat_50_sys_setitimer_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_50_sys_setitimer, 0, 0 },/* 83 = setitimer */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 84 = unimplemented sunos_sys_wait */
	{ ns(struct compat_12_sys_swapon_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_12_sys_swapon, 0, 0 },/* 85 = swapon */
	{ ns(struct compat_50_sys_getitimer_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_50_sys_getitimer, 0, 0 },/* 86 = getitimer */
	{ ns(struct compat_43_sys_gethostname_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_gethostname, 0, 0 },/* 87 = gethostname */
	{ ns(struct compat_43_sys_sethostname_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_sethostname, 0, 0 },/* 88 = sethostname */
	{ 0, 0, 0,
	    (sy_call_t *)compat_43_sys_getdtablesize, 0, 0 },/* 89 = getdtablesize */
	{ ns(struct sys_dup2_args), 0,
	    (sy_call_t *)sys_dup2, 0, 0 },		/* 90 = dup2 */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 91 = unimplemented getdopt */
	{ ns(struct sunos_sys_fcntl_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_fcntl, 0, 0 },	/* 92 = fcntl */
	{ ns(struct compat_50_sys_select_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_50_sys_select, 0, 0 },/* 93 = select */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 94 = unimplemented setdopt */
	{ ns(struct sys_fsync_args), 0,
	    (sy_call_t *)sys_fsync, 0, 0 },		/* 95 = fsync */
	{ ns(struct sys_setpriority_args), 0,
	    (sy_call_t *)sys_setpriority, 0, 0 },	/* 96 = setpriority */
	{ ns(struct sunos_sys_socket_args), 0,
	    (sy_call_t *)sunos_sys_socket, 0, 0 },	/* 97 = socket */
	{ ns(struct sys_connect_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_connect, 0, 0 },		/* 98 = connect */
	{ ns(struct compat_43_sys_accept_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_accept, 0, 0 },/* 99 = accept */
	{ ns(struct sys_getpriority_args), 0,
	    (sy_call_t *)sys_getpriority, 0, 0 },	/* 100 = getpriority */
	{ ns(struct compat_43_sys_send_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_send, 0, 0 },	/* 101 = send */
	{ ns(struct compat_43_sys_recv_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_recv, 0, 0 },	/* 102 = recv */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 103 = unimplemented old socketaddr */
	{ ns(struct sys_bind_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_bind, 0, 0 },		/* 104 = bind */
	{ ns(struct sunos_sys_setsockopt_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_setsockopt, 0, 0 },/* 105 = setsockopt */
	{ ns(struct sys_listen_args), 0,
	    (sy_call_t *)sys_listen, 0, 0 },		/* 106 = listen */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 107 = unimplemented vtimes */
	{ ns(struct sunos_sys_sigvec_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_sigvec, 0, 0 },	/* 108 = sigvec */
	{ ns(struct compat_43_sys_sigblock_args), 0,
	    (sy_call_t *)compat_43_sys_sigblock, 0, 0 },/* 109 = sigblock */
	{ ns(struct compat_43_sys_sigsetmask_args), 0,
	    (sy_call_t *)compat_43_sys_sigsetmask, 0, 0 },/* 110 = sigsetmask */
	{ ns(struct sunos_sys_sigsuspend_args), 0,
	    (sy_call_t *)sunos_sys_sigsuspend, 0, 0 },/* 111 = sigsuspend */
	{ ns(struct compat_43_sys_sigstack_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_sigstack, 0, 0 },/* 112 = sigstack */
	{ ns(struct compat_43_sys_recvmsg_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_recvmsg, 0, 0 },/* 113 = recvmsg */
	{ ns(struct compat_43_sys_sendmsg_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_sendmsg, 0, 0 },/* 114 = sendmsg */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 115 = obsolete vtrace */
	{ ns(struct compat_50_sys_gettimeofday_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_50_sys_gettimeofday, 0, 0 },/* 116 = gettimeofday */
	{ ns(struct compat_50_sys_getrusage_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_50_sys_getrusage, 0, 0 },/* 117 = getrusage */
	{ ns(struct sys_getsockopt_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_getsockopt, 0, 0 },	/* 118 = getsockopt */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 119 = unimplemented */
	{ ns(struct sys_readv_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_readv, 0, 0 },		/* 120 = readv */
	{ ns(struct sys_writev_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_writev, 0, 0 },		/* 121 = writev */
	{ ns(struct compat_50_sys_settimeofday_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_50_sys_settimeofday, 0, 0 },/* 122 = settimeofday */
	{ ns(struct sys_fchown_args), 0,
	    (sy_call_t *)sys_fchown, 0, 0 },		/* 123 = fchown */
	{ ns(struct sys_fchmod_args), 0,
	    (sy_call_t *)sys_fchmod, 0, 0 },		/* 124 = fchmod */
	{ ns(struct compat_43_sys_recvfrom_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_recvfrom, 0, 0 },/* 125 = recvfrom */
	{ ns(struct sys_setreuid_args), 0,
	    (sy_call_t *)sys_setreuid, 0, 0 },	/* 126 = setreuid */
	{ ns(struct sys_setregid_args), 0,
	    (sy_call_t *)sys_setregid, 0, 0 },	/* 127 = setregid */
	{ ns(struct sys_rename_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_rename, 0, 0 },		/* 128 = rename */
	{ ns(struct compat_43_sys_truncate_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_truncate, 0, 0 },/* 129 = truncate */
	{ ns(struct compat_43_sys_ftruncate_args), 0,
	    (sy_call_t *)compat_43_sys_ftruncate, 0, 0 },/* 130 = ftruncate */
	{ ns(struct sys_flock_args), 0,
	    (sy_call_t *)sys_flock, 0, 0 },		/* 131 = flock */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 132 = unimplemented */
	{ ns(struct sys_sendto_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_sendto, 0, 0 },		/* 133 = sendto */
	{ ns(struct sys_shutdown_args), 0,
	    (sy_call_t *)sys_shutdown, 0, 0 },	/* 134 = shutdown */
	{ ns(struct sunos_sys_socketpair_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_socketpair, 0, 0 },/* 135 = socketpair */
	{ ns(struct sys_mkdir_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_mkdir, 0, 0 },		/* 136 = mkdir */
	{ ns(struct sys_rmdir_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_rmdir, 0, 0 },		/* 137 = rmdir */
	{ ns(struct compat_50_sys_utimes_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_50_sys_utimes, 0, 0 },/* 138 = utimes */
	{ ns(struct sunos_sys_sigreturn_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_sigreturn, 0, 0 },	/* 139 = sigreturn */
	{ ns(struct compat_50_sys_adjtime_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_50_sys_adjtime, 0, 0 },/* 140 = adjtime */
	{ ns(struct compat_43_sys_getpeername_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_getpeername, 0, 0 },/* 141 = getpeername */
	{ 0, 0, 0,
	    (sy_call_t *)compat_43_sys_gethostid, 0, 0 },/* 142 = gethostid */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 143 = unimplemented old sethostid */
	{ ns(struct sunos_sys_getrlimit_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_getrlimit, 0, 0 },	/* 144 = getrlimit */
	{ ns(struct sunos_sys_setrlimit_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_setrlimit, 0, 0 },	/* 145 = setrlimit */
	{ ns(struct compat_43_sys_killpg_args), 0,
	    (sy_call_t *)compat_43_sys_killpg, 0, 0 },/* 146 = killpg */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 147 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 148 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 149 = unimplemented */
	{ ns(struct compat_43_sys_getsockname_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_43_sys_getsockname, 0, 0 },/* 150 = getsockname */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 151 = unimplemented getmsg */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 152 = unimplemented putmsg */
	{ ns(struct sys_poll_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_poll, 0, 0 },		/* 153 = poll */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 154 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 155 = unimplemented nfssvc */
	{ ns(struct compat_12_sys_getdirentries_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_12_sys_getdirentries, 0, 0 },/* 156 = getdirentries */
	{ ns(struct sunos_sys_statfs_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_statfs, 0, 0 },	/* 157 = statfs */
	{ ns(struct sunos_sys_fstatfs_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_fstatfs, 0, 0 },	/* 158 = fstatfs */
	{ ns(struct sunos_sys_unmount_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_unmount, 0, 0 },	/* 159 = unmount */
	{ 0, 0, 0,
	    (sy_call_t *)async_daemon, 0, 0 },	/* 160 = async_daemon */
	{ ns(struct compat_30_sys_getfh_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_30_sys_getfh, 0, 0 },	/* 161 = getfh */
	{ ns(struct compat_09_sys_getdomainname_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_09_sys_getdomainname, 0, 0 },/* 162 = getdomainname */
	{ ns(struct compat_09_sys_setdomainname_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_09_sys_setdomainname, 0, 0 },/* 163 = setdomainname */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 164 = unimplemented rtschedule */
	{ ns(struct sunos_sys_quotactl_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_quotactl, 0, 0 },	/* 165 = quotactl */
	{ ns(struct sunos_sys_exportfs_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_exportfs, 0, 0 },	/* 166 = exportfs */
	{ ns(struct sunos_sys_mount_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_mount, 0, 0 },	/* 167 = mount */
	{ ns(struct sunos_sys_ustat_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_ustat, 0, 0 },	/* 168 = ustat */
#ifdef SYSVSEM
	{ ns(struct compat_10_sys_semsys_args), 0,
	    (sy_call_t *)compat_10_sys_semsys, 0, 0 },/* 169 = semsys */
#else
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 169 = unimplemented semsys */
#endif
#ifdef SYSVMSG
	{ ns(struct compat_10_sys_msgsys_args), 0,
	    (sy_call_t *)compat_10_sys_msgsys, 0, 0 },/* 170 = msgsys */
#else
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 170 = unimplemented msgsys */
#endif
#ifdef SYSVSHM
	{ ns(struct compat_10_sys_shmsys_args), 0,
	    (sy_call_t *)compat_10_sys_shmsys, 0, 0 },/* 171 = shmsys */
#else
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 171 = unimplemented shmsys */
#endif
	{ ns(struct sunos_sys_auditsys_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_auditsys, 0, 0 },	/* 172 = auditsys */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 173 = unimplemented rfssys */
	{ ns(struct sunos_sys_getdents_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_getdents, 0, 0 },	/* 174 = getdents */
	{ 0, 0, 0,
	    (sy_call_t *)sys_setsid, 0, 0 },		/* 175 = setsid */
	{ ns(struct sys_fchdir_args), 0,
	    (sy_call_t *)sys_fchdir, 0, 0 },		/* 176 = fchdir */
	{ ns(struct sys_fchroot_args), 0,
	    (sy_call_t *)sys_fchroot, 0, 0 },		/* 177 = fchroot */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 178 = unimplemented vpixsys */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 179 = unimplemented aioread */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 180 = unimplemented aiowrite */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 181 = unimplemented aiowait */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 182 = unimplemented aiocancel */
	{ ns(struct sunos_sys_sigpending_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_sigpending, 0, 0 },/* 183 = sigpending */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 184 = unimplemented */
	{ ns(struct sys_setpgid_args), 0,
	    (sy_call_t *)sys_setpgid, 0, 0 },		/* 185 = setpgid */
	{ ns(struct sys_pathconf_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_pathconf, 0, 0 },	/* 186 = pathconf */
	{ ns(struct sys_fpathconf_args), 0,
	    (sy_call_t *)sys_fpathconf, 0, 0 },	/* 187 = fpathconf */
	{ ns(struct sunos_sys_sysconf_args), 0,
	    (sy_call_t *)sunos_sys_sysconf, 0, 0 },	/* 188 = sysconf */
	{ ns(struct sunos_sys_uname_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sunos_sys_uname, 0, 0 },	/* 189 = uname */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 190 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 191 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 192 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 193 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 194 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 195 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 196 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 197 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 198 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 199 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 200 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 201 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 202 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 203 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 204 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 205 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 206 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 207 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 208 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 209 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 210 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 211 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 212 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 213 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 214 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 215 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 216 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 217 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 218 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 219 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 220 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 221 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 222 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 223 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 224 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 225 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 226 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 227 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 228 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 229 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 230 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 231 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 232 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 233 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 234 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 235 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 236 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 237 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 238 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 239 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 240 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 241 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 242 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 243 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 244 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 245 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 246 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 247 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 248 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 249 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 250 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 251 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 252 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 253 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 254 = filler */
	{ 0, 0, 0,
	    sys_nosys, 0, 0 },			/* 255 = filler */
};
