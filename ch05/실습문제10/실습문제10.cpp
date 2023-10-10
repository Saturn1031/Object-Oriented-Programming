#include <iostream>
#include <string>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }
	void print() { cout << text << endl; }
};

Buffer& append(Buffer& buf, string str);

int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();
}

Buffer& append(Buffer& buf, string str) {
	buf.add(str);
	return buf;
}