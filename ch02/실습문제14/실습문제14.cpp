#include <iostream>
#include <string>
using namespace std;

int main()
{
	char coffee[100];
	int num, sum = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";

	while (sum < 20000) {
		cout << "�ֹ� >> ";
		cin.getline(coffee, 100, ' ');
		cin >> num;
		cin.ignore();

		if (strcmp(coffee, "����������") == 0) {
			cout << 2000 * num << "���Դϴ�. ���ְ� �弼��\n";
			sum += 2000 * num;
		}
		else if(strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			cout << 2300 * num << "���Դϴ�. ���ְ� �弼��\n";
			sum += 2300 * num;
		}
		else if (strcmp(coffee, "īǪġ��") == 0) {
			cout << 2500 * num << "���Դϴ�. ���ְ� �弼��\n";
			sum += 2500 * num;
		}
	}

	cout << "���� " << sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";

	return 0;
}