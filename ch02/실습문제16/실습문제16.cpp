#include <iostream>
using namespace std;

int main()
{
	char str[10000];
	int engNum[26] = { 0 }, sum = 0;

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
	cin.getline(str, 10000, ';');

	for (int i = 0; str[i] != '\0'; i++) {
		str[i] = tolower(str[i]);
		for (char j = 'a'; j <= 'z'; j++) {
			if (str[i] == j) {
				engNum[j - 'a']++;
				break;
			}
		}
	}

	for (int k = 0; k < 26; k++) {
		sum += engNum[k];
	}
	
	cout << "총 알파벳 수 " << sum << "\n\n";
	
	for (int l = 0; l < 26; l++) {
		cout << (char)('a' + l) << " (" << engNum[l] << ")\t\t: ";
		for (int m = 0; m < engNum[l]; m++) {
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}