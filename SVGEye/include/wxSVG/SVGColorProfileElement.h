//////////////////////////////////////////////////////////////////////////////
// Name:        CSSValue.h
// Purpose:     
// Author:      Alex Thuering
// Created:     2005/05/03
// RCS-ID:      $Id: CSSValue.h,v 1.10 2014/06/30 19:06:11 ntalex Exp $
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
//////////////////////////////////////////////////////////////////////////////

#ifndef wxSVG_CSS_VALUE_H
#define wxSVG_CSS_VALUE_H

#include <wx/string.h>
#include <wx/geometry.h>
#include "RGBColor.h"
#include "CSSValues.h"
#include <vector>

enum wxCSS_VALUE_TYPE {
  wxCSS_INHERIT = 0,
  wxCSS_PRIMITIVE_VALUE,
  wxCSS_VALUE_LIST,
  wxCSS_SVG_COLOR,
  wxCSS_SVG_PAINT,
  wxCSS_CUSTOM = 3
};

class wxCSSValue {
protected:
	wxCSS_VALUE_TYPE m_cssValueType;
  
public:
	wxCSSValue(): m_cssValueType(wxCSS_INHERIT) {}
	wxCSSValue(wxCSS_VALUE_TYPE cssValueType): m_cssValueType(cssValueType) {}
	virtual ~wxCSSValue() {}
	
	inline wxCSS_VALUE_TYPE GetCSSValueType() const { return m_cssValueType; }
	inline void SetCSSValueType(wxCSS_VALUE_TYPE cssValueType) { m_cssValueType = cssValueType; }
	
	virtual wxString GetCSSText() const = 0;
	virtual wxCSSValue* Clone() const = 0;
  
public:
	static wxCSS_VALUE GetValueId(wxString value);
	static wxString GetValueString(wxCSS_VALUE value);
};

enum wxCSS_PRIMITIVE_TYPE {
  wxCSS_UNKNOWN    = 0,
  wxCSS_NUMBER     = 1,
  wxCSS_PERCENTAGE = 2,
  wxCSS_EMS        = 3,
  wxCSS_EXS        = 4,
  wxCSS_PX         = 5,
  wxCSS_CM         = 6,
  wxCSS_MM         = 7,
  wxCSS_IN         = 8,
  wxCSS_PT         = 9,
  wxCSS_PC         = 10,
  wxCSS_DEG        = 11,
  wxCSS_RAD        = 12,
  wxCSS_GRAD       = 13,
  wxCSS_MS         = 14,
  wxCSS_S          = 15,
  wxCSS_HZ         = 16,
  wxCSS_KHZ        = 17,
  wxCSS_DIMENSION  = 18,
  wxCSS_STRING     = 19,
  wxCSS_URI        = 20,
  wxCSS_IDENT      = 21,
  wxCSS_ATTR       = 22,
  wxCSS_COUNTER    = 23,
  wxCSS_REC