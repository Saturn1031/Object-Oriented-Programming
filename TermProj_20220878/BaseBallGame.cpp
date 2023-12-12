#include <iostream>
#include "BaseBallGame.h"
using namespace std;

void BaseBallGame::run() {
	pc.setRandomNum();
	// cout << "pc�� ��ȣ: " << pc.getNum()[0] << pc.getNum()[1] << pc.getNum()[2] << endl;
	for (int i = 0; i < 9; i++) {
		user.guessNum();
		if (compareNum(pc.getNum(), user.getNum())) {
			cout << "�¸�! " << i + 1 << "�� ���� ���߼̽��ϴ�." << endl << endl;
			return;
		}
	}
	cout << "�й�! 9�� �ȿ� ������ �� �ϼ̽��ϴ�." << endl;
	cout << "pc�� ��ȣ�� " << pc.getNum()[0] << pc.getNum()[1] << pc.getNum()[2] << "�����ϴ�." << endl << endl;
}

void BaseBallGame::explainGame() {
	cout << endl << "----- ���� ���� -----" << endl;
	cout << "PC�� 0���� 9���� ���� �ٸ� ���� 3���� �������� �����մϴ�." << endl;
	cout << "����ڴ� 0���� 9���� ���� �ٸ� ���� 3���� �����մϴ�." << endl;
	cout << "PC�� ������ 3���� ���ڿ� ���Ͽ� ���ڿ� ��ġ�� ���� ������ ��Ʈ����ũ�Դϴ�." << endl;
	cout << "PC�� ������ 3���� ���ڿ� ���Ͽ� ���ڴ� ������ ��ġ�� �ٸ��� ���Դϴ�." << endl;
	cout << "PC�� ������ 3���� ���ڿ� ���Ͽ� ���ڿ� ��ġ�� ���� �ٸ��� �ƿ��Դϴ�." << endl;
	cout << "����ڴ� 9������ ���ڸ� ������ �� �ֽ��ϴ�." << endl;
	cout << "����ڰ� 9�� �ȿ� PC�� ������ ���ڸ� ������ �� �ϸ� ���� �й��Դϴ�." << endl;
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