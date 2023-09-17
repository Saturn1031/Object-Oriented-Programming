#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char answer[100];
	
	while (strcmp(answer, "yes") != 0) {
		cout << "종료하고 싶으면 yes를 입력하세요 >> ";
		cin.getline(answer, 100);
	}
	
	cout << "종료합니다...";

	return 0;
}