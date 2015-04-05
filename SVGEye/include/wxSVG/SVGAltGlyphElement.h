propertyId); if (it != end()) return *it->second; return *s_emptyCSSValue; }
    
    void SetProperty(wxCSS_PROPERTY propertyId, const wxString& value);
    void SetProperty(wxCSS_PROPERTY propertyId, const wxSVGAnimatedType& value);
    inline bool HasProperty(wxCSS_PROPERTY propertyId) const { return find(propertyId) != end(); }
    inline wxString RemoveProperty(wxCSS_PROPERTY propertyId) { erase(propertyId); return wxT(""); }
    
    static wxCSS_PROPERTY GetPropertyId(const wxString& propertyName);
    static wxString GetPropertyName(wxCSS_PROPERTY propertyId);
  
  public:
    inline wxCSS_VALUE GetAlignmentBaseline() const
    {
      const_iterator it = find(wxCSS_PROPERTY_ALIGNMENT_BASELINE);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetIdentValue() : wxCSS_VALUE_AUTO;
    }
    inline bool HasAlignmentBaseline() const { return HasProperty(wxCSS_PROPERTY_ALIGNMENT_BASELINE); }
    inline void SetAlignmentBaseline(wxCSS_VALUE value)
    {
      iterator it = find(wxCSS_PROPERTY_ALIGNMENT_BASELINE);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetIdentValue(value);
      else
        (*this)[wxCSS_PROPERTY_ALIGNMENT_BASELINE] = new wxCSSPrimitiveValue(value);
    }
    

    inline const wxCSSPrimitiveValue& GetBaselineShift() const
    {
      const_iterator it = find(wxCSS_PROPERTY_BASELINE_SHIFT);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second) : *s_emptyCSSValue;
    }
    inline bool HasBaselineShift() const { return HasProperty(wxCSS_PROPERTY_BASELINE_SHIFT); }
    inline void SetBaselineShift(const wxCSSPrimitiveValue& value)
    {
      iterator it