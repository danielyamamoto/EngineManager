#pragma once
#include "Filesystem.h"
#include <iostream>

using namespace std;

class PS3Filesystem : public Filesystem {
public:
	string read(const string &filename) { return filename; }
	void write(const string &filename, const string &content) { }
	void test() { printf("\nSoy Play3\n"); }
};