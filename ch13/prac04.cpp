#include<iostream>
#include<fstream>
using namespace std;

int getFileSize(const char* file) {
	if (file == NULL) throw "NULL";
	ifstream fin(file);
	if (!fin) throw - 2;
	fin.seekg(0, ios::end);
	int length = fin.tellg();
	return length;
}

int main() {
	try {
		int n = getFileSize("c:\\windows\\system.ini");
		cout << "파일 크기 = " << n << endl;
		int m = getFileSize(NULL);
		cout << "파일 크기 = " << m << endl;
	}
	catch (const char* s) {
		cout << "예외 발생 : 파일명이 " << s << " 입니다." << endl;
	}
	catch (int a) {
		cout << "예외 발생 : 파일 열기 실패" << endl;
	}
}
﻿