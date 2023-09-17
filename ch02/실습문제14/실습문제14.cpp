#include <iostream>
#include <string>
using namespace std;

int main()
{
	char coffee[100];
	int num, sum = 0;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";

	while (sum < 20000) {
		cout << "주문 >> ";
		cin.getline(coffee, 100, ' ');
		cin >> num;
		cin.ignore();

		if (strcmp(coffee, "에스프레소") == 0) {
			cout << 2000 * num << "원입니다. 맛있게 드세요\n";
			sum += 2000 * num;
		}
		else if(strcmp(coffee, "아메리카노") == 0) {
			cout << 2300 * num << "원입니다. 맛있게 드세요\n";
			sum += 2300 * num;
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			cout << 2500 * num << "원입니다. 맛있게 드세요\n";
			sum += 2500 * num;
		}
	}

	cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";

	return 0;
}