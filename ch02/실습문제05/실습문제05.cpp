#include <iostream>
using namespace std;

int main()
{
	char str[100] = { '\0' };
	int xCount = 0;
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";
	cin.getline(str, 100);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'x') {
			xCount++;
		}
	}

	cout << "x�� ������ " << xCount;

	return 0;
}