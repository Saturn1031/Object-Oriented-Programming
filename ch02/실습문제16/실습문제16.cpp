#include <iostream>
using namespace std;

int main()
{
	char str[10000];
	int engNum[26] = { 0 }, sum = 0;

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n";
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
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
	
	cout << "�� ���ĺ� �� " << sum << "\n\n";
	
	for (int l = 0; l < 26; l++) {
		cout << (char)('a' + l) << " (" << engNum[l] << ")\t\t: ";
		for (int m = 0; m < engNum[l]; m++) {
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}