/*
 * Copyright (C) 2010 Philippe Gerum <rpm@xenomai.org>.
 *
 * Xenomai is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published
 * by the Free Software Foundation; either version 2 of the License,
 * or (at your option) any later version.
 *
 * Xenomai is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Xenomai; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 */

#ifndef _XENO_COMPAT_LINUX_ERR_H
#define _XENO_COMPAT_LINUX_ERR_H

#include <linux/fs.h>

#define IS_ERR_VALUE(value) IS_ERR((void *)value)

#endif /* _XENO_COMPAT_LINUX_ERR_H */
