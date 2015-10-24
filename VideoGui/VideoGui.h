#ifndef VIDEOGUI_H
#define VIDEOGUI_H

#include "videogui_global.h"
#include "VideoFrame.h"

namespace Gui{
	class VIDEOGUI_EXPORT VideoGui
	{
	public:
		VideoGui();
		~VideoGui();

		void show(){ return m_pFram->show(); }
		void hide(){ return m_pFram->hide(); }

	private:
		VideoFrame *m_pFram;
	};
}

#endif // VIDEOGUI_H
