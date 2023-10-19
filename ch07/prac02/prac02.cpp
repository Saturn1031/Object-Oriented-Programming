#include <iostream>
#include <string>
using namespace std;

class Book {
	string name;
	int price, page;
public:
	Book(string name, int price, int page);
	friend bool operator==(Book book, int price);
	friend bool operator==(Book book, string name);
	friend bool operator==(Book book1, Book book2);
};

Book::Book(string name, int price, int page) {
	this->name = name;
	this->price = price;
	this->page = page;
}

bool operator==(Book book, int price) {
	if (book.price == price) {
		return true;
	}
	return false;
}

bool operator==(Book book, string name) {
	if (book.name == name) {
		return true;
	}
	return false;
}

bool operator==(Book book1, Book book2) {
	if (book1.name == book2.name && book1.price == book2.price && book1.page == book2.page) {
		return true;
	}
	return false;
}

int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;
}