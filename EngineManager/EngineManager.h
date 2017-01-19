#pragma once
#include "RenderManager.h"
#include "PhysicsManager.h"
#include "AnimationManager.h"
#include "TextureManager.h"
#include "VideoManager.h"
#include "MemoryManager.h"
#include "FileSystemManager.h"

class EngineManager {
private:
	RenderManager render;
	PhysicsManager physics;
	AnimationManager animation;
	TextureManager texture;
	VideoManager video;
	MemoryManager memory;
	FileSystemManager fileSystem;

public:
	EngineManager();
	~EngineManager();

	void initEngine();
	void starUpManager();
	void shutDownManager();
};