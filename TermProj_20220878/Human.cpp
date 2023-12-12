#include <iostream>
#include "Human.h"
#include "Exeption.h"
using namespace std;

void Human::setNum(int n1, int n2, int n3) {
	num[0] = n1;
	num[1] = n2;
	num[2] = n3;
}

int* Human::getNum() {
	return num;
}

void Human::guessNum() {
	Exeption exeption;
	int num[3];

	do {
		cout << "첫 번째 숫자를 제시하세요 >> ";
		cin >> num[0];
		cout << "두 번째 숫자를 제시하세요 >> ";
		cin >> num[1];
		cout << "세 번째 숫자를 제시하세요 >> ";
		cin >> num[2];
	} while (!exeption.isValidNum(num));

	setNum(num[0], num[1], num[2]);
}