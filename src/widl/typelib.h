/*
 * IDL Compiler
 *
 * Copyright 2004 Ove Kaaven
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __WIDL_TYPELIB_H
#define __WIDL_TYPELIB_H

extern void add_importlib(const char *name, typelib_t *typelib);

/* Copied from wtypes.h. Not included directly because that would create a
 * circular dependency (after all, wtypes.h is generated by widl...) */

extern unsigned short get_type_vt(type_t *t);

extern int create_msft_typelib(typelib_t *typelib);
#endif
