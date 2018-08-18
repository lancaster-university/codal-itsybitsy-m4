#pragma once

#define HSE_VALUE (*((uint32_t*)0x8003fcc))
#define USE_FULL_ASSERT 1
#define USB_MAX_PKT_SIZE 64
#define BOOTLOADER_START_ADDR 0x08000000
#define BOOTLOADER_END_ADDR 0x08004000
#define APP_START_ADDR 0x08008000
#define UF2_INFO_ADDR (const char*)(*(uint32_t*)(BOOTLOADER_END_ADDR - (16 * 4) + (4 * 4)))

#define USB_DEFAULT_VID 0x0483 // STmicro
#define USB_DEFAULT_PID 0x5799 // similar to examples
#define USB_EP_FLAG_NO_AUTO_ZLP 0x01
#define DEVICE_USB_ENDPOINTS 6
