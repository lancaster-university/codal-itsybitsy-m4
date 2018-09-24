#pragma once

#define USE_FULL_ASSERT 1
#define USB_MAX_PKT_SIZE 64
#define BOOTLOADER_START_ADDR 0x00000000
#define BOOTLOADER_END_ADDR 0x00004000
#define APP_START_ADDR 0x00004000
#define UF2_INFO_ADDR (const char*)(*(uint32_t*)(BOOTLOADER_END_ADDR - (16 * 4) + (4 * 4)))

#define USB_EP_FLAG_NO_AUTO_ZLP 0x01
#define DEVICE_USB_ENDPOINTS 6


#define CODAL_CPU_MHZ 120
#define SAMD_PIN_ARRAY 1