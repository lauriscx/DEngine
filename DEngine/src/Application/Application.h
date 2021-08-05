#pragma once
#include "Core/Core.h"
#include "Core/Window.h"
#include "Core/Device.h"
#include "Core/EventSystem/EventHandler.h"
#include "Core/InputSystem/InputHandler.h"
#include "AppContext.h"
#include "AppConfig.h"


namespace Engine {
	class ENGINE_API Application : public EventHandler, public InputHandler {
	public:
		Application();

		virtual void Run();
		virtual void OnUpdate();
		virtual bool OnEvent(BasicEvent& event) override;
		virtual bool OnInput(int x, int y, int action, int key) override;
		virtual bool Close();

		static Application* GetInstance() { return s_Instance; }

		virtual AppConfig	* GetConfig();
		virtual AppContext	* GetContext();
		virtual Window		* GetWindow();
		virtual Device		* GetDevice();

		virtual ~Application();
	/* Application data */
	private:
		static Application* s_Instance;

		AppConfig * m_Config;
		AppContext * m_Context;
		Window * m_Window;
		Device * m_Device;

		bool close;
	};
}