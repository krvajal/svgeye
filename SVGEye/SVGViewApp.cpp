#include "SVGViewApp.h"
#include "svgview.h"


//////////////////////////////////////////////////////////////////////////////
///////////////////////////////  Application /////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

IMPLEMENT_APP(SVGViewApp)

bool SVGViewApp::OnInit() {
	wxGetApp();
#ifndef __WXWINCE__
	setlocale(LC_NUMERIC, "C");
#endif
	//wxLog::SetActiveTarget(new wxLogStderr);
	wxInitAllImageHandlers();
#ifdef USE_LIBAV
	wxFfmpegMediaDecoder::Init();
#endif

	MainFrame* mainFrame = new MainFrame(NULL, wxT("SVG Viewer"), wxDefaultPosition, wxSize(500, 400));
	SetTopWindow(mainFrame);

	return true;
}
