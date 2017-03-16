#include "EngineManager.h"

EngineManager::EngineManager() {

}

EngineManager::~EngineManager() {

}

void EngineManager::initEngine() {
	puts("Engine\n");
}

void EngineManager::initInstance() {
	fileSystem.createInstance();
}

void EngineManager::starUpManager() {
	render.starUp();
	physics.starUp();
	animation.starUp();
	texture.starUp();
	video.starUp();
	memory.starUp();
	fileSystem.starUp();
}

void EngineManager::shutDownManager() {
	render.shutDown();
	physics.shutDown();
	animation.shutDown();
	texture.shutDown();
	video.shutDown();
	memory.shutDown();
	fileSystem.shutDown();
}