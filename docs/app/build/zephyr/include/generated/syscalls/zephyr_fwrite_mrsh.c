/* auto-generated by gen_syscalls.py, don't edit */
#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic push
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif
#include <syscalls/libc-hooks.h>

extern size_t z_vrfy_zephyr_fwrite(const void *_MLIBC_RESTRICT ptr, size_t size, size_t nitems, FILE *_MLIBC_RESTRICT stream);
uintptr_t z_mrsh_zephyr_fwrite(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2,
		uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, void *ssf)
{
	_current->syscall_frame = ssf;
	(void) arg4;	/* unused */
	(void) arg5;	/* unused */
	size_t ret = z_vrfy_zephyr_fwrite(*(const void *_MLIBC_RESTRICT*)&arg0, *(size_t*)&arg1, *(size_t*)&arg2, *(FILE *_MLIBC_RESTRICT*)&arg3)
;
	_current->syscall_frame = NULL;
	return (uintptr_t) ret;
}

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif
