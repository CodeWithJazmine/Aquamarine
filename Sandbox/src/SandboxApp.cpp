#include <Aquamarine.h>

class Sandbox : public Aquamarine::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Aquamarine::Application* Aquamarine::CreateApplication()
{
	return new Sandbox();
}