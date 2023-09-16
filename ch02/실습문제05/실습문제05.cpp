#include <iostream>
using namespace std;

int main()
{
	char str[100] = { '\0' };
	int xCount = 0;
	cout << "문자들을 입력하라(100개 미만).\n";
	cin.getline(str, 100);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'x') {
			xCount++;
		}
	}

	cout << "x의 개수는 " << xCount;

	return 0;
}