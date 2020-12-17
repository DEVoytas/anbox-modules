/*
 * include/kallsyms_wrapper.h
 */

#ifndef _KALLSYMS_WRAPPER_H
#define _KALLSYMS_WRAPPER_H

#include <linux/kallsyms.h>
#include <linux/version.h>

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(5,7,0))

unsigned long wrapper_kallsyms_lookup_name(const char *name);

#else /* #if (LINUX_VERSION_CODE >= KERNEL_VERSION(5,7,0)) */

static inline
unsigned long wrapper_kallsyms_lookup_name(const char *name)
{
	return kallsyms_lookup_name(name);
}

#endif /* #else #if (LINUX_VERSION_CODE >= KERNEL_VERSION(5,7,0)) */

#endif	/* _KALLSYMS_WRAPPER_H */
