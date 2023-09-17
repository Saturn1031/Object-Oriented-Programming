#include <iostream>
using namespace std;

int main()
{
	string menuarr[3] = {"짬뽕", "짜장", "군만두"};
	int menu, people;
	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";

	while (true) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4 >> ";
		cin >> menu;
		if (menu >= 1 && menu <= 3) {
			cout << "몇인분? ";
			cin >> people;
			cout << menuarr[menu - 1] << " " << people << "인분 나왔습니다\n";
		}
		else if (menu == 4) {
			cout << "오늘 영업은 끝났습니다.\n";
			break;
		}
		else {
			cout << "다시 주문하세요!!\n";
		}
	}

	return 0;
}