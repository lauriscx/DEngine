#pragma once
#include "Core/Core.h"

/*
 * Basic event class
 */
namespace Engine {
	class ENGINE_API BasicEvent {
	public:
		BasicEvent() {}

		virtual int			GetType() { return false; }
		virtual const char* toString() { return "Event"; }

		virtual ~BasicEvent() {}
	};
}