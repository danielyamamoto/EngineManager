#pragma once
#include "Filesystem.h"
#include <iostream>

class FileSystemManager {
public:
	FileSystemManager();
	~FileSystemManager();

	void starUp();
	void shutDown();

	void createInstance();
};