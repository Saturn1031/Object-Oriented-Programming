#include <iostream>
using namespace std;

int main()
{
	string menuarr[3] = {"«��", "¥��", "������"};
	int menu, people;
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";

	while (true) {
		cout << "«��:1, ¥��:2, ������:3, ����:4 >> ";
		cin >> menu;
		if (menu >= 1 && menu <= 3) {
			cout << "���κ�? ";
			cin >> people;
			cout << menuarr[menu - 1] << " " << people << "�κ� ���Խ��ϴ�\n";
		}
		else if (menu == 4) {
			cout << "���� ������ �������ϴ�.\n";
			break;
		}
		else {
			cout << "�ٽ� �ֹ��ϼ���!!\n";
		}
	}

	return 0;
}