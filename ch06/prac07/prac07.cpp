#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};

int Random::nextInt(int min, int max) {
	return min + rand() % (max - min + 1);
}

char Random::nextAlphabet() {
	int n = rand() % 2;
	if (n == 0) {
		return (char)('A' + rand() % 26);
	}
	else {
		return (char)('a' + rand() % 26);
	}
}

double Random::nextDouble() {
	double d1, d2;
	do {
		d1 = rand();
		d2 = rand();
	} while ((d1 == 0 && d2 == 0) || d1 == d2);

	if (d1 < d2) {
		return d1 / d2;
	}
	else {
		return d2 / d1;
	}
}

int main() {
	Random::seed();
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	int n;
	for (int i = 0; i < 10; i++) {
		n = Random::nextInt(1, 100);
		cout << n << ' ';
	}
	cout << endl;

	cout << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
	char c;
	for (int i = 0; i < 10; i++) {
		c = Random::nextAlphabet();
		cout << c << ' ';
	}
	cout << endl;

	cout << "랜덤한 실수를 10개를 출력합니다" << endl;
	double d;
	for (int i = 0; i < 10; i++) {
		d = Random::nextDouble();
		cout << d << ' ';
	}
	cout << endl;
}