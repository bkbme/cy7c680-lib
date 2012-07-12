/* 
  This file is part of cy7c680-lib.

  cy7c680-lib is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  cy7c680-lib is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#define SFR(addr, name) __sfr __at (addr) name
#define SBIT(address, name) static __sbit __at (address) name
#define SFRX(address, name) static volatile unsigned char __xdata __at(address) name

SFR(0x80, PORTA);
SBIT(0x80, PORTA_0);
SBIT(0x81, PORTA_1);
SBIT(0x82, PORTA_2);
SBIT(0x83, PORTA_3);
SBIT(0x84, PORTA_4);
SBIT(0x85, PORTA_5);
SBIT(0x86, PORTA_6);
SBIT(0x87, PORTA_7);

SFR(0x90, PORTB);
SBIT(0x90, PORTB_0);
SBIT(0x91, PORTB_1);
SBIT(0x92, PORTB_2);
SBIT(0x93, PORTB_3);
SBIT(0x94, PORTB_4);
SBIT(0x95, PORTB_5);
SBIT(0x96, PORTB_6);
SBIT(0x97, PORTB_7);

SFR(0xA0, PORTC);
SBIT(0xA0, PORTC_0);
SBIT(0xA1, PORTC_1);
SBIT(0xA2, PORTC_2);
SBIT(0xA3, PORTC_3);
SBIT(0xA4, PORTC_4);
SBIT(0xA5, PORTC_5);
SBIT(0xA6, PORTC_6);
SBIT(0xA7, PORTC_7);

SFR(0xB0, PORTD);
SBIT(0xB0, PORTD_0);
SBIT(0xB1, PORTD_1);
SBIT(0xB2, PORTD_2);
SBIT(0xB3, PORTD_3);
SBIT(0xB4, PORTD_4);
SBIT(0xB5, PORTD_5);
SBIT(0xB6, PORTD_6);
SBIT(0xB7, PORTD_7);

SFR(0xB1, PORTE);

SFR(0xB2, DDRA);
SFR(0xB3, DDRB);
SFR(0xB4, DDRC);
SFR(0xB5, DDRD);
SFR(0xB6, DDRE);

SFRX(0xE600, CPUCS);
//CPUCS bit definitions
#define PORTCSTB  5
#define CLKSPD1   4
#define CLKSPD0   3
#define CLKINV    2
#define CLKOE     1
#define RESET     0
