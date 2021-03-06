/*
 * gedit-gio-document-loader.h
 * This file is part of gedit
 *
 * Copyright (C) 2005 - Paolo Maggi
 * Copyright (C) 2007 - Paolo Maggi, Steve Frécinaux
 * Copyright (C) 2008 - Jesse van den Kieboom
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
 * Foundation, Inc., 59 Temple Place, Suite 330, 
 * Boston, MA 02111-1307, USA.
 */
 
/*
 * Modified by the gedit Team, 2005-2008. See the AUTHORS file for a
 * list of people on the gedit Team.
 * See the ChangeLog files for a list of changes.
 *
 * $Id$
 */

#ifndef __GEDIT_GIO_DOCUMENT_LOADER_H__
#define __GEDIT_GIO_DOCUMENT_LOADER_H__

#include <gedit/gedit-document.h>
#include "gedit-document-loader.h"

G_BEGIN_DECLS

/*
 * Type checking and casting macros
 */
#define GEDIT_TYPE_GIO_DOCUMENT_LOADER              (gedit_gio_document_loader_get_type())
#define GEDIT_GIO_DOCUMENT_LOADER(obj)              (G_TYPE_CHECK_INSTANCE_CAST((obj), GEDIT_TYPE_GIO_DOCUMENT_LOADER, GeditGioDocumentLoader))
#define GEDIT_GIO_DOCUMENT_LOADER_CLASS(klass)      (G_TYPE_CHECK_CLASS_CAST((klass), GEDIT_TYPE_GIO_DOCUMENT_LOADER, GeditGioDocumentLoaderClass))
#define GEDIT_IS_GIO_DOCUMENT_LOADER(obj)           (G_TYPE_CHECK_INSTANCE_TYPE((obj), GEDIT_TYPE_GIO_DOCUMENT_LOADER))
#define GEDIT_IS_GIO_DOCUMENT_LOADER_CLASS(klass)   (G_TYPE_CHECK_CLASS_TYPE ((klass), GEDIT_TYPE_GIO_DOCUMENT_LOADER))
#define GEDIT_GIO_DOCUMENT_LOADER_GET_CLASS(obj)    (G_TYPE_INSTANCE_GET_CLASS((obj), GEDIT_TYPE_GIO_DOCUMENT_LOADER, GeditGioDocumentLoaderClass))

/* Private structure type */
typedef struct _GeditGioDocumentLoaderPrivate GeditGioDocumentLoaderPrivate;

/*
 * Main object structure
 */
typedef struct _GeditGioDocumentLoader GeditGioDocumentLoader;

struct _GeditGioDocumentLoader
{
	GeditDocumentLoader loader;

	/*< private > */
	GeditGioDocumentLoaderPrivate *priv;
};

/*
 * Class definition
 */
typedef GeditDocumentLoaderClass GeditGioDocumentLoaderClass;

/*
 * Public methods
 */
GType 		 	 gedit_gio_document_loader_get_type	(void) G_GNUC_CONST;

G_END_DECLS

#endif  /* __GEDIT_GIO_DOCUMENT_LOADER_H__  */
