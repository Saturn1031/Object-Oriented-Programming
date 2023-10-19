#include <iostream>
using namespace std;

class Matrix {
	int arr[4];
public:
	Matrix() {};
	Matrix(int a, int b, int c, int d);
	void show();
	friend int* operator>>(Matrix m, int arr[]);
	friend Matrix& operator<<(Matrix& m, int arr[]);
};

Matrix::Matrix(int a, int b, int c, int d) {
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = d;
}

void Matrix::show() {
	cout << "Matrix = { ";
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << ' ';
	}
	cout << '}' << endl;
}

int* operator>>(Matrix m, int arr[]) {
	for (int i = 0; i < 4; i++) {
		arr[i] = m.arr[i];
	}
	return arr;
}

Matrix& operator<<(Matrix& m, int arr[]) {
	for (int i = 0; i < 4; i++) {
		m.arr[i] = arr[i];
	}
	return m;
}

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1, 2, 3, 4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}