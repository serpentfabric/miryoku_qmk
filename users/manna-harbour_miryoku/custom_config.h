// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

// add dynamic tapping term keys to media layer since qmk disables bluetooth
#define MIRYOKU_LAYER_MEDIA \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              RGB_TOG,           RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           \
U_NA,              KC_ALGR,           TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  U_NA,              OU_AUTO,           DT_DOWN,           DT_PRNT,             DT_UP,           DB_TOGG,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,              U_NP,              U_NP

#define MIRYOKU_LAYER_BASE \
KC_Q,              DB_TOGG,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_K,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_M,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP
