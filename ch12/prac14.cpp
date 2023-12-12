#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file("c:\\windows\\system.ini");
	ifstream fin;
	fin.open(file, ios::in | ios::binary);
	if (!fin) {
		cout << file << " 열기 실패" << endl;
		return 0;
	}

	int count = 0;
	char s[32];
	while (!fin.eof()) {
		fin.read(s, 32);
		int n = fin.gcount();
		count += n;
	}

	cout << file << " 경로의 파일 크기는 " << count << " 입니다." << endl;
	fin.close();
}