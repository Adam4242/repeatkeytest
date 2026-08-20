#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};

#define DUAL_FUNC_0 LT(2, KC_6)
#define DUAL_FUNC_1 LT(8, KC_E)
#define DUAL_FUNC_2 LT(7, KC_3)
#define DUAL_FUNC_3 LT(5, KC_F20)
#define DUAL_FUNC_4 LT(8, KC_F22)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TD(DANCE_0),    KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,LALT(LGUI(LCTL(LSFT(KC_E)))),KC_F5,          DUAL_FUNC_0,                                    KC_PSCR,        DUAL_FUNC_1,    TO(8),          CW_TOGG,        KC_LEFT_GUI,    TO(7),          
    LGUI(LCTL(KC_K)),KC_Q,           LT(4, KC_W),    LT(5, KC_F),    KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           DUAL_FUNC_2,    TG(2),          
    KC_BSPC,        LT(2, KC_A),    LT(1, KC_R),    MT(MOD_LSFT, KC_S),MT(MOD_LSFT, KC_T),KC_G,                                           KC_M,           MT(MOD_RSFT, KC_N),MT(MOD_RSFT, KC_E),LT(1, KC_I),    LT(2, KC_O),    KC_KP_ENTER,    
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_QUES,        DUAL_FUNC_3,    
                                                    KC_SPACE,       LT(3, KC_TAB),                                  QK_REPEAT_KEY,  TT(3)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,        
    KC_TRANSPARENT, KC_GRAVE,       KC_TILD,        KC_HASH,        KC_AMPR,        KC_PIPE,                                        KC_EXLM,        KC_LCBR,        KC_RCBR,        KC_LBRC,        KC_RBRC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_QUOTE,       KC_UNDS,        KC_COLN,        KC_EQUAL,       KC_DLR,                                         KC_AT,          KC_LPRN,        KC_RPRN,        KC_UNDS,        KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PERC,        KC_QUES,        KC_KP_ASTERISK, KC_PLUS,        KC_BSLS,                                        KC_SLASH,       KC_MINUS,       KC_LABK,        KC_RABK,        KC_DQUO,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_0,     KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CALCULATOR,  KC_7,           KC_8,           KC_9,           KC_DOT,                                         KC_SLASH,       KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ASTR,        KC_4,           KC_5,           KC_6,           KC_0,                                           KC_KP_0,        KC_4,           KC_5,           KC_6,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_0,           KC_1,           KC_2,           KC_3,           KC_HASH,                                        KC_DOT,         KC_1,           KC_2,           KC_3,           KC_EQUAL,       KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TT(3)
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, TO(0),          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,        
    KC_TRANSPARENT, KC_ESCAPE,      KC_ENTER,       LCTL(KC_W),     LALT(KC_F4),    KC_DELETE,                                      LCTL(KC_Y),     KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TAB,         LCTL(KC_T),                                     LCTL(KC_F),     KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_LEFT_GUI,    KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LCTL(KC_V),                                     KC_TRANSPARENT, KC_APPLICATION, KC_WWW_BACK,    KC_WWW_FORWARD, KC_PGDN,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TAB,                                         KC_TAB,         KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_ACCEL1,                                   KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_RIGHT, KC_MS_WH_UP,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,     KC_MS_ACCEL2,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_DOWN,  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL0,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_MS_BTN2,                                     KC_MS_BTN1,     KC_MS_BTN2
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,        
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 KC_CAPS,        KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_TRANSPARENT, KC_TRANSPARENT, KC_MEH,         KC_TRANSPARENT,                                 LSFT(KC_F11),   KC_F4,          KC_F5,          KC_F6,          KC_F11,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LCTL(KC_COMMA), KC_F1,          KC_F2,          KC_F3,          KC_F12,         KC_TRANSPARENT, 
                                                    KC_LEFT_SHIFT,  KC_LEFT_SHIFT,                                  KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_LEFT_ALT,                                    KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(11),         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_VAI,        KC_SYSTEM_POWER,                                KC_SYSTEM_SLEEP,RGB_SPI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LED_LEVEL,      RGB_HUD,        RGB_HUI,        RGB_TOG,        KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_MODE_FORWARD,RGB_SAD,        RGB_SAI,        TOGGLE_LAYER_COLOR,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_VAD,        KC_TRANSPARENT,                                 QK_BOOT,        RGB_SPD,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NUM,         
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    DUAL_FUNC_4,    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_LEFT_CTRL,   MT(MOD_LALT, KC_Z),KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RALT, KC_SLASH),KC_RIGHT_CTRL,  
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_J,           KC_L,           KC_U,           KC_Y,           KC_QUOTE,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_M,           KC_N,           KC_E,           KC_I,           KC_O,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_QUES,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, TO(0),                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_voyager(
    NAVIGATOR_DEC_CPI,NAVIGATOR_INC_CPI,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          KC_LEFT_CTRL,   KC_MS_BTN3,     TOGGLE_SCROLL,                                  KC_MS_BTN1,     NAVIGATOR_AIM,  KC_MS_BTN2,     TOGGLE_SCROLL,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DRAG_SCROLL,    NAVIGATOR_AIM,  KC_MS_BTN2,     KC_MS_BTN1,     KC_LEFT_ALT,                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_APPLICATION, TOGGLE_SCROLL,  KC_TRANSPARENT,                                 KC_TRANSPARENT, TOGGLE_SCROLL,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [11] = LAYOUT_voyager(
    TD(DANCE_1),    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [12] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, NAVIGATOR_INC_CPI,NAVIGATOR_DEC_CPI,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TOGGLE_SCROLL,  KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 DRAG_SCROLL,    KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_Z, KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_Q, LT(4, KC_W), COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_DOT, KC_COMMA, KC_QUES, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_Z, LT(2, KC_A), COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_SPACE, LT(3, KC_TAB), COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_BSPC, LT(2, KC_A), COMBO_END};
const uint16_t PROGMEM combo9[] = { LT(2, KC_A), MT(MOD_LSFT, KC_S), LT(1, KC_R), MT(MOD_LSFT, KC_T), COMBO_END};
const uint16_t PROGMEM combo10[] = { LT(4, KC_W), LT(5, KC_F), COMBO_END};
const uint16_t PROGMEM combo11[] = { LT(1, KC_R), KC_X, COMBO_END};
const uint16_t PROGMEM combo12[] = { MT(MOD_LSFT, KC_T), KC_D, COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_V, KC_G, COMBO_END};
const uint16_t PROGMEM combo14[] = { KC_KP_ENTER, DUAL_FUNC_3, COMBO_END};
const uint16_t PROGMEM combo15[] = { KC_DOT, KC_QUES, COMBO_END};
const uint16_t PROGMEM combo16[] = { MT(MOD_LSFT, KC_S), KC_C, COMBO_END};
const uint16_t PROGMEM combo17[] = { KC_QUES, DUAL_FUNC_3, COMBO_END};
const uint16_t PROGMEM combo18[] = { LT(2, KC_O), KC_KP_ENTER, COMBO_END};
const uint16_t PROGMEM combo19[] = { KC_BSPC, KC_LEFT_CTRL, COMBO_END};
const uint16_t PROGMEM combo20[] = { KC_V, KC_SPACE, COMBO_END};
const uint16_t PROGMEM combo21[] = { MT(MOD_RSFT, KC_N), MT(MOD_RSFT, KC_E), LT(1, KC_I), LT(2, KC_O), COMBO_END};
const uint16_t PROGMEM combo22[] = { LT(2, KC_A), LT(1, KC_R), MT(MOD_LSFT, KC_S), COMBO_END};
const uint16_t PROGMEM combo23[] = { LT(5, KC_F), MT(MOD_LSFT, KC_S), COMBO_END};
const uint16_t PROGMEM combo24[] = { KC_P, MT(MOD_LSFT, KC_T), COMBO_END};
const uint16_t PROGMEM combo25[] = { MT(MOD_RSFT, KC_N), MT(MOD_RSFT, KC_E), LT(1, KC_I), COMBO_END};
const uint16_t PROGMEM combo26[] = { LT(4, KC_W), LT(1, KC_R), COMBO_END};
const uint16_t PROGMEM combo27[] = { KC_D, KC_V, COMBO_END};
const uint16_t PROGMEM combo28[] = { LT(1, KC_R), MT(MOD_LSFT, KC_S), COMBO_END};
const uint16_t PROGMEM combo29[] = { KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM combo30[] = { KC_KP_ENTER, TG(2), DUAL_FUNC_3, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_LEFT_CTRL),
    COMBO(combo1, KC_LEFT_ALT),
    COMBO(combo2, LCTL(KC_LEFT_ALT)),
    COMBO(combo3, KC_ESCAPE),
    COMBO(combo4, KC_RIGHT_ALT),
    COMBO(combo5, LCTL(KC_RIGHT_ALT)),
    COMBO(combo6, LGUI(KC_2)),
    COMBO(combo7, LCTL(KC_V)),
    COMBO(combo8, LCTL(KC_BSPC)),
    COMBO(combo9, KC_ENTER),
    COMBO(combo10, KC_E),
    COMBO(combo11, LCTL(KC_Z)),
    COMBO(combo12, LCTL(KC_C)),
    COMBO(combo13, LCTL(KC_X)),
    COMBO(combo14, KC_KP_DOT),
    COMBO(combo15, KC_RIGHT_CTRL),
    COMBO(combo16, LCTL(KC_S)),
    COMBO(combo17, KC_GRAVE),
    COMBO(combo18, LGUI(KC_Y)),
    COMBO(combo19, LGUI(KC_1)),
    COMBO(combo20, TO(9)),
    COMBO(combo21, LGUI(LSFT(KC_Y))),
    COMBO(combo22, KC_BSPC),
    COMBO(combo23, LCTL(KC_F)),
    COMBO(combo24, LCTL(KC_P)),
    COMBO(combo25, KC_SPACE),
    COMBO(combo26, LCTL(KC_W)),
    COMBO(combo27, KC_TAB),
    COMBO(combo28, TT(3)),
    COMBO(combo29, KC_SPACE),
    COMBO(combo30, KC_CAPS),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DUAL_FUNC_0:
            return TAPPING_TERM -125;
        case MT(MOD_LSFT, KC_T):
            return TAPPING_TERM -10;
        case KC_LEFT_CTRL:
            return TAPPING_TERM -115;
        case KC_SPACE:
            return TAPPING_TERM -100;
        case KC_COMMA:
            return TAPPING_TERM -115;
        case MT(MOD_RSFT, KC_ENTER):
            return TAPPING_TERM -115;
        default:
            return TAPPING_TERM;
    }
}

