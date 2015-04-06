CXX = g++



WX_FLAGS =-I/home/euler/wx-3.0.2/lib/wx/include/gtk3-unicode-static-3.0 -I/home/euler/wx-3.0.2/include/wx-3.0 -D_FILE_OFFSET_BITS=64 -DwxDEBUG_LEVEL=0 -D__WXGTK__ -pthread
  

WX_LIBS = `wx-config --libs` -L/home/euler/wx-3.0.2/lib -pthread  -lwx_baseu-3.0 -lwx_baseu_net-3.0 -lwx_baseu_xml-3.0 -lwx_gtk3u_adv-3.0 -lwx_gtk3u_aui-3.0 -lwx_gtk3u_core-3.0 -lwx_gtk3u_gl-3.0 -lwx_gtk3u_html-3.0 -lwx_gtk3u_propgrid-3.0 -lwx_gtk3u_qa-3.0 -lwx_gtk3u_ribbon-3.0 -lwx_gtk3u_richtext-3.0 -lwx_gtk3u_stc-3.0 -lwx_gtk3u_xrc-3.0 -lwxregexu-3.0 -lwxscintilla-3.0 -pthread -lgthread-2.0 -lX11 -lXxf86vm -lSM -lgtk-3 -lgdk-3 -latk-1.0 -lgio-2.0 -lpangocairo-1.0 -lgdk_pixbuf-2.0 -lcairo-gobject -lpango-1.0 -lcairo -lgobject-2.0 -lglib-2.0 -lpng -ljpeg -ltiff -lexpat -lwxregexu-3.0 -lz -ldl -lm 

CXXFLAGS = $(WX_FLAGS) -I./include/ -I 	./include/wxSVGXML/   -I./include/wxSVG  -O2 -I/usr/include/cairo \
			-I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12   -DUSE_RENDER_CAIRO -pthread -I/usr/include/pango-1.0 -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12    -D_FILE_OFFSET_BITS=64 -D_LARGE_FILES -D__WXGTK__ -pthread -std=c++11

LIBS = -lexpat  -lcairo   -lpangocairo-1.0 -lpango-1.0 -lcairo -lgobject-2.0 -lglib-2.0  $(WX_LIBS)  -L/usr/X11R6/lib64  


SRC_DIR = ./src

WXSVG_SRC = $(SRC_DIR)/SVGDocument.cpp  $(SRC_DIR)/svgctrl.cpp  $(SRC_DIR)/imagsvg.cpp \
	SVGAnimatedType.cpp  $(SRC_DIR)/SVGAnimationElement.cpp \
	SVGAnimateTransformElement.cpp  $(SRC_DIR)/SVGCircleElement.cpp \
	SVGEllipseElement.cpp  $(SRC_DIR)/SVGFEGaussianBlurElement.cpp \
	SVGFilterElement.cpp  $(SRC_DIR)/SVGImageElement.cpp  $(SRC_DIR)/SVGLineElement.cpp \
	SVGLocatable.cpp  $(SRC_DIR)/SVGMarkerElement.cpp  $(SRC_DIR)/SVGPathElement.cpp \
	SVGPolylineElement.cpp  $(SRC_DIR)/SVGPolygonElement.cpp \
	SVGRectElement.cpp  $(SRC_DIR)/SVGRadialGradientElement.cpp \
	SVGSVGElement.cpp  $(SRC_DIR)/SVGTextContentElement.cpp  $(SRC_DIR)/SVGTextElement.cpp \
	SVGUseElement.cpp  $(SRC_DIR)/SVGVideoElement.cpp  $(SRC_DIR)/SVGAngle.cpp \
	SVGColor.cpp  $(SRC_DIR)/GetSVGDocument.cpp  $(SRC_DIR)/SVGLength.cpp  $(SRC_DIR)/SVGMatrix.cpp \
	SVGPaint.cpp  $(SRC_DIR)/SVGPoint.cpp  $(SRC_DIR)/SVGPreserveAspectRatio.cpp \
	SVGRect.cpp  $(SRC_DIR)/SVGTests.cpp  $(SRC_DIR)/SVGTransform.cpp  $(SRC_DIR)/SVGFitToViewBox.cpp \
	SVGStylable.cpp  $(SRC_DIR)/SVGTransformable.cpp \
	SVGElementInstanceList.cpp  $(SRC_DIR)/SVGLengthList.cpp  $(SRC_DIR)/SVGNumberList.cpp \
	SVGPathSegList.cpp  $(SRC_DIR)/SVGPointList.cpp  $(SRC_DIR)/SVGStringList.cpp \
	SVGTransformList.cpp  $(SRC_DIR)/Elements_CopyConstructors.cpp \
	Elements_HasAttribute.cpp  $(SRC_DIR)/Elements_GetAttribute.cpp \
	Elements_GetAttributes.cpp  $(SRC_DIR)/Elements_SetAttribute.cpp \
	CSSValue.cpp  $(SRC_DIR)/CSSStyleDeclaration.cpp  $(SRC_DIR)/SVGCanvas.cpp \
	SVGCanvasItem.cpp  $(SRC_DIR)/NodeList.cpp   

