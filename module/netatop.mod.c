#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x487d525d, "module_layout" },
	{ 0xe2d22299, "single_release" },
	{ 0x5e5b1a68, "seq_read" },
	{ 0x6f9f60e5, "seq_lseek" },
	{ 0x40d3edb6, "remove_proc_entry" },
	{ 0xeefbdb8, "unregister_pernet_subsys" },
	{ 0x9ffbc2d2, "kthread_stop" },
	{ 0xde216c60, "kmem_cache_destroy" },
	{ 0xcfd17909, "nf_unregister_sockopt" },
	{ 0xd08ca966, "wake_up_process" },
	{ 0x36845a88, "proc_create" },
	{ 0xba026b3b, "register_pernet_subsys" },
	{ 0xe6b6e59a, "kthread_create_on_node" },
	{ 0xb39956e, "nf_register_sockopt" },
	{ 0xef464c28, "getboottime64" },
	{ 0x1c14f9f8, "kmem_cache_create" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7c32d0f0, "printk" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x32bab91e, "find_vpid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x57fff3b2, "nf_register_net_hooks" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb1b4df86, "kmem_cache_free" },
	{ 0x9166fada, "strncpy" },
	{ 0x950dad8, "current_task" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe9ebe714, "kmem_cache_alloc" },
	{ 0x55e77e8, "jiffies_64" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcb947329, "nf_unregister_net_hooks" },
	{ 0xc2aa3232, "seq_printf" },
	{ 0xe63724e3, "single_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "517E441654DE67C66EF59F1");
