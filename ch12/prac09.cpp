#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
	fstream fin("c:\\Temp\\system.ini");
	if (!fin) {
		cout << "���� ���� ����" << endl;
		return 0;
	}

	vector<string> v;
	string line;
	while (getline(fin, line))v.push_back(line);

	int lineNum;
	cout << "���� ��ȣ�� �Է��ϼ���. 1���� ���� ���̸� ���� " << endl;
	do {
		cout << ": ";
		cin >> lineNum;
		if (lineNum > v.size()) continue;
		cout << v[lineNum - 1] << endl;
	} while (lineNum >= 0);

	cout << "�����մϴ�." << endl;

	fin.close();
}