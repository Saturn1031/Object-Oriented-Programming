#include <iostream>
#include "Exeption.h"
using namespace std;

bool Exeption::isValidNum(int* n) {
	for (int i = 0; i < 3; i++) {
		if (!(n[i] >= 0 && n[i] <= 9)) {
			cout << errMsg1 << endl << endl;
			cin.clear();
			cin.ignore();
			return false;
		}
		if (n[i] == n[(i + 1) % 3] || n[i] == n[(i + 2) % 3]) {
			cout << errMsg3 << endl << endl;
			return false;
		}
	}
	return true;
}

bool Exeption::isValidGameNum(int n) {
	if (n != 1 && n != 2 && n != 3) {
		cout << errMsg2 << endl << endl;
		cin.clear();
		cin.ignore();
		return false;
	}
	return true;
}

bool Exeption::isPrimaryPcNum(int n1, int n2, int n3) {
	if (n1 == n2 || n1 == n3 || n2 == n3) {
		return false;
	}
	return true;
}