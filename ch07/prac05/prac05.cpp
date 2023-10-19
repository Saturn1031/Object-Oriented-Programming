#include <iostream>
using namespace std;

class Color {
	int r, g, b;
public:
	Color() {};
	Color(int r, int g, int b);
	Color operator+(Color c2);
	bool operator==(Color c2);
	void show();
};

Color::Color(int r, int g, int b) {
	this->r = r;
	this->g = g;
	this->b = b;
}

Color Color::operator+(Color c2) {
	Color temp(this->r, this->g, this->b);
	temp.r += c2.r;
	temp.g += c2.g;
	temp.b += c2.b;
	return temp;
}

bool Color::operator==(Color c2) {
	if (this->r == c2.r && this->g == c2.g && this->b == c2.b) {
		return true;
	}
	return false;
}

void Color::show() {
	cout << this->r << ' ' << this->g << ' ' << this->b << endl;
}

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fushia(255, 0, 255);
	if (c == fushia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}