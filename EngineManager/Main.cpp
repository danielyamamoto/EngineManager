// Main.cpp: define el punto de entrada de la aplicación de consola.

#include "stdafx.h"
#include <vector>
#include <stdio.h>
#include "EngineManager.h"
#include "Application.h"

Application app;

void setup() {
	app.setup();
}

void display() {
	app.display();
}

void reshape(int w, int h) {
	app.reshape(w, h);
}

int main(int argc, char *argv[]) {
	
}

int main() {
	app.initEngine();

	getchar();
    return 0;
}