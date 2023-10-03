#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string str;
public:
	Histogram(string str);
	void put(string str);
	void putc(char c);
	void print();
};

Histogram::Histogram(string str) {
	this->str = str;
}
void Histogram::put(string str) {
	this->str += str;
}
void Histogram::putc(char c) {
	this->str += c;
}
void Histogram::print() {
	int alpha[26] = { 0 };
	cout << str << endl << endl;
	cout << "ÃÑ ¾ËÆÄºª ¼ö " << str.length() << endl << endl;

	for (int i = 0; i < str.length(); i++) {
		if (isalpha(str[i])) {
			char c = tolower(str[i]);
			alpha[c - 'a']++;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << (char)('a' + i) << " (" << alpha[i] << ")\t: ";
		for (int j = 0; j < alpha[i]; j++) {
			cout << '*';
		}
		cout << endl;
	}
}

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, \n");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}