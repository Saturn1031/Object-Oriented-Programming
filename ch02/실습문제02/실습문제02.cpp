#include <iostream>
using namespace std;

int main()
{
	for (int b = 1; b < 10; b++) {
		for (int a = 1; a < 10; a++) {
			cout << a << 'x' << b << '=' << a * b << '\t';
		}
		cout << '\n';
	}

	return 0;
}