#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
private:
	bool isNumEven;
public:
	SelectableRandom(string str);
	int next();
	int nextInRange(int s, int e);
};

SelectableRandom::SelectableRandom(string str) {
	if (str == "even") {
		isNumEven = true;
	}
	else if (str == "odd") {
		isNumEven = false;
	}
}

int SelectableRandom::next() {
	if (isNumEven == true) {
		return rand() * 2;
	}
	else {
		return rand() * 2 + 1;
	}
}

int SelectableRandom::nextInRange(int s, int e) {
	if (isNumEven == true) {
		if (s % 2 == 1 && e % 2 == 1) {
			return ((rand() % (e - s) / 2) + ((s + 1) / 2)) * 2;
		}
		else {
			return ((rand() % (e - s + 1) / 2) + ((s + 1) / 2)) * 2;
		}
	}
	else {
		if (s % 2 == 0 && e % 2 == 0) {
			return ((rand() % (e - s) / 2) + ((s + 1) / 2)) * 2 + 1;
		}
		else {
			return ((rand() % (e - s + 1) / 2) + ((s + 1) / 2)) * 2 + 1;
		}
	}
}

int main()
{
	srand((unsigned)time(0));
	SelectableRandom r1("even");
	SelectableRandom r2("odd");
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r1.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "9 까지의 홀수 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r2.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;

	return 0;
}