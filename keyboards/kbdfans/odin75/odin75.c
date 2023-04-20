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

#include "quantum.h"
#include "lib/linkhorse.h"
#ifdef OLED_ENABLE
  oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  //return OLED_ROTATION_180;
  return OLED_ROTATION_0;
}
    bool oled_task_kb(void) {
        if (!oled_task_user()) { return false; }
        led_t led_usb_state = host_keyboard_led_state();

        render_linkhorse();
        oled_set_cursor(14, 0); // sets cursor to (column, row) using charactar spacing (4 rows on 128x32 screen, anything more will overflow back to the top)
        oled_write_P(PSTR("WPM:"), false);
        oled_write(get_u8_str(get_current_wpm(), '0'), false); // writes wpm on top right corner of string
        oled_set_cursor(oled_max_chars() - 4, 1);
        oled_write_P(led_usb_state.caps_lock ? PSTR("CAPS") : PSTR("    "), false);
        return true;
    }
#endif
