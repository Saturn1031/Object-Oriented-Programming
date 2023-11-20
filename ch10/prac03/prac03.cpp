#include <iostream>
using namespace std;

template <class T>
void reverseArray(T arr[], int size) {
	T temp;
	for (int i = 0; i < size / 2 + 1; i++) {
		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
}