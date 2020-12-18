#include <linux/mm.h>
#include "../include/kallsyms_wrapper.h"

static int (*shmem_zero_setup_ptr)(struct vm_area_struct *) = NULL;

int shmem_zero_setup(struct vm_area_struct *vma)
{
	if (!shmem_zero_setup_ptr)
		shmem_zero_setup_ptr = wrapper_kallsyms_lookup_name("shmem_zero_setup");
	return shmem_zero_setup_ptr(vma);
}
