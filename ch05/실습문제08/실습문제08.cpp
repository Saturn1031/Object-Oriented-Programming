#include <iostream>
using namespace std;

class MyIntStack {
	int *p;
	int size;
	int tos;
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s);
	~MyIntStack();
	bool push(int n);
	bool pop(int& n);
};

MyIntStack::MyIntStack(int size) {
	p = new int[size];
	this->size = size;
	tos = -1;
}

MyIntStack::MyIntStack(const MyIntStack& s) {
	p = new int[s.size];
	this->size = s.size;
	tos = s.tos;
}

MyIntStack::~MyIntStack() {
	delete[] p;
}

bool MyIntStack::push(int n) {
	if (tos >= size - 1) {
		return false;
	}
	else {
		p[++tos] = n;
		return true;
	}
}
bool MyIntStack::pop(int& n) {
	if (tos <= -1) {
		return false;
	}
	else {
		n = p[tos];
		p[tos--] = NULL;
		return true;
	}
}

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}