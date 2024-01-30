/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file

  modified file for manual configuraton
*/
#define ORYX_CONFIGURATOR
#undef TAPPING_TERM
// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200
// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0
// for rolling on mod-tap keys
#define IGNORE_MOD_TAP_INTERRUPT

#define PERMISSIVE_HOLD

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"bl73P/4Naxq"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT
#define COMBO_COUNT 4

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60

// activate the leader key
#define LEADER_TIMEOUT 400
