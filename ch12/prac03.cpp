#include <iostream>
#include <fstream>
using namespace std;

int main() {
	fstream fin("c:\\windows\\system.ini", ios::in);
	if (!fin) {
		cout << "���� ���� ����" << endl;
		return 0;
	}

	int ch;
	while ((ch = fin.get()) != EOF)cout << (char)toupper(ch);
	fin.close();
}