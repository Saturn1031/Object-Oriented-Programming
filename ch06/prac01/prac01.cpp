#include <iostream>
using namespace std;

int add(int arr[], int size = 1) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

int add(int arr1[], int size, int arr2[]) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr1[i] + arr2[i];
	}
	return sum;
}

int main() {
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}