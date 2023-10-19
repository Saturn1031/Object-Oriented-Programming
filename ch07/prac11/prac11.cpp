#include <iostream>
using namespace std;

class Stack {
	int arr[5];
	int size = 0;
public:
	Stack& operator<<(int n);
	Stack& operator>>(int& n);
	bool operator!();
};

Stack& Stack::operator<<(int n) {
	arr[size++] = n;
	return *this;
}

Stack& Stack::operator>>(int& n) {
	n = arr[--size];
	return *this;
}

bool Stack::operator!() {
	if (size == 0) {
		return true;
	}
	return false;
}

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}