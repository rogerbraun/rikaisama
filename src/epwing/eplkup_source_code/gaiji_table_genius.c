/*------------------------------------------------------------------------
--  Copyright (C) 2011-2014 Christopher Brochtrup
--
--  This file is part of eplkup.
--
--  eplkup is free software: you can redistribute it and/or modify
--  it under the terms of the GNU General Public License as published by
--  the Free Software Foundation, either version 3 of the License, or
--  (at your option) any later version.
--
--  eplkup is distributed in the hope that it will be useful,
--  but WITHOUT ANY WARRANTY; without even the implied warranty of
--  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
--  GNU General Public License for more details.
--
--  You should have received a copy of the GNU General Public License
--  along with eplkup.  If not, see <http://www.gnu.org/licenses/>.
--
------------------------------------------------------------------------*/

#ifndef GAIJI_TABLE_GENIUS_H
#define GAIJI_TABLE_GENIUS_H

#include "eplkup_gaiji.h"


Gaiji_table_type gaiji_table_narrow_genius[NUM_NARROW_GENIUS_ITEMS] =
{
  { 0xA121, 2, { 0xC3, 0xA1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* á */
  { 0xA122, 2, { 0xC3, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* à */
  { 0xA123, 2, { 0xC9, 0x91, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɑ */
  { 0xA124, 4, { 0xC9, 0x91, 0xCC, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɑ́ */
  { 0xA125, 4, { 0xC9, 0x91, 0xCC, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɑ̀ */
  { 0xA126, 4, { 0xC9, 0x91, 0xCC, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɑ̃ */
  { 0xA127, 2, { 0xCA, 0x8C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ʌ */
  { 0xA128, 4, { 0xCA, 0x8C, 0xCC, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ʌ́ */
  { 0xA129, 4, { 0xCA, 0x8C, 0xCC, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ʌ̀ */
  { 0xA12A, 2, { 0xC9, 0x99, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ə */
  { 0xA12B, 4, { 0xC9, 0x99, 0xCC, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ə́ */
  { 0xA12C, 4, { 0xC9, 0x99, 0xCC, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ə̀ */
  { 0xA12E, 2, { 0xC3, 0xA9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* é */
  { 0xA12F, 2, { 0xC3, 0xA8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* è */
  { 0xA130, 2, { 0xC9, 0x9B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɛ */
  { 0xA131, 4, { 0xC9, 0x9B, 0xCC, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɛ́ */
  { 0xA132, 4, { 0xC9, 0x9B, 0xCC, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɛ̀ */
  { 0xA133, 4, { 0xC9, 0x9B, 0xCC, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɛ̃ */
  { 0xA134, 2, { 0xC3, 0xAD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* í */
  { 0xA135, 2, { 0xC3, 0xAC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ì */
  { 0xA136, 2, { 0xC3, 0xB3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ó */
  { 0xA137, 2, { 0xC3, 0xB2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ò */
  { 0xA138, 2, { 0xC5, 0x8D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ō */
  { 0xA139, 2, { 0xC3, 0xB6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ö */
  { 0xA13A, 2, { 0xC9, 0x94, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɔ */
  { 0xA13B, 4, { 0xC9, 0x94, 0xCC, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɔ́ */
  { 0xA13C, 4, { 0xC9, 0x94, 0xCC, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɔ̀ */
  { 0xA13D, 4, { 0xC9, 0x94, 0xCC, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɔ̃ */
  { 0xA13E, 2, { 0xC3, 0xBA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ú */
  { 0xA13F, 2, { 0xC3, 0xB9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ù */
  { 0xA140, 2, { 0xC9, 0x9A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɚ */
  { 0xA141, 4, { 0xC9, 0x9A, 0xCC, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɚ́ */
  { 0xA142, 4, { 0xC9, 0x9A, 0xCC, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɚ̀ */
  { 0xA143, 2, { 0xC3, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* æ */
  { 0xA144, 2, { 0xC7, 0xBD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ǽ */
  { 0xA145, 4, { 0xC3, 0xA6, 0xCC, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* æ̀ */
  { 0xA146, 4, { 0xC3, 0xA6, 0xCC, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* æ̃ */
  { 0xA147, 2, { 0xC5, 0x93, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* œ */
  { 0xA148, 4, { 0xC5, 0x93, 0xCC, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* œ̃ */
  { 0xA149, 2, { 0xC9, 0xA1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɡ */
  { 0xA14A, 2, { 0xC5, 0x8B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ŋ */
  { 0xA14B, 2, { 0xCE, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* θ */
  { 0xA14C, 2, { 0xC3, 0xB0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ð */
  { 0xA14D, 2, { 0xCA, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ʃ */
  { 0xA14E, 2, { 0xCA, 0xA7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ʧ */
  { 0xA150, 2, { 0xC9, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ɸ */
  { 0xA151, 2, { 0xC3, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ø */
  { 0xA152, 2, { 0xCA, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ʒ */
  { 0xA153, 2, { 0xCA, 0xA4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ʤ */
  { 0xA154, 2, { 0xCB, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ː */
  { 0xA155, 2, { 0xC3, 0xA1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* á */
  { 0xA156, 2, { 0xC3, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* à */
  { 0xA157, 2, { 0xC3, 0xA9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* é */
  { 0xA158, 2, { 0xC3, 0xA8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* è */
  { 0xA159, 2, { 0xC3, 0xAD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* í */
  { 0xA15A, 2, { 0xC3, 0xAC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ì */
  { 0xA15B, 2, { 0xC3, 0xB3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ó */
  { 0xA15C, 2, { 0xC3, 0xB2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ò */
  { 0xA15D, 2, { 0xC3, 0xBA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ú */
  { 0xA15E, 2, { 0xC3, 0xB9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ù */
  { 0xA15F, 3, { 0x2D, 0xCC, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* -́ */
  { 0xA160, 3, { 0x2D, 0xCC, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* -̀ */
  { 0xA161, 2, { 0xC3, 0xA7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ç */
  { 0xA162, 2, { 0xC3, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Ç */
  { 0xA16A, 2, { 0xC3, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Á */
  { 0xA16B, 2, { 0xC3, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* À */
  { 0xA16C, 2, { 0xC4, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Ć */
  { 0xA16D, 2, { 0xC3, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* É */
  { 0xA16E, 2, { 0xC3, 0x93, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Ó */
  { 0xA16F, 2, { 0xC3, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Ò */
  { 0xA170, 2, { 0xC3, 0xB4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ô */
  { 0xA171, 2, { 0xC3, 0xBD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ý */
  { 0xA172, 3, { 0xE1, 0xBB, 0xB3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ỳ */
  { 0xA173, 2, { 0xC3, 0x9D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Ý */
  { 0xA175, 2, { 0xC3, 0xAB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ë */
  { 0xA176, 2, { 0xC3, 0x8D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Í */
  { 0xA177, 2, { 0xC3, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* È */
  { 0xA178, 2, { 0xC3, 0x99, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Ù */
  { 0xA179, 2, { 0xC3, 0x8C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Ì */
  { 0xA17A, 2, { 0xC3, 0xA4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ä */
  { 0xA17B, 2, { 0xC5, 0x99, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ř */
  { 0xA17C, 2, { 0xC3, 0xAF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ï */
  { 0xA17D, 2, { 0xC3, 0x9A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Ú */
  { 0xA221, 2, { 0xC3, 0xBC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ü */
  { 0xA222, 2, { 0xC4, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ā */
  { 0xA223, 2, { 0xC4, 0x93, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ē */
  { 0xA224, 2, { 0xC3, 0xAE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* î */
  { 0xA225, 2, { 0xC3, 0xA2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* â */
  { 0xA226, 2, { 0xC3, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ã */
  { 0xA227, 2, { 0xC3, 0xB1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ñ */
  { 0xA228, 2, { 0xC3, 0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ê */
  { 0xA22A, 2, { 0xC3, 0xB6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ö */
  { 0xA22B, 3, { 0x6D, 0xCC, 0xA5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* m̥ */
  { 0xA22C, 2, { 0xCB, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ˉ */
  { 0xA22D, 3, { 0x6E, 0xCC, 0xA5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* n̥ */
  { 0xA22E, 1, { 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ~ */
  { 0xA22F, 2, { 0xC3, 0xBE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* þ */
  { 0xA230, 2, { 0xCB, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ˘ */
  { 0xA232, 2, { 0xCB, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ˇ */
  { 0xA233, 3, { 0x4B, 0xCC, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Ḱ */
  { 0xA235, 1, { 0x2F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* / */
};


Gaiji_table_type gaiji_table_wide_genius[NUM_WIDE_GENIUS_ITEMS] =
{
  { 0xA42D, 2, { 0xC3, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Æ */
  { 0xA430, 3, { 0xE2, 0x92, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Ⓒ cb4960 */
  { 0xA431, 3, { 0xE2, 0x93, 0x8A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Ⓤ cb4960 */
  { 0xA432, 3, { 0xE2, 0x93, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Ⓢ cb4960 */
  { 0xA433, 3, { 0xE2, 0x92, 0xB9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Ⓓ cb4960 */
  { 0xA43A, 3, { 0xE2, 0x80, 0x95, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ― */
  { 0xA440, 2, { 0xC2, 0xA9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* © */
  { 0xA451, 2, { 0xC2, 0xAE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ® */
  { 0xA460, 3, { 0xE2, 0x91, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ① */
  { 0xA461, 3, { 0xE2, 0x91, 0xA1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ② */
  { 0xA462, 3, { 0xE2, 0x91, 0xA2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ③ */
  { 0xA463, 3, { 0xE2, 0x91, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ④ */
  { 0xA464, 3, { 0xE2, 0x91, 0xA4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑤ */
  { 0xA465, 3, { 0xE2, 0x91, 0xA5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑥ */
  { 0xA466, 3, { 0xE2, 0x91, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑦ */
  { 0xA467, 3, { 0xE2, 0x91, 0xA7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑧ */
  { 0xA468, 3, { 0xE2, 0x91, 0xA8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑨ */
  { 0xA469, 3, { 0xE2, 0x91, 0xA9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑩ */
  { 0xA46A, 3, { 0xE2, 0x91, 0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑪ */
  { 0xA46B, 3, { 0xE2, 0x91, 0xAB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑫ */
  { 0xA46C, 3, { 0xE2, 0x91, 0xAC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑬ */
  { 0xA46D, 3, { 0xE2, 0x91, 0xAD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑭ */
  { 0xA46E, 3, { 0xE2, 0x91, 0xAE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑮ */
  { 0xA46F, 3, { 0xE2, 0x91, 0xAF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑯ */
  { 0xA470, 3, { 0xE2, 0x91, 0xB0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑰ */
  { 0xA471, 3, { 0xE2, 0x91, 0xB1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑱ */
  { 0xA472, 3, { 0xE2, 0x91, 0xB2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑲ */
  { 0xA473, 3, { 0xE2, 0x91, 0xB3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑳ */
  { 0xB42D, 2, { 0xC3, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* Æ */
  { 0xB43A, 3, { 0xE2, 0x80, 0x95, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ― */
  { 0xB440, 2, { 0xC2, 0xA9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* © */
  { 0xB451, 2, { 0xC2, 0xAE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ® */
  { 0xB460, 3, { 0xE2, 0x91, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ① */
  { 0xB461, 3, { 0xE2, 0x91, 0xA1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ② */
  { 0xB462, 3, { 0xE2, 0x91, 0xA2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ③ */
  { 0xB463, 3, { 0xE2, 0x91, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ④ */
  { 0xB464, 3, { 0xE2, 0x91, 0xA4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑤ */
  { 0xB465, 3, { 0xE2, 0x91, 0xA5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑥ */
  { 0xB466, 3, { 0xE2, 0x91, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑦ */
  { 0xB467, 3, { 0xE2, 0x91, 0xA7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑧ */
  { 0xB468, 3, { 0xE2, 0x91, 0xA8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑨ */
  { 0xB469, 3, { 0xE2, 0x91, 0xA9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑩ */
  { 0xB46A, 3, { 0xE2, 0x91, 0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑪ */
  { 0xB46B, 3, { 0xE2, 0x91, 0xAB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑫ */
  { 0xB46C, 3, { 0xE2, 0x91, 0xAC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑬ */
  { 0xB46D, 3, { 0xE2, 0x91, 0xAD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑭ */
  { 0xB46E, 3, { 0xE2, 0x91, 0xAE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑮ */
  { 0xB46F, 3, { 0xE2, 0x91, 0xAF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑯ */
  { 0xB470, 3, { 0xE2, 0x91, 0xB0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑰ */
  { 0xB471, 3, { 0xE2, 0x91, 0xB1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑱ */
  { 0xB472, 3, { 0xE2, 0x91, 0xB2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑲ */
  { 0xB473, 3, { 0xE2, 0x91, 0xB3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } }, /* ⑳ */
};

#endif /* GAIJI_TABLE_GENIUS_H */
