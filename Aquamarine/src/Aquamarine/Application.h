#pragma once
#include "Core.h"

namespace Aquamarine {

	class AQUAMARINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}
