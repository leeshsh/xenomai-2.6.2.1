/*
 * Copyright (C) 2006 Philippe Gerum <rpm@xenomai.org>.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA.
 */

#include <vxworks/vxworks.h>

extern int __vxworks_muxid;

void sysClkDisable(void)
{
	XENOMAI_SKINCALL0(__vxworks_muxid, __vxworks_sys_clkdisable);
}

void sysClkEnable(void)
{
	XENOMAI_SKINCALL0(__vxworks_muxid, __vxworks_sys_clkenable);
}

int sysClkRateGet(void)
{
	int hz;

	XENOMAI_SKINCALL1(__vxworks_muxid, __vxworks_sys_clkrateget, &hz);
	return hz;
}

STATUS sysClkRateSet(int hz)
{
	int err;

	err = XENOMAI_SKINCALL1(__vxworks_muxid, __vxworks_sys_clkrateset, hz);
	return err ? ERROR : OK;
}
