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
			cout << "~~���� �߱� ����~~" << endl;
			cout << "���ϴ� �޴��� ���ڸ� �Է��ϼ���.(���� ���� [1]\t���� ���� [2]\t���� ����[3]) >> ";
			cin >> gameNum;
			
		} while (!exeption.isValidGameNum(gameNum));

		if (gameNum == 1) {
			game.run();
		}
		else if (gameNum == 2) {
			game.explainGame();
		}
		else if (gameNum == 3) {
			cout << "������ �����մϴ�." << endl;
			return 0;
		}
	}
}