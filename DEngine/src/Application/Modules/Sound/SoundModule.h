#pragma once
#include "Application/Modules/Module.h"
#include <alc.h>
#include <al.h>

namespace Engine {
	class SoundModule : public Module {
	public:
		SoundModule();
		virtual ~SoundModule();

		std::vector<std::string> GetAvailableSoundDevices();

		virtual int ID() override;
	private:
		std::vector<std::string> m_Devices;
		ALCdevice* device;
	};
}