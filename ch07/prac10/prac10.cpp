#include <iostream>
using namespace std;

class Statistics {
	int* arr = new int[10];
	int size = 0;
public:
	~Statistics() { delete[] arr; }
	bool operator!();
	int& operator>>(int& d);
	Statistics& operator<<(int n);
	void operator~();
};

bool Statistics::operator!() {
	if (size == 0) {
		return true;
	}
	return false;
}

int& Statistics::operator>>(int& d) {
	int avg = 0;
	for (int i = 0; i < size; i++) {
		avg += arr[i];
	}
	d = avg / size;
	return d;
}

Statistics& Statistics::operator<<(int n) {
	this->arr[size++] = n;
	return *this;
}

void Statistics::operator~() {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;

	int x[5];
	cout << "5개의 정수를 입력하라 >> ";
	for (int i = 0; i < 5; i++) cin >> x[i];

	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg = " << avg << endl;
}