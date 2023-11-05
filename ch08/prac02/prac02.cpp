#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle :public Circle {
	string name;
public:
	NamedCircle() :Circle() { this->name = ""; }
	NamedCircle(int radius, string name) :Circle(radius) { this->name = name; }
	void show() { cout << "�������� " << getRadius() << "�� " << name; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

int main() {
	NamedCircle pizza[5];
	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;

	int r;
	string n;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> r;
		getline(cin, n);
		pizza[i].setRadius(r);
		pizza[i].setName(n);
	}

	r = 0;
	for (int i = 1; i < 5; i++) {
		if (pizza[r].getRadius() < pizza[i].getRadius()) {
			r = i;
		}
	}

	cout << "���� ������ ū ���ڴ� " << pizza[r].getName() << "�Դϴ�";
}