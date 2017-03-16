// Main.cpp: define el punto de entrada de la aplicación de consola.
#include "stdafx.h"
#include <vector>
#include <stdio.h>

#include "RenderManager.h"
#include "PhysicsManager.h"
#include "AnimationManager.h"
#include "TextureManager.h"
#include "VideoManager.h"
#include "MemoryManager.h"
#include "FileSystemManager.h"

RenderManager render;
PhysicsManager physics;
AnimationManager animation;
TextureManager texture;
VideoManager video;
MemoryManager memory;
FileSystemManager fileSystem;

bool isExit;

int main() {
	render.starUp();
	physics.starUp();
	animation.starUp();
	texture.starUp();
	video.starUp();
	memory.starUp();
	fileSystem.starUp();

	isExit = true;

	while (!isExit) {

	}

	render.shutDown();
	physics.shutDown();
	animation.shutDown();
	texture.shutDown();
	video.shutDown();
	memory.shutDown();
	fileSystem.shutDown();

	getchar();
    return 0;
}