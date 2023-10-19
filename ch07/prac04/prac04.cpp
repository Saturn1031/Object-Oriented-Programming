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
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ��� >> ";
	getline(cin, b);
	if (b < a) {
		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
	}
}