WXXMLSVG_SRC  = $(SRC_DIR)/svgxml/svgxml.cpp  $(SRC_DIR)/svgxml/svgxmlhelpr.cpp

WXSVG_CAIRO_RENDER_SRC =   $(SRC_DIR)/cairo/SVGCanvasCairo.cpp      $(SRC_DIR)/cairo/SVGCanvasImageCairo.cpp  \
                          $(SRC_DIR)/cairo/SVGCanvasPathCairo.cpp    $(SRC_DIR)/cairo/SVGCanvasTextCairo.cpp   

WXSVG_CAIRO_RENDER_OBJS = SVGCanvasCairo.o      SVGCanvasImageCairo.o  \
                          SVGCanvasPathCairo.o    SVGCanvasTextCairo.o
WXXMLSVG_OBJS = svgxml.o  svgxmlhelpr.o





WXSVG_OBJECTS = SVGDocument.lo svgctrl.lo imagsvg.lo \
	SVGAnimatedType.lo SVGAnimationElement.lo \
	SVGAnimateTransformElement.lo SVGCircleElement.lo \
	SVGEllipseElement.lo SVGFEGaussianBlurElement.lo \
	SVGFilterElement.lo SVGImageElement.lo SVGLineElement.lo \
	SVGLocatable.lo SVGMarkerElement.lo SVGPathElement.lo \
	SVGPolylineElement.lo SVGPolygonElement.lo SVGRectElement.lo \
	SVGRadialGradientElement.lo SVGSVGElement.lo \
	SVGTextContentElement.lo SVGTextElement.lo SVGUseElement.lo \
	SVGVideoElement.lo SVGAngle.lo SVGColor.lo GetSVGDocument.lo \
	SVGLength.lo SVGMatrix.lo SVGPaint.lo SVGPoint.lo \
	SVGPreserveAspectRatio.lo SVGRect.lo SVGTests.lo \
	SVGTransform.lo SVGFitToViewBox.lo SVGStylable.lo \
	SVGTransformable.lo SVGElementInstanceList.lo SVGLengthList.lo \
	SVGNumberList.lo SVGPathSegList.lo SVGPointList.lo \
	SVGStringList.lo SVGTransformList.lo \
	Elements_CopyConstructors.lo Elements_HasAttribute.lo \
	Elements_GetAttribute.lo Elements_GetAttributes.lo \
	Elements_SetAttribute.lo CSSValue.lo CSSStyleDeclaration.lo \
	SVGCanvas.lo SVGCanvasItem.lo NodeList.lo 


OBJECTS = SVGViewApp.o svgview.o $(WXSVG_OBJECTS) $(WXXMLSVG_OBJS) $(WXSVG_CAIRO_RENDER_OBJS)


SOURCES = svgeye/SGVViewApp.cpp svgeye/svgview.cpp  $(WXSVG_SRC)

 
all: $(OBJECTS)
	$(CXX)  -o main.x $(OBJECTS) $(LIBS) 

%.o: ./svgeye/%.cpp
	$(CXX) -c  $(CXXFLAGS)   $? -o $@
%.lo: $(SRC_DIR)/%.cpp
	$(CXX) -c $(CXXFLAGS)   -I./include/wxSVGXML  $? -o $@

%.o: $(SRC_DIR)/svgxml/%.cpp
	$(CXX) -c  $(CXXFLAGS)   $? -o $@


%.o: $(SRC_DIR)/cairo/%.cpp
	$(CXX) -c  $(CXXFLAGS)  $? -o $@

