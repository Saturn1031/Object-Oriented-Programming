#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Pc.h"
#include "Exeption.h"
using namespace std;

void Pc::setNum(int n1, int n2, int n3) {
	num[0] = n1;
	num[1] = n2;
	num[2] = n3;
}

int* Pc::getNum() {
	return num;
}

void Pc::setRandomNum() {
	Exeption exeption;
	srand((unsigned)time(0));
	int n1, n2, n3;
	do {
		n1 = rand() % 10;
		n2 = rand() % 10;
		n3 = rand() % 10;
	} while (!exeption.isPrimaryPcNum(n1, n2, n3));

	setNum(n1, n2, n3);
	cout << endl << "pc의 랜덤 숫자가 생성되었습니다." << endl;
}