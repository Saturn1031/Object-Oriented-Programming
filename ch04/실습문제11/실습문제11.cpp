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
		cout << "���ᰡ �����մϴ�." << endl;
	}
	else {
		tong[0].consume();
		tong[1].consume();
	}
}
void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 2) {
		cout << "���ᰡ �����մϴ�." << endl;
	}
	else {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
	}
}
void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize() < 1) {
		cout << "���ᰡ �����մϴ�." << endl;
	}
	else {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
	}
}
void CoffeeVendingMachine::show() {
	cout << "Ŀ�� " << tong[0].getSize() << ", ";
	cout << "�� " << tong[1].getSize() << ", ";
	cout << "���� " << tong[2].getSize() << endl;
}
void CoffeeVendingMachine::run() {
	int num;
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;
	while (true) {
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���) >> ";
		cin >> num;
		switch (num)
		{
		case 1:
			cout << "���������� �弼��" << endl;
			selectEspresso();
			break;
		case 2:
			cout << "�Ƹ޸�ī�� �弼��" << endl;
			selectAmericano();
			break;
		case 3:
			cout << "����Ŀ�� �弼��" << endl;
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