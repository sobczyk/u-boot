/*
 * Copyright 2009 Freescale Semiconductor, Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 *
 */

#ifndef _ASM_CONFIG_H_
#define _ASM_CONFIG_H_

#ifndef CONFIG_MAX_MEM_MAPPED
#if defined(CONFIG_4xx) || defined(CONFIG_E500)
#define CONFIG_MAX_MEM_MAPPED	((phys_size_t)2 << 30)
#else
#define CONFIG_MAX_MEM_MAPPED	(256 << 20)
#endif
#endif

#endif
