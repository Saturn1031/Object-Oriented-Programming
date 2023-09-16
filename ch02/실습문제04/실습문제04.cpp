#include <iostream>
using namespace std;

int main()
{
	double a, b, c, d, e;

	cout << "5 개의 실수를 입력하라 >> ";
	cin >> a >> b >> c >> d >> e;
	cout << "제일 큰 수 = ";

	if (a >= b && a >= c && a >= d && a >= e) {
		cout << a;
	}
	else if (b >= a && b >= c && b >= d && b >= e) {
		cout << b;
	}
	else if (c >= a && c >= b && c >= d && c >= e) {
		cout << c;
	}
	else if (d >= a && d >= b && d >= c && d >= e) {
		cout << d;
	}
	else {
		cout << e;
	}

	return 0;
}