#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int acount = 0;
	cout << "���ڿ� �Է� >> ";
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) == 'a') {
			acount++;
		}
	}
	cout << "���� a�� " << acount << "�� �ֽ��ϴ�." << endl;
}