#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("c:\\Temp\\system.ini", ios::in | ios::binary); 
	ofstream fout("c:\\Temp\\system.txt", ios::in | ios::binary);

	if (!fin || !fout) {
		cout << "파일 열기 실패" << endl;
		return 0;
	}

	cout << "복사 시작..." << endl;
	fin.seekg(0, ios::end);
	int fileSize = fin.tellg();
	int unit = fileSize / 10;

	char* buf = new char[unit];
	fin.seekg(0, ios::beg);

	for (int i = 0; i < 10; i++) {
		fin.read(buf, unit);
		int readCount = fin.gcount();
		fout.write(buf, readCount);
		cout << "." << readCount << "B " << (i + 1) * 10 << "%" << endl;
	}
	cout << fileSize << "B 복사 완료" << endl;

	fin.close();
	fout.close();
	delete[]buf;
}