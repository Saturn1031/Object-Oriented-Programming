#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream fout;
	fout.open("song.txt");
	if(!fout) {
		cout << "song.txt 파일을 열 수 없다.";
		return 0;
	}
	int age = 21;
	char singer[] = "Kim";
	char song[] = "Yesterday";

	fout << age << '\n';
	fout << singer << endl;
	fout << song << endl;
	fout.close();
}