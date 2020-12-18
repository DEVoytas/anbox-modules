#include <linux/init.h>
#include <linux/module.h>
#include "../include/kallsyms_wrapper.h"

static int anbox_common_init(void)
{
	return 0;
}

static void anbox_common_exit(void)
{
}

module_init(anbox_common_init);
module_exit(anbox_common_exit);

MODULE_LICENSE("Dual BSD/GPL");
