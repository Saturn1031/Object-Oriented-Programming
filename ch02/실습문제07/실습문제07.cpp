#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char answer[100];
	
	while (strcmp(answer, "yes") != 0) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ��� >> ";
		cin.getline(answer, 100);
	}
	
	cout << "�����մϴ�...";

	return 0;
}