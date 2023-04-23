/* Copyright 2022 DZTECH <moyi4681@live.cn>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "lib/linkzzey.h"
#include "lib/linkhorse.h"
#include "lib/mewspin.h"
#include "lib/stars.h"
#include "lib/chicken.h"

enum switching_keycodes {
  KC_LINKZZEY = QK_KB_0,
  KC_CHICKEN = QK_KB_1,
  KC_LINKHORSE = QK_KB_2,
  KC_MEWSPIN = QK_KB_3,
};

typedef enum linkzzey_animations {
  LINKZZEY,
  CHICKEN,
  LINKHORSE,
  MEWSPIN,
} ANIMATION;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* Layer 0 */
	KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F13,  KC_DEL, KC_INS,
	KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,  KC_HOME, KC_PGUP,
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,  KC_END,  KC_PGDN,
	KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
	KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          MO(1), KC_UP,
	KC_LCTL, KC_LGUI, KC_LALT,                           KC_SPC,                                       KC_RALT, KC_RCTL, KC_LEFT,  KC_DOWN, KC_RGHT
  ),

  [1] = LAYOUT( /* Layer 1 */
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LINKZZEY, KC_CHICKEN,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LINKHORSE, KC_MEWSPIN,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS,                           KC_TRNS,                                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [2] = LAYOUT( /* Layer 2 */
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS,                           KC_TRNS,                                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [3] = LAYOUT( /* Layer 3 */
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS,                           KC_TRNS,                                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  )
};

ANIMATION animation = LINKHORSE;
uint32_t dim_timer = 0;
uint32_t full_brightness = 0;

void render_name(void) {
  oled_set_cursor(oled_max_chars() - 9, oled_max_lines() - 2);
  oled_write_P(PSTR("LINKZZEY"), false);
}

bool render_wpm(int row) {
  oled_set_cursor(oled_max_chars() - 8, row);
  oled_write_P(PSTR("WPM:"), false);
  oled_write(get_u8_str(get_current_wpm(), '0'), false);

  return true;
}

bool render_capslock(int row) {
  bool caps_lock = host_keyboard_led_state().caps_lock;

  if (caps_lock) {
    oled_set_cursor(oled_max_chars() - 5, row);
    oled_write_P(PSTR("CAPS"), false);
  }

  return caps_lock;
}

bool render_layer(int row) {
  int highest_layer = get_highest_layer(layer_state);
  if (highest_layer < 1 || highest_layer > 3) {
    return false;
  }

  oled_set_cursor(oled_max_chars() - 5, row);
  oled_write(PSTR("L: "), false);
  switch (highest_layer) {
    case 1:
        oled_write(PSTR("1"), false);
        break;
    case 2:
        oled_write(PSTR("2"), false);
        break;
    case 3:
        oled_write(PSTR("3"), false);
        break;
  }

  return true;
}

/*
 * Magic functions called by QMK
 */

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  full_brightness = oled_get_brightness();

  //return OLED_ROTATION_180;
  return OLED_ROTATION_0;
}

bool oled_task_kb(void) {
  if (!oled_task_user()) {
    return false;
  }

  if (timer_elapsed32(dim_timer) > 30000) {
    oled_set_brightness(full_brightness / 10);
  } else {
    oled_set_brightness(full_brightness);
  }
  
  render_stars();

  if (animation == LINKZZEY) {
    render_linkzzey();
  } else if (animation == CHICKEN) {
    render_chicken();
  } else if (animation == LINKHORSE) {
    render_linkhorse();
  } else if (animation == MEWSPIN) {
    render_mewspin();
  }

  render_name();

  int row = 1;
  if (render_wpm(row)) {
    row++;
  }
  if (render_capslock(row)) {
    row++;
  }
  if (render_layer(row)) {
    row++;
  }

  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    dim_timer = timer_read32();
  }

  switch (keycode) {
    case KC_LINKZZEY:
      if(record->event.pressed) {
        animation = LINKZZEY;
        return false;
      }
      break;
    case KC_CHICKEN:
      if(record->event.pressed) {
        animation = CHICKEN;
        return false;
      }
      break;
    case KC_LINKHORSE:
      if(record->event.pressed) {
        animation = LINKHORSE;
        return false;
      }
      break;
    case KC_MEWSPIN:
      if(record->event.pressed) {
        animation = MEWSPIN;
        return false;
      }
      break;
  }

  return true;
}
