#include <iostream>
using namespace std;

template<class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	T* p = new T[sizeSrc];
	int k = 0;
	for (int i = 0; i < sizeSrc; i++) {
		for (int j = 0; j < sizeMinus; j++) {
			if (src[i] == minus[j]) {
				break;
			}
			else if (j == sizeMinus - 1) {
				p[k] = src[i];
				k++;
			}
		}
	}
	retSize = k;
	return p;
}

int main() {
	int size;
	int x[] = { 1, 2, 3, 4, 5 };
	int y[] = { 2, 4, 6 };
	int* z = remove(x, 5, y, 3, size);

	for (int i = 0; i < size; i++) {
		cout << z[i] << ' ';
	}
}