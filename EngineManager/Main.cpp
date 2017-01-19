// Main.cpp: define el punto de entrada de la aplicación de consola.

#include "stdafx.h"
#include "EngineManager.h"

int main() {
	EngineManager engine;
	engine.initEngine();
	engine.starUpManager();
	engine.shutDownManager();

	getchar();
    return 0;
}