#include <iostream>
#include <fstream>
using namespace std;

int main() {
	fstream fin("c:\\windows\\system.ini", ios::in);
	if (!fin) {
		cout << "���� ���� ����" << endl;
		return 0;
	}

	string line;
	int i = 1;
	while (getline(fin, line))
		cout << i++ << " : " << line << endl;
	fin.close();
}