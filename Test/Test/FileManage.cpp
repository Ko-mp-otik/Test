#include "FileManage.h"

FileManage::FileManage(string path) {
	this->path = path;
	f.open(path, ios::in);
}

string FileManage::Read() {
	string data;
	getline(f, data);
	return data;
}

void FileManage::Write(string a) {
	f.open(path, ios::out);
	f << a;
}