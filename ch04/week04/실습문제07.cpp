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
	Circle carr[3];
	int circleNum = 0;
	for (int i = 0; i < 3; i++) {
		int n;
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> n;
		carr[i].setRadius(n);
	}
	for (int i = 0; i < 3; i++) {
		if (carr[i].getArea() > 100) {
			circleNum++;
		}
	}
	cout << "면적이 100보다 큰 원은 " << circleNum << "개 입니다" << endl;
}