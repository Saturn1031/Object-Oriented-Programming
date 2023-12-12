#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
	fstream fin("c:\\Temp\\system.ini");
	if (!fin) {
		cout << "파일 열기 오류" << endl;
		return 0;
	}

	vector<string> v;
	string line;
	while (getline(fin, line))v.push_back(line);

	int lineNum;
	cout << "라인 번호를 입력하세요. 1보다 작은 값이면 종료 " << endl;
	do {
		cout << ": ";
		cin >> lineNum;
		if (lineNum > v.size()) continue;
		cout << v[lineNum - 1] << endl;
	} while (lineNum >= 0);

	cout << "종료합니다." << endl;

	fin.close();
}