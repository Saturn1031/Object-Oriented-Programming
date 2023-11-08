#include <iostream>
#include <string>
using namespace std;

class Printer {
protected:
	string model, manufacturer;
	int printedCount, availableCount;
public:
	Printer(string m, string f, int a) {
		model = m;
		manufacturer = f;
		availableCount = a;
	}
	virtual void print(int pages) = 0;
	virtual void show() = 0;
};

class InkJetPrinter :public Printer {
	int availableInk;
public:
	InkJetPrinter(string m, string f, int a, int i) :Printer(m, f, a) {
		availableInk = i;
	}
	virtual void print(int pages);
	virtual void show();
};

class LaserPrinter :public Printer {
	int availableToner;
public:
	LaserPrinter(string m, string f, int a, int t) :Printer(m, f, a) {
		availableToner = t;
	}
	virtual void print(int pages);
	virtual void show();
};

void InkJetPrinter::print(int pages) {
	if (availableCount - pages <= 0 || availableInk - pages <= 0) {
		cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
	}
	else {
		printedCount = pages;
		availableCount -= printedCount;
		availableInk -= printedCount;
		cout << "프린트하였습니다." << endl;
	}
}

void InkJetPrinter::show() {
	cout << model << " ," << manufacturer << " ,남은 종이 " << availableCount << "장 ,남은잉크 " << availableInk << endl;
}

void LaserPrinter::print(int pages) {
	if (availableCount - pages <= 0 || availableToner - pages <= 0) {
		cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
	}
	else {
		printedCount = pages;
		availableCount -= printedCount;
		availableToner -= printedCount;
		cout << "프린트하였습니다." << endl;
	}
}

void LaserPrinter::show() {
	cout << model << " ," << manufacturer << " ,남은 종이 " << availableCount << "장 ,남은토너 " << availableToner << endl;
}

int main() {
	InkJetPrinter* ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* laser = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);

	cout << "현재 작동중인 2대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : ";
	ink->show();
	cout << "레이저 : ";
	laser->show();

	int printer, paper;
	char ch;
	while (true) {
		cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> printer >> paper;
		switch (printer) {
		case 1: ink->print(paper); break;
		case 2: laser->print(paper); break;
		default: break;
		}
		ink->show();
		laser->show();

		cout << "게속 프린트 하시겠습니까(y/n)>>";
		cin >> ch;
		if (ch == 'n') break;
		else continue;
	}
}