#include <iostream>
using namespace std;

class Circle {
public:
	int c;
};

void swap(Circle& c1, Circle& c2);

int main() {
	Circle c1, c2;
	c1.c = 10;
	c2.c = 20;
	swap(c1, c2);

	cout << c1.c << '\t' << c2.c;
}

void swap(Circle& c1, Circle& c2) {
	Circle temp = c1;
	c1 = c2;
	c2 = temp;
}