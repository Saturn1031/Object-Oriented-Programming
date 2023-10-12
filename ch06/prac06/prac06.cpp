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
	cout << "������ 5�� �Է��϶�. �迭 x�� �����Ѵ� >> ";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}

	cout << "������ 5�� �Է��϶�. �迭 y�� �����Ѵ� >> ";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}

	cout << "��ģ ���� �迭�� ����Ѵ�" << endl;
	int* sumArr = ArrayUtility2::concat(x, y, 5);
	for (int i = 0; i < 10; i++) {
		cout << sumArr[i] << ' ';
	}
	cout << endl;
	cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ 2" << endl;
	int n = 2;
	int* remArr = ArrayUtility2::remove(x, y, 5, n);
	for (int i = 0; i < n; i++) {
		cout << remArr[i] << ' ';
	}
}