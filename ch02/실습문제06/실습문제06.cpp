#include <iostream>
#include <string>
using namespace std;

int main()
{
	string password, password2;

	cout << "�� ��ȣ�� �Է��ϼ��� >> ";
	getline(cin, password);
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ��� >> ";
	getline(cin, password2);

	if (password == password2) {
		cout << "�����ϴ�\n";
	}
	else {
		cout << "���� �ʽ��ϴ�\n";
	}

	return 0;
}