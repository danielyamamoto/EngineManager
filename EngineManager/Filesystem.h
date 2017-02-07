#pragma once
#include <iostream>

using namespace std;

class Filesystem {
public:
	static Filesystem *Instance();

	virtual ~Filesystem() { }
	virtual string read(const string& filename) = 0;
	virtual void write(const string& filename, const string& content) = 0;
	virtual void test() = 0;

protected:
	Filesystem() { }
};