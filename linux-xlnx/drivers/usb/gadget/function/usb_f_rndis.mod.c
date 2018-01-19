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
	{ 0xee57ea5d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x84fb1833, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0xf873423d, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xf8067fc0, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0xccb1fdd2, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0x9eb9cf9b, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x8388b264, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xb19f4b50, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x36869ce7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcbee6439, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x401d9489, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x692f216a, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0x2c413630, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x4bdf868d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd5eecef7, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0xe1d7f876, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x83b53dad, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0x33fa2c52, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xd2e54efc, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xf85b80cb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x5db695fc, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1b2420a7, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x29e1b020, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x5f2e00fb, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xb83857da, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0xa4c01ba6, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x9442d5a7, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x115c3a96, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0x9cca8893, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x9a72fafe, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x9d4cd42e, __VMLINUX_SYMBOL_STR(gether_get_host_addr_u8) },
	{ 0xa1cf95b0, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xcf6d4bf1, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x414912ee, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xf5aadf6f, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0x17506ac5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbb3e04c, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x6e8d68e, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xe0f2330, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x504d6688, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0xb17c1900, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x479986b2, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x41d9e0c9, __VMLINUX_SYMBOL_STR(usb_os_desc_prepare_interf_dir) },
	{ 0xddf7fb8c, __VMLINUX_SYMBOL_STR(dev_get_stats) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,configfs";
