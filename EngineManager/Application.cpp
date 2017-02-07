#include "Application.h"

Application::Application() {

}


Application::~Application() {

}

void Application::setup() {
	quitGame = true;
}

void Application::update() {

}

void Application::initEngine() {
	engine.initEngine();
	engine.starUpManager();
	engine.initInstance();
	//engine.shutDownManager();
}

void Application::display() {

}

void Application::reshape(int w, int h) {

}
