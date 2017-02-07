#include "FileSystemManager.h"

FileSystemManager::FileSystemManager() {

}

FileSystemManager::~FileSystemManager() {

}

void FileSystemManager::starUp() {
	puts("Se ha creado FileSystemManager");
}

void FileSystemManager::shutDown() {
	puts("Se ha destruido FileSystemManager");
}

void FileSystemManager::createInstance() {
	Filesystem *myFile = Filesystem::Instance(); // Initialization
	myFile->test();
	printf("\n%s\n", myFile->read("Hola\n").c_str()); // Test function
}
