#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill();
	void consume();
	int getSize();
};

class CoffeeVendingMachine {
	Container tong[3];
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	void run();
};

void CoffeeVendingMachine::fill() {
	for (int i = 0; i < 3; i++) {
		tong[i].fill();
	}
}
void CoffeeVendingMachine::selectEspresso() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 1) {
		cout << "원료가 부족합니다." << endl;
	}
	else {
		tong[0].consume();
		tong[1].consume();
	}
}
void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 2) {
		cout << "원료가 부족합니다." << endl;
	}
	else {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
	}
}
void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize() < 1) {
		cout << "원료가 부족합니다." << endl;
	}
	else {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
	}
}
void CoffeeVendingMachine::show() {
	cout << "커피 " << tong[0].getSize() << ", ";
	cout << "물 " << tong[1].getSize() << ", ";
	cout << "설탕 " << tong[2].getSize() << endl;
}
void CoffeeVendingMachine::run() {
	int num;
	cout << "***** 커피자판기를 작동합니다. *****" << endl;
	while (true) {
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기) >> ";
		cin >> num;
		switch (num)
		{
		case 1:
			cout << "에스프레소 드세요" << endl;
			selectEspresso();
			break;
		case 2:
			cout << "아메리카노 드세요" << endl;
			selectAmericano();
			break;
		case 3:
			cout << "설탕커피 드세요" << endl;
			selectSugarCoffee();
			break;
		case 4:
			show();
			break;
		case 5:
			fill();
			show();
			break;
		}
	}
}

void Container::fill() {
	this->size = 10;
}
void Container::consume() {
	this->size--;
}
int Container::getSize() {
	return this->size;
}

int main() {
	CoffeeVendingMachine coffee;
	coffee.run();
}