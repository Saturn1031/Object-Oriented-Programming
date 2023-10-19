#include <iostream>
using namespace std;

class Matrix {
	int arr[4];
public:
	Matrix() {};
	Matrix(int a, int b, int c, int d);
	void show();
	Matrix operator+(Matrix m2);
	Matrix& operator+=(Matrix m2);
	bool operator==(Matrix m2);
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

Matrix Matrix::operator+(Matrix m2) {
	Matrix temp;
	for (int i = 0; i < 4; i++) {
		temp.arr[i] = this->arr[i] + m2.arr[i];
	}
	return temp;
}

Matrix& Matrix::operator+=(Matrix m2) {
	for (int i = 0; i < 4; i++) {
		this->arr[i] += m2.arr[i];
	}
	return *this;
}

bool Matrix::operator==(Matrix m2) {
	for (int i = 0; i < 4; i++) {
		if (this->arr[i] != m2.arr[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}