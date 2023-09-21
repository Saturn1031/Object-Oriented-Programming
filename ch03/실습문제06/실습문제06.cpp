#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	int next();
	int nextInRange(int s, int e);
};

int EvenRandom::next() {
	return rand() * 2;
}

int EvenRandom::nextInRange(int s, int e) {
	if (s % 2 == 1 && e % 2 == 1) {
		return ((rand() % (e - s) / 2) + ((s + 1) / 2)) * 2;
	}
	else {
		return ((rand() % (e - s + 1) / 2) + ((s + 1) / 2)) * 2;
	}
}

int main()
{
	srand((unsigned)time(0));
	EvenRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;

	return 0;
}