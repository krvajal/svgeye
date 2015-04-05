//////////////////////////////////////////////////////////////////////////////
// Name:        svgxml.h
// Purpose:     wxSvgXmlDocument - XML parser & data holder class
// Author:      Vaclav Slavik
// Created:     2000/03/05
// RCS-ID:      $Id: svgxml.h,v 1.8 2014/03/27 19:24:49 ntalex Exp $
// Copyright:   (c) 2000 Vaclav Slavik
// Licence:     wxWindows licence
//////////////////////////////////////////////////////////////////////////////

#ifndef _WX_SVGXML_H_
#define _WX_SVGXML_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "svgxml.h"
#endif

#include <wx/string.h>
#include <wx/object.h>
#include <wx/list.h>
#include <wx/hashmap.h>
#include <vector>

class wxSvgXmlNode;
class wxSvgXmlProperty;
class wxSvgXmlDocument;
class wxSvgXmlIOHandler;
class wxInputStream;
class wxOutputStream;

class wxSVGElement;

// Represents XML node type.
enum wxSvgXmlNodeType
{
    // note: values are synchronized with xmlElementType from libxml
    wxSVGXML_ELEMENT_NODE       =  1,
    wxSVGXML_ATTRIBUTE_NODE     =  2,
    wxSVGXML_TEXT_NODE          =  3,
    wxSVGXML_CDATA_SECTION_NODE =  4,
    wxSVGXML_ENTITY_REF_NODE    =  5,
    wxSVGXML_ENTITY_NODE        =  6,
    wxSVGXML_PI_NODE            =  7,
    wxSVGXML_COMMENT_NODE       =  8,
    wxSVGXML_DOCUMENT_NODE      =  9,
    wxSVGXML_DOCUMENT_TYPE_NODE = 10,
    wxSVGXML_DOCUMENT_FRAG_NODE = 11,
    wxSVGXML_NOTATION_NODE      = 12,
    wxSVGXML_HTML_DOCUMENT_NODE = 13
};


// Represents node property(ies).
// Exampl