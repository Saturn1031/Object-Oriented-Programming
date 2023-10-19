#include <iostream>
using namespace std;

class SortedArray {
	int size;
	int* p;
	void sort();
public:
	SortedArray();
	SortedArray(SortedArray& src);
	SortedArray(int p[], int size);
	~SortedArray();
	SortedArray operator+(SortedArray& op2);
	SortedArray& operator=(const SortedArray& op2);
	void show();
};

void SortedArray::sort() {
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (p[i] > p[j]) {
				temp = p[j];
				p[j] = p[i];
				p[i] = temp;
			}
		}
	}
}

SortedArray::SortedArray() {
	p = NULL;
	size = 0;
}

SortedArray::SortedArray(SortedArray& src) {
	this->size = src.size;
	this->p = new int[src.size];
	for (int i = 0; i < src.size; i++) {
		this->p[i] = src.p[i];
	}
	sort();
}

SortedArray::SortedArray(int p[], int size) {
	this->size = size;
	this->p = new int[size];
	for (int i = 0; i < size; i++) {
		this->p[i] = p[i];
	}
	sort();
}

SortedArray::~SortedArray() {
	delete[] p;
}

SortedArray SortedArray::operator+(SortedArray& op2) {
	int* arr;
	arr = new int[size + op2.size];
	for (int i = 0; i < size; i++) {
		arr[i] = p[i];
	}
	for (int i = size; i < size + op2.size; i++) {
		arr[i] = op2.p[i - size];
	}
	SortedArray newArr(arr, size + op2.size);
	return newArr;
}

SortedArray& SortedArray::operator=(const SortedArray& op2) {
	delete[] p;
	this->p = new int[op2.size];
	this->size = op2.size;
	for (int i = 0; i < size; i++) {
		this->p[i] = op2.p[i];
	}
	return *this;
}

void SortedArray::show() {
	cout << "배열 출력: ";
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;
}

int main() {
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7, 8, 30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;

	a.show();
	b.show();
	c.show();
}