#pragma once
#include <iostream>
#include "EventManager.h"
#include "AudioManager.h"


class SceneManager {
public:
	SceneManager();
	~SceneManager();
	void initScene();
	void shutDownScene();
};