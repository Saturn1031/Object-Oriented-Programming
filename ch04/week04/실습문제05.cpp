#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	string str;
	srand((unsigned)time(0));
	while (true) {
		cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)" << endl << ">> ";
		getline(cin, str);
		if (str == "exit") {
			break;
		}
		string randChar;
		randChar = (char)('a' + rand() % 26);
		int randIndex = rand() % str.length();
		str.replace(randIndex, 1, randChar);
		
		cout << str << endl;
	}
	
}