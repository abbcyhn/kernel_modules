#include <linux/init.h>
#include <linux/module.h>

static int hello_kernel(void){
    printk(KERN_ALERT "Hello Kernel. This is first kernel module of @abbcyhn");
    return 0;
}


static void bye_kernel(void){
    printk(KERN_ALERT "Bye Kernel. This is first kernel module of @abbcyhn");
}

module_init(hello_kernel);
module_exit(bye_kernel);