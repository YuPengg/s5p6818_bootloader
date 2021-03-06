/*
 * Copyright (C) 2017
 * Author: metro94 <flattiles@gmail.com>
 *
 * Version: v1.0
 * --- Update time: 02/07/2017
 * --- Description: First build; header for Serial opeartion
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __SERIAL_H__
#define __SERIAL_H__

#include <common.h>
#include <std/math.h>
#include <std/printf.h>
#include <std/debug.h>

#include <nexell/nx_gpio.h>
#include <nexell/nx_iprst.h>
#include <clkgen.h>
#include <serial.h>

void init_serial(void);
void init_nx_serial(int);
int  get_serial_tx_fifo_count(void);
int  get_serial_rx_fifo_count(void);
void wait_serial_tx_done(void);
int  getchar_serial(void);
int  putchar_serial(int);

#endif
