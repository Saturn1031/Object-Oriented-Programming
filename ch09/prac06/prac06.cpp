#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};

class IntStack :public AbstractStack {
	int valSize;
	int stack[10];
public:
	IntStack() { valSize = 0; }
	virtual bool push(int n);
	virtual bool pop(int& n);
	virtual int size();
};

bool IntStack::push(int n) {
	if (valSize >= 10) {
		return false;
	}
	stack[valSize] = n;
	valSize++;
	return true;
}

bool IntStack::pop(int& n) {
	if (valSize <= 0) {
		return false;
	}
	n = stack[valSize - 1];
	valSize--;
	return true;
}

int IntStack::size() {
	return valSize;
}

int main() {
	IntStack stack;

	int i = 0;
	while (stack.push(10 * i)) {
		i++;
		cout << "stack에 " << stack.size() << "개 있음" << endl;
	}
	
	int n;
	while (stack.pop(n)) {
		cout << "pop: " << n << endl;
		cout << "stack에 " << stack.size() << "개 있음" << endl;
	}
}