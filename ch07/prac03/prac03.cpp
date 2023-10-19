#include <iostream>
#include <string>
using namespace std;

class Book {
	string name;
	int price, page;
public:
	Book(string name, int price, int page);
	bool operator!();
};

Book::Book(string name, int price, int page) {
	this->name = name;
	this->price = price;
	this->page = page;
}

bool Book::operator!() {
	if (this->price == 0) {
		return true;
	}
	return false;
}

int main() {
	Book book("∫≠∑ËΩ√¿Â", 0, 50);
	if (!book) cout << "∞¯¬•¥Ÿ" << endl;
}