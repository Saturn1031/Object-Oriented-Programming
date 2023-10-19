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
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
	if (a == b) cout << "두 책이 같은 책입니다." << endl;
}