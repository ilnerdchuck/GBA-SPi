#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
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
__used __section("__versions") = {
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbec3491, "i2c_transfer_buffer_flags" },
	{ 0x7297e669, "input_event" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x983e2d76, "kthread_stop" },
	{ 0x829db510, "input_unregister_device" },
	{ 0x1d31a384, "i2c_unregister_device" },
	{ 0x424d82fe, "i2c_del_driver" },
	{ 0xde31bf7e, "unregister_sys_off_handler" },
	{ 0x226383ed, "i2c_get_adapter" },
	{ 0x3e7874ab, "i2c_new_client_device" },
	{ 0x440cbd26, "i2c_register_driver" },
	{ 0xbf4bb060, "i2c_put_adapter" },
	{ 0xfd77e268, "register_sys_off_handler" },
	{ 0xb865b401, "input_allocate_device" },
	{ 0xfcb9f34d, "input_set_abs_params" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xcc41c770, "input_register_device" },
	{ 0xedb6f3de, "kthread_create_on_node" },
	{ 0x56f38bce, "wake_up_process" },
	{ 0x2035b8ed, "input_free_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8f80e6e5, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ATMega");

MODULE_INFO(srcversion, "BBCD643C48F4F2CECE3CCB2");
