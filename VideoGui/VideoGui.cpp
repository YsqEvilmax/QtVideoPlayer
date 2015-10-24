#include "stdafx.h"
#include "VideoGui.h"

namespace Gui{
	VideoGui::VideoGui()
		: m_pFram(NULL)
	{
		m_pFram = new VideoFrame();
	}

	VideoGui::~VideoGui()
	{
		Delete(m_pFram);
	}
}
