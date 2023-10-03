#include <iostream>
using namespace std;

int main() {
	int *intarr = new int[5];
	int sum = 0;
	cout << "정수 5개 입력 >> ";

	for (int i = 0; i < 5; i++) {
		cin >> intarr[i];
	}
	cout << "평균 ";
	for (int i = 0; i < 5; i++) {
		sum += intarr[i];
	}
	cout << sum / 5.0;
	delete intarr;
}