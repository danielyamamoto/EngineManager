#pragma once
#include "EngineManager.h"

class Application {
private:
	EngineManager engine;

	bool quitGame;

public:
	Application();
	~Application();

	void setup();
	void update();
	void initEngine();
	void display();
	void reshape(int w, int h);
};

