#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe9d1cabd, "module_layout" },
	{ 0x8f857b90, "pcmcia_request_irq" },
	{ 0x47a7ee05, "ssb_dma_translation" },
	{ 0x6beb5549, "device_remove_file" },
	{ 0xc6c864ef, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x2cfd91d1, "debugfs_create_dir" },
	{ 0x61fce5e5, "mem_map" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xd0d8621b, "strlen" },
	{ 0xa1c1f5d7, "ieee80211_queue_work" },
	{ 0xd5ec6053, "dev_set_drvdata" },
	{ 0x1d957ef7, "led_classdev_register" },
	{ 0xbb773c4d, "pcmcia_register_driver" },
	{ 0x497b37fd, "ieee80211_beacon_get" },
	{ 0x4a213e5c, "sdio_enable_func" },
	{ 0x240e2468, "sdio_claim_irq" },
	{ 0x72f63fe9, "ieee80211_rts_get" },
	{ 0x8c35d732, "ieee80211_hdrlen" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x23869dc7, "cancel_work_sync" },
	{ 0x7bdcefd2, "pccard_get_tuple_data" },
	{ 0xf4ba0193, "ieee80211_unregister_hw" },
	{ 0xc02ef2c8, "pcmcia_parse_tuple" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0x381c4bb1, "cancel_delayed_work_sync" },
	{ 0x7e178188, "mutex_unlock" },
	{ 0x5979ad6c, "ssb_bus_powerup" },
	{ 0xfc56201d, "ssb_bus_pcmciabus_register" },
	{ 0x702ed160, "ssb_bus_sdiobus_register" },
	{ 0xff964b25, "param_set_int" },
	{ 0xca69e73c, "debugfs_create_file" },
	{ 0xe050a363, "wiphy_rfkill_start_polling" },
	{ 0x814db0f6, "__ieee80211_get_assoc_led_name" },
	{ 0x898be308, "debugfs_remove_recursive" },
	{ 0xe9d81454, "pcmcia_request_configuration" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5c826fa1, "__ssb_driver_register" },
	{ 0x82bb2b51, "ieee80211_stop_queue" },
	{ 0x78113cff, "ieee80211_tx_status" },
	{ 0x5c0e724b, "dev_alloc_skb" },
	{ 0xacd0079b, "ssb_driver_unregister" },
	{ 0x1976b184, "__mutex_init" },
	{ 0xb72397d5, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0xecde1418, "_spin_lock_irq" },
	{ 0xf9b2810, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb6ed1e53, "strncpy" },
	{ 0xf37778b6, "ssb_device_enable" },
	{ 0xd6203fdf, "debugfs_remove" },
	{ 0xa7046549, "vprintk" },
	{ 0x580ca667, "pcmcia_request_window" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc3cd8ebd, "ieee80211_rx" },
	{ 0xa77dd010, "mutex_lock" },
	{ 0x859c6dc7, "request_threaded_irq" },
	{ 0x299ecceb, "skb_pull" },
	{ 0x456dd9a0, "ieee80211_ctstoself_get" },
	{ 0x4dfb4330, "debugfs_create_bool" },
	{ 0x4c759827, "byte_rev_table" },
	{ 0x8732d773, "ieee80211_queue_delayed_work" },
	{ 0x114e0cf0, "dev_kfree_skb_any" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x849c5c32, "device_create_file" },
	{ 0x177adb6c, "sdio_unregister_driver" },
	{ 0xbfc148b3, "ssb_dma_set_mask" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xd1b65733, "skb_queue_tail" },
	{ 0x7dceceac, "capable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x94d748b, "kmem_cache_alloc" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x4ec18f6b, "pccard_get_first_tuple" },
	{ 0x76768c4a, "ssb_dma_alloc_consistent" },
	{ 0x66c6d120, "__ieee80211_get_rx_led_name" },
	{ 0x9f81c9df, "__alloc_skb" },
	{ 0xcb349fce, "ssb_pmu_set_ldo_voltage" },
	{ 0x9728f3d3, "ssb_device_disable" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xcd5c3b61, "sdio_release_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x98a2062b, "wiphy_rfkill_set_hw_state" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x50a5994c, "dev_driver_string" },
	{ 0xf6bcbd73, "hwrng_register" },
	{ 0x8b12e549, "__ieee80211_get_tx_led_name" },
	{ 0xb8bd4988, "ssb_set_devtypedata" },
	{ 0x4101bbde, "param_set_copystring" },
	{ 0x732b9100, "ssb_bus_resume" },
	{ 0xe1747c55, "ieee80211_get_tkip_key" },
	{ 0x657b0aa, "ieee80211_wake_queue" },
	{ 0xefc472c4, "ieee80211_generic_frame_duration" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xf4da5859, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x447624cf, "ssb_bus_unregister" },
	{ 0x2e98850d, "ieee80211_register_hw" },
	{ 0x8e527562, "led_classdev_unregister" },
	{ 0x5022ee6c, "ssb_bus_suspend" },
	{ 0x37a0cba, "kfree" },
	{ 0x963d2a12, "ieee80211_alloc_hw" },
	{ 0xa07a0357, "debugfs_create_blob" },
	{ 0x7b27df, "pcmcia_map_mem_page" },
	{ 0x5be66420, "pcmcia_unregister_driver" },
	{ 0x9d11c502, "ssb_dma_free_consistent" },
	{ 0x61cf3590, "request_firmware" },
	{ 0xd534224a, "ieee80211_free_hw" },
	{ 0x499fd69e, "ssb_bus_may_powerdown" },
	{ 0xf069c6fe, "skb_dequeue" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x76b0f8f8, "bad_dma_address" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x49e182c0, "param_get_string" },
	{ 0x8235805b, "memmove" },
	{ 0x1a540c38, "sdio_register_driver" },
	{ 0xc96d1444, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x241edd2c, "consume_skb" },
	{ 0x801978cd, "sdio_claim_host" },
	{ 0xe330bd65, "ssb_pmu_set_ldo_paref" },
	{ 0x86b1667d, "hwrng_unregister" },
	{ 0x1919bf4d, "pcmcia_disable_device" },
	{ 0x3635f7bb, "skb_put" },
	{ 0x807f588, "ssb_device_is_enabled" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x25556467, "dev_get_drvdata" },
	{ 0xb1dc7661, "sdio_set_block_size" },
	{ 0xb703911e, "release_firmware" },
	{ 0x84b3954a, "dma_ops" },
	{ 0x37ac8d05, "ieee80211_get_response_rate" },
	{ 0xd8b9e3ce, "sdio_disable_func" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xebc09c56, "sdio_release_host" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia,ssb,mac80211,led-class,mmc_core,cfg80211,pcmcia_core,rng-core";

MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");
MODULE_ALIAS("pcmcia:m02D0c0448f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02D0c0476f*fn*pfn*pa*pb*pc*pd*");