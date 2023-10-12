#include <iostream>
using namespace std;

int big(int n1, int n2, int max = 100) {
	int bigNum;
	if (n1 > n2) {
		bigNum = n1;
	}
	else {
		bigNum = n2;
	}
	if (bigNum > max) {
		return max;
	}
	else {
		return bigNum;
	}
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}