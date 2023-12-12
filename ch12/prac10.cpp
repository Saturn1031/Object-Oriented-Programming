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
		cout <<fsrc << "열기 오류";
		exit(0);
	}
	dest.open(fdest, ios::in | ios::binary);
	if(!src) {
		cout <<fdest << "열기 오류";
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
	cout << "비교하는 두 파일은" << "a.jpg" << "와" << "b.jpg" << "입니다" << endl;
	cout << "이 두 파일은 소스 폴더에 있어야 합니다" << endl;
	FileCompare comp("a.jpg", "b.jpg");
	if(comp.compare())
		cout << "두 파일은 같습니다." << endl;
	else
		cout << "두 파일은 같지 않습니다." << endl;
}