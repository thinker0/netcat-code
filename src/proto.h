/*
 * proto.h -- main header project file
 * Part of the netcat project
 *
 * Author: Johnny Mnemonic <johnny@themnemonic.org>
 * Copyright (c) 2002 by Johnny Mnemonic
 *
 * $Id: proto.h,v 1.1 2002-04-28 17:33:30 themnemonic Exp $
 */

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 ***************************************************************************/

/* misc.c */
char *netcat_string_split(char **buf);
void debug_output(bool wrap, const char *fmt, ...);
void netcat_commandline(int *argc, char ***argv);
void netcat_printhelp(char *argv0);

/* netcat.c */
extern int o_verbose;
extern char unknown[];

/* network.c */
netcat_host *netcat_resolvehost(char *name, bool numeric);
