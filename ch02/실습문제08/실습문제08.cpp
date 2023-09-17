#include <iostream>
using namespace std;

int main()
{
	char name[5][100];
	int nameLen[5], longName;
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n>> ";
	
	for (int i = 0; i < 5; i++) {
		cin.getline(name[i], 100, ';');
	}
	
	for (int j = 0; j < 5; j++) {
		cout << j + 1 << " : " << name[j] << '\n';
	}

	for (int k = 0; k < 5; k++) {
		nameLen[k] = 0;
		for (int l = 0; name[k][l] != '\0'; l++) {
			nameLen[k]++;
		}
	}

	for (int m = 0; m < 5; m++) {
		if (nameLen[m] >= nameLen[0] && nameLen[m] >= nameLen[1]
			&& nameLen[m] >= nameLen[2] && nameLen[m] >= nameLen[3] && nameLen[m] >= nameLen[4]) {
			longName = m;
		}
	}
	
	cout << "가장 긴 이름은 " << name[longName];
	
	return 0;
}