#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	while (true) {
		cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)" << endl << ">> ";
		getline(cin, str);
		if (str == "exit") {
			break;
		}
		for (int i = str.length() - 1; i >= 0; i--) {
			cout << str[i];
		}
		cout << endl;
	}
}