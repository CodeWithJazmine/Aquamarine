#pragma once

#ifdef AQ_PLATFORM_WINDOWS

extern Aquamarine::Application* Aquamarine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Aquamarine::CreateApplication();
	app->Run();
	delete app;
}

#endif