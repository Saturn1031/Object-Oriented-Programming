#include <iostream>
#include "BaseBallGame.h"
using namespace std;

void BaseBallGame::run() {
	pc.setRandomNum();
	// cout << "pc의 번호: " << pc.getNum()[0] << pc.getNum()[1] << pc.getNum()[2] << endl;
	for (int i = 0; i < 9; i++) {
		user.guessNum();
		if (compareNum(pc.getNum(), user.getNum())) {
			cout << "승리! " << i + 1 << "번 만에 맞추셨습니다." << endl << endl;
			return;
		}
	}
	cout << "패배! 9번 안에 맞추지 못 하셨습니다." << endl;
	cout << "pc의 번호는 " << pc.getNum()[0] << pc.getNum()[1] << pc.getNum()[2] << "였습니다." << endl << endl;
}

void BaseBallGame::explainGame() {
	cout << endl << "----- 게임 설명 -----" << endl;
	cout << "PC는 0에서 9까지 서로 다른 숫자 3개를 랜덤으로 설정합니다." << endl;
	cout << "사용자는 0에서 9까지 서로 다른 숫자 3개를 제시합니다." << endl;
	cout << "PC가 설정한 3개의 숫자와 비교하여 숫자와 위치가 전부 맞으면 스트라이크입니다." << endl;
	cout << "PC가 설정한 3개의 숫자와 비교하여 숫자는 맞지만 위치가 다르면 볼입니다." << endl;
	cout << "PC가 설정한 3개의 숫자와 비교하여 숫자와 위치가 전부 다르면 아웃입니다." << endl;
	cout << "사용자는 9번까지 숫자를 제시할 수 있습니다." << endl;
	cout << "사용자가 9번 안에 PC가 설정한 숫자를 맞히지 못 하면 게임 패배입니다." << endl;
	cout << "--------------------" << endl << endl;
}

bool BaseBallGame::compareNum(int* pcN, int* userN) {
	int s = 0, b = 0;

	for (int i = 0; i < 3; i++) {
		if (userN[i] == pcN[i]) {
			s++;
		}
		else if (userN[i] == pcN[(i + 1) % 3] || userN[i] == pcN[(i + 2) % 3]) {
			b++;
		}
	}

	cout << endl << s << "S\t" << b << "B\t" << endl << endl;
	if (s == 3) {
		return true;
	}
	return false;
}