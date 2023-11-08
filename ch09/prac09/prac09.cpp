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
		cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	}
	else {
		printedCount = pages;
		availableCount -= printedCount;
		availableInk -= printedCount;
		cout << "����Ʈ�Ͽ����ϴ�." << endl;
	}
}

void InkJetPrinter::show() {
	cout << model << " ," << manufacturer << " ,���� ���� " << availableCount << "�� ,������ũ " << availableInk << endl;
}

void LaserPrinter::print(int pages) {
	if (availableCount - pages <= 0 || availableToner - pages <= 0) {
		cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	}
	else {
		printedCount = pages;
		availableCount -= printedCount;
		availableToner -= printedCount;
		cout << "����Ʈ�Ͽ����ϴ�." << endl;
	}
}

void LaserPrinter::show() {
	cout << model << " ," << manufacturer << " ,���� ���� " << availableCount << "�� ,������� " << availableToner << endl;
}

int main() {
	InkJetPrinter* ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* laser = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);

	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : ";
	ink->show();
	cout << "������ : ";
	laser->show();

	int printer, paper;
	char ch;
	while (true) {
		cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> printer >> paper;
		switch (printer) {
		case 1: ink->print(paper); break;
		case 2: laser->print(paper); break;
		default: break;
		}
		ink->show();
		laser->show();

		cout << "�Լ� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> ch;
		if (ch == 'n') break;
		else continue;
	}
}