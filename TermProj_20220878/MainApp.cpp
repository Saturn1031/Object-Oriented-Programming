#include <iostream>
#include "BaseBallGame.h"
#include "Exeption.h"
using namespace std;

int main() {
	BaseBallGame game;
	Exeption exeption;
	int gameNum;
	while (true) {
		do {
			cout << "~~숫자 야구 게임~~" << endl;
			cout << "원하는 메뉴의 숫자를 입력하세요.(게임 실행 [1]\t게임 설명 [2]\t게임 종료[3]) >> ";
			cin >> gameNum;
			
		} while (!exeption.isValidGameNum(gameNum));

		if (gameNum == 1) {
			game.run();
		}
		else if (gameNum == 2) {
			game.explainGame();
		}
		else if (gameNum == 3) {
			cout << "게임을 종료합니다." << endl;
			return 0;
		}
	}
}