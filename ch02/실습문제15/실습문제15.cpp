#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, res;
	char n1[10], n2[10];
	string cal;
	cout << "? ";
	getline(cin, cal);

	for (i = 0; cal[i] != ' '; i++) {
		n1[i] = cal[i];
	}

	for (int j = i + 3; j < cal.length(); j++) {
		n2[j - i - 3] = cal[j];
	}
	
	if (cal[i + 1] == '+') {
		res = atoi(n1) + atoi(n2);
	}
	else if (cal[i + 1] == '-') {
		res = atoi(n1) - atoi(n2);
	}
	else if (cal[i + 1] == '*') {
		res = atoi(n1) * atoi(n2);
	}
	else if (cal[i + 1] == '/') {
		res = atoi(n1) / atoi(n2);
	}
	else if (cal[i + 1] == '%') {
		res = atoi(n1) % atoi(n2);
	}

	cout << cal << " = " << res << endl;
	
	return 0;
}