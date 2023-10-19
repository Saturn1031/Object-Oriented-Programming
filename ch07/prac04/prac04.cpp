#include <iostream>
#include <string>
using namespace std;

class Book {
	string name;
	int price, page;
public:
	Book(string name, int price, int page);
	friend bool operator<(string name, Book book);
	string getTitle();
};

Book::Book(string name, int price, int page) {
	this->name = name;
	this->price = price;
	this->page = page;
}

bool operator<(string name, Book book) {
	if (name < book.name) {
		return true;
	}
	return false;
}

string Book::getTitle() {
	return this->name;
}

int main() {
	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요 >> ";
	getline(cin, b);
	if (b < a) {
		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
	}
}