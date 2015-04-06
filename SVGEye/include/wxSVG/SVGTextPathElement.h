 it = find(wxCSS_PROPERTY_COLOR);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetRGBColorValue(value);
      else
        (*this)[wxCSS_PROPERTY_COLOR] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxCSS_VALUE GetColorInterpolation() const
    {
      const_iterator it = find(wxCSS_PROPERTY_COLOR_INTERPOLATION);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetIdentValue() : wxCSS_VALUE_SRGB;
    }
    inline bool HasColorInterpolation() const { return HasProperty(wxCSS_PROPERTY_COLOR_INTERPOLATION); }
    inline void SetColorInterpolation(wxCSS_VALUE value)
    {
      iterator it = find(wxCSS_PROPERTY_COLOR_INTERPOLATION);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetIdentValue(value);
      else
        (*this)[wxCSS_PROPERTY_COLOR_INTERPOLATION] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxCSS_VALUE GetColorInterpolationFilters() const
    {
      const_iterator it = find(wxCSS_PROPERTY_COLOR_INTERPOLATION_FILTERS);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetIdentValue() : wxCSS_VALUE_LINEARRGB;
    }
    inline bool HasColorInterpolationFilters() const { return HasProperty(wxCSS_PROPERTY_COLOR_INTERPOLATION_FILTERS); }
    inline void SetColorInterpolationFilters(wxCSS_VALUE value)
    {
      iterator it = find(wxCSS_PROPERTY_COLOR_INTERPOLATION_FILTERS);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetIdentValue(value);
      else
        (*this)[wxCSS_PROPERTY_COLOR_INTERPOLATION_FILTERS] = new wxCSSPrimitiveValue(value);
    }
    

    inline const wxCSSPrimitiveValue& GetColorProfile() const
    {
      const_iterator it = find(wxCSS_PROPERTY_COLOR_PROFILE);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second) : *s_emptyCSSValue;
    }
    inline bool HasColorProfile() const { return HasProperty(wxCSS_PROPERTY_COLOR_PROFILE); }
    inline void SetColorProfile(const wxCSSPrimitiveValue& value)
    {
      iterator it = find(wxCSS_PROPERTY_COLOR_PROFILE);
      if (it != end())
      {
        delete it->second;
        it->second = new wxCSSPrimitiveValue(value);
      }
      else
        (*this)[wxCSS_PROPERTY_COLOR_PROFILE] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxCSS_VALUE GetColorRendering() const
    {
      const_iterator it = find(wxCSS_PROPERTY_COLOR_RENDERING);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetIdentValue() : wxCSS_VALUE_AUTO;
    }
    inline bool HasColorRendering() const { return HasProperty(wxCSS_PROPERTY_COLOR_RENDERING); }
    inline void SetColorRender