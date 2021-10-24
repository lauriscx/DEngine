#pragma once
#include "Application/AppWindow.h"

namespace Engine {
	class WinWindow : public AppWindow {
	public:
		WinWindow();

		bool Create(AppContext* context) override;

		void SetTitle(const char* title) override;
		void SetWidth(int width) override;
		void SetHeight(int height) override;

		void SetVSync(bool vsync) override;

		const char* GetTitle() override;
		int GetWidth() const;
		int GetHeight() const;
		bool GetVSync() const;

		void OnUpdate() override;

		bool Closed() override;

		virtual ~WinWindow();

	private:
		void* m_Window;

		int height;
		int width;

		const char* title;

		bool fullScreen;
		bool vsync;
		bool windowClosed;
	};
}