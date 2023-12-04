#include <Wisteria.h>
using Wisteria::Application;

int main() {
	Application* app = new Application();
	app->Run();
	delete(app);
}
