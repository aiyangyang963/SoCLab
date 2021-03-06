#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6c9dadc8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xbb3d73f6, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x2ffc3c68, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0x5545f4f9, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0x1d46fb66, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x197db81f, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

