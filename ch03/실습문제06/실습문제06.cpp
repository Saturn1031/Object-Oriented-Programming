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
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "10 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;

	return 0;
}