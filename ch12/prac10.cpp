#include <iostream>
#include <fstream>
using namespace std;

class FileCompare {
	ifstream src;
	ifstream dest;
public:
	FileCompare(const char *fsrc, const char* fdest);
	bool compare();
};

FileCompare::FileCompare(const char *fsrc, const char* fdest) {
	src.open(fsrc, ios::in | ios::binary);
	if(!src) {
		cout <<fsrc << "���� ����";
		exit(0);
	}
	dest.open(fdest, ios::in | ios::binary);
	if(!src) {
		cout <<fdest << "���� ����";
		exit(0);
	}
}

bool FileCompare::compare() {
	int s;
	while((s=src.get()) != EOF) {
		int t = dest.get();
		if(t == EOF) return false;
		else if(s != t) return false;
	}

	int t = dest.get(); 
	if(t != EOF) return false;

	return true;
}

int main() {
	cout << "���ϴ� �� ������" << "a.jpg" << "��" << "b.jpg" << "�Դϴ�" << endl;
	cout << "�� �� ������ �ҽ� ������ �־�� �մϴ�" << endl;
	FileCompare comp("a.jpg", "b.jpg");
	if(comp.compare())
		cout << "�� ������ �����ϴ�." << endl;
	else
		cout << "�� ������ ���� �ʽ��ϴ�." << endl;
}