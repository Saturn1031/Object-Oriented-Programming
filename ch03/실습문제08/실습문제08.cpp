#include <iostream>
#include <string>
using namespace std;

class Integer {
private:
	int num;
public:
	inline Integer(int n);
	inline Integer(string n);
	inline int get();
	inline void set(int n);
	inline int isEven();
};

inline Integer::Integer(int n) {
	num = n;
}

inline Integer::Integer(string n) {
	num = stoi(n);
}

inline int Integer::get() {
	return num;
}

inline void Integer::set(int n) {
	num = n;
}

inline int Integer::isEven() {
	if (num % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main()
{
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();

	return 0;
}