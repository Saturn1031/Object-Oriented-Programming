#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big);

int main() {
	int a, b, big;
	cout << "�� ���� ���� �Է� >> ";
	cin >> a >> b;
	bigger(a, b, big);
	cout << "ū ���� " << big;
}

bool bigger(int a, int b, int& big) {
	if (a == b) {
		big = a;
		return true;
	}
	else if (a > b) {
		big = a;
		return false;
	}
	else {
		big = b;
		return false;
	}
}