/* Bluefish HTML Editor
 *
 * undo_redo.h -- undo structures and function declarations
 *
 * Copyright (C) 1998-2002 Olivier Sessink
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __UNDO_REDO_H_
#define __UNDO_REDO_H_

void doc_unre_add(Tdocument *doc, const char *text, int start, int end, undo_op_t op);
void doc_unre_new_group(Tdocument *doc);
void doc_unre_init(Tdocument *doc);
void doc_unre_destroy(Tdocument *doc);
void doc_unre_clear_all(Tdocument *doc);
gint doc_undo_op_compare(Tdocument *doc, undo_op_t testfor);
void redo_cb(GtkWidget * widget, gpointer data);
void undo_cb(GtkWidget * widget, gpointer data);
void redo_all_cb(GtkWidget * widget, gpointer data);
void undo_all_cb(GtkWidget * widget, gpointer data);
gboolean doc_has_undo_list(Tdocument *doc);
gboolean doc_has_redo_list(Tdocument *doc);
#endif /* __UNDO_REDO_H_ */