bool capslock_active = false;

bool led_update_user(led_t led_state) {
  capslock_active = led_state.caps_lock;
  return true;
}

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {188,255,255}, {188,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {74,255,255}, {0,255,255}, {0,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {74,255,255}, {74,255,255}, {131,255,255}, {131,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {74,255,255}, {41,255,255}, {188,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {188,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {188,255,255}, {41,255,255}, {188,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {188,255,255}, {41,255,255}, {74,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {188,255,255}, {41,255,255}, {41,255,255}, {74,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {23,255,255}, {0,0,0}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {41,255,255}, {18,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {23,255,255}, {18,255,255}, {18,255,255}, {18,255,255}, {23,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,255,255}, {0,0,0} },

    [4] = { {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,245,245}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {188,255,255}, {41,255,255}, {0,0,0}, {131,255,255}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {131,255,255}, {0,0,0}, {74,255,255}, {152,255,255}, {0,245,245}, {0,0,0}, {131,255,255}, {74,255,255}, {0,245,245} },

    [5] = { {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {41,255,255}, {41,255,255}, {0,245,245}, {41,255,255}, {0,0,0}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {152,255,255}, {74,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {152,255,255}, {74,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {152,255,255}, {0,0,0}, {0,0,0} },

    [6] = { {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245} },

    [10] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {8,247,227}, {0,0,0}, {23,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [11] = { {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242}, {140,11,242} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 10:
        set_layer_color(10);
        break;
      case 11:
        set_layer_color(11);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  if (capslock_active && biton32(layer_state) == 5) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 0, 245, 245 });
    rgb_matrix_set_color( 32, rgb.r, rgb.g, rgb.b );
  } 
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[2];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_AUDIO_MUTE);
        tap_code16(KC_AUDIO_MUTE);
        tap_code16(KC_AUDIO_MUTE);
    }
    if(state->count > 3) {
        tap_code16(KC_AUDIO_MUTE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_AUDIO_MUTE); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(KC_DELETE))); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_AUDIO_MUTE); register_code16(KC_AUDIO_MUTE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_AUDIO_MUTE); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(KC_DELETE))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_AUDIO_MUTE); break;
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case DOUBLE_HOLD: layer_move(0); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
    }
    dance_state[1].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_5) SS_TAP(X_KP_1) ));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RCTL(KC_DELETE));
        } else {
          unregister_code16(RCTL(KC_DELETE));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_DELETE);
        } else {
          unregister_code16(KC_DELETE);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_PAUSE);
        } else {
          unregister_code16(KC_PAUSE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MEDIA_PLAY_PAUSE);
        } else {
          unregister_code16(KC_MEDIA_PLAY_PAUSE);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUOTE);
        } else {
          unregister_code16(KC_QUOTE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_AT);
        } else {
          unregister_code16(KC_AT);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_0);
        } else {
          unregister_code16(KC_KP_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F19));
        } else {
          unregister_code16(LSFT(KC_F19));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_EQUAL);
        } else {
          unregister_code16(KC_EQUAL);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_ESCAPE);
        } else {
          unregister_code16(KC_ESCAPE);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
