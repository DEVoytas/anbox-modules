ccflags-y += -I$(src)
obj-m := anbox_common_linux.o
anbox_common_linux-y := kallsyms_wrapper.o anbox_common.o

KERNEL_SRC ?= /lib/modules/$(shell uname -r)/build

all:
	$(MAKE) -C $(KERNEL_SRC) V=0 M=$$PWD

install:
	cp anbox_common_linux.ko $(DESTDIR)/

clean:
	rm -rf deps.h *.o *.ko *.mod.c *.symvers *.order .*.cmd .tmp_versions
