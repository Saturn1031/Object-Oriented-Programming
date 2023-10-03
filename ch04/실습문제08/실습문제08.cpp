#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int r) {
	radius = r;
}

double Circle::getArea() {
	return 3.14159265 * radius * radius;
}

int main() {
	int cNum;
	cout << "���� ���� >> ";
	cin >> cNum;
	Circle *carr = new Circle[cNum];
	int circleNum = 0;
	for (int i = 0; i < cNum; i++) {
		int n;
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> n;
		carr[i].setRadius(n);
	}
	for (int i = 0; i < cNum; i++) {
		if (carr[i].getArea() > 100) {
			circleNum++;
		}
	}
	cout << "������ 100���� ū ���� " << circleNum << "�� �Դϴ�" << endl;
	delete[] carr;
}