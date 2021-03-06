/***************************************************************************
 *   Copyright (C) 2005-2007 Stefan Schwarzer, Jens Schneider,             *
 *                           Matthias Hardt, Guido Madaus                  *
 *                                                                         *
 *   Copyright (C) 2007-2008 BerLinux Solutions GbR                        *
 *                           Stefan Schwarzer & Guido Madaus               *
 *                                                                         *
 *   Copyright (C) 2009-2011 BerLinux Solutions GmbH                       *
 *                                                                         *
 *   Authors:                                                              *
 *      Stefan Schwarzer   <stefan.schwarzer@diskohq.org>,                 *
 *      Matthias Hardt     <matthias.hardt@diskohq.org>,                   *
 *      Jens Schneider     <pupeider@gmx.de>,                              *
 *      Guido Madaus       <guido.madaus@diskohq.org>,                     *
 *      Patrick Helterhoff <patrick.helterhoff@diskohq.org>,               *
 *      René Bählkow       <rene.baehlkow@diskohq.org>                     *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License version 2.1 as published by the Free Software Foundation.     *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA            *
 **************************************************************************/

#include "mmsgui/theme/mmsbuttonwidgetclass.h"

//store attribute descriptions here
TAFF_ATTRDESC MMSGUI_BUTTONWIDGET_ATTR_I[] = MMSGUI_BUTTONWIDGET_ATTR_INIT;

// address attribute names
#define GETATTRNAME(aname) MMSGUI_BUTTONWIDGET_ATTR_I[MMSGUI_BUTTONWIDGET_ATTR::MMSGUI_BUTTONWIDGET_ATTR_IDS_##aname].name

// address attribute types
#define GETATTRTYPE(aname) MMSGUI_BUTTONWIDGET_ATTR_I[MMSGUI_BUTTONWIDGET_ATTR::MMSGUI_BUTTONWIDGET_ATTR_IDS_##aname].type


MMSButtonWidgetClass::MMSButtonWidgetClass() {
    unsetAll();
}

void MMSButtonWidgetClass::unsetAll() {
    this->className = "";
}

void MMSButtonWidgetClass::setAttributesFromTAFF(MMSTaffFile *tafff, string *prefix, string *path, bool reset_paths) {
	startTAFFScan
	{
        switch (attrid) {
		case MMSGUI_BASE_ATTR::MMSGUI_BASE_ATTR_IDS_class:
            setClassName(attrval_str);
			break;
		}
	}
	endTAFFScan
}

void MMSButtonWidgetClass::setClassName(string className) {
    this->className = className;
}

string MMSButtonWidgetClass::getClassName() {
    return this->className;
}

