#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class FileManage {
	string path;
	fstream f;
public:
	FileManage(string);
	string Read();
	void Write(string);
};