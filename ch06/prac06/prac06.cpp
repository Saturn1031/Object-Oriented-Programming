#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int *arr = new int[size * 2];
	for (int i = 0; i < size; i++) {
		arr[i] = s1[i];
	}
	for (int i = 0; i < size; i++) {
		arr[size + i] = s2[i];
	}

	return arr;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	int* arr = new int[retSize];
	int count = 0;

	for (int i = 0; i < size; i++) {
		int j;
		for (j = 0; j < size; j++) {
			if (s1[i] == s2[j]) {
				break;
			}
		}
		if (j == size) {
			arr[count] = s1[i];
			count++;
		}

		if (count == retSize) {
			return arr;
		}
	}
}

int main() {
	int x[5], y[5];
	cout << "정수를 5개 입력하라. 배열 x에 삽입한다 >> ";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}

	cout << "정수를 5개 입력하라. 배열 y에 삽입한다 >> ";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}

	cout << "합친 정수 배열을 출력한다" << endl;
	int* sumArr = ArrayUtility2::concat(x, y, 5);
	for (int i = 0; i < 10; i++) {
		cout << sumArr[i] << ' ';
	}
	cout << endl;
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 2" << endl;
	int n = 2;
	int* remArr = ArrayUtility2::remove(x, y, 5, n);
	for (int i = 0; i < n; i++) {
		cout << remArr[i] << ' ';
	}
}