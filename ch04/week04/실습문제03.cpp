#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int acount = 0;
	cout << "문자열 입력 >> ";
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) == 'a') {
			acount++;
		}
	}
	cout << "문자 a는 " << acount << "개 있습니다." << endl;
}