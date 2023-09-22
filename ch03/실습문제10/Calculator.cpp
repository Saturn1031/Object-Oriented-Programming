#include <iostream>
using namespace std;

#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"

int main()
{
	int x, y;
	char cal;
	
	while (true) {
		cout << "두 정수와 연산자를 입력하세요 >> ";
		cin >> x >> y >> cal;

		if (cal == '+') {
			Add a;
			a.setValue(x, y);
			cout << a.calculator() << endl;
		}
		else if (cal == '-') {
			Sub s;
			s.setValue(x, y);
			cout << s.calculator() << endl;
		}
		else if (cal == '*') {
			Mul m;
			m.setValue(x, y);
			cout << m.calculator() << endl;
		}
		else if (cal == '/') {
			Div d;
			d.setValue(x, y);
			cout << d.calculator() << endl;
		}
	}

	return 0;
}