#include <iostream>
#include <string>
using namespace std;

int main()
{
	string password, password2;

	cout << "새 암호를 입력하세요 >> ";
	getline(cin, password);
	cout << "새 암호를 다시 한 번 입력하세요 >> ";
	getline(cin, password2);

	if (password == password2) {
		cout << "같습니다\n";
	}
	else {
		cout << "같지 않습니다\n";
	}

	return 0;
}