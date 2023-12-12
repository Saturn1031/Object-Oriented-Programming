#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class SearchWords {
	ifstream fin;
	vector<string> v;
public:
	SearchWords();
	void fileRead(vector<string>& v, ifstream& fin);
	bool exist(string word);
	void search(string word);
	void run();
	~SearchWords();
};

SearchWords::SearchWords() {
	fin.open("words.txt");
	if (!fin) {
		cout << "파일 열기 실패" << endl;
		exit(1);
	}
}

void SearchWords::fileRead(vector<string>& v, ifstream& fin) {
	string line;
	while (getline(fin, line))
		v.push_back(line);
	cout << "... words.txt 파일 로딩 완료" << endl;
}

bool SearchWords::exist(string word) {
	for (int i = 0; i < v.size(); i++) {
		if (word == v[i])
			return true;
	}
	return false;
}

void SearchWords::search(string word) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i].find(word) == 0)
			cout << v[i] << endl;
	}
}

void SearchWords::run() {
	fileRead(v, fin);
	cout << "검색을 시작합니다. 단어를 입력해 주세요." << endl;
	while (true) {
		cout << "단어>> ";
		string word;
		getline(cin, word);
		if (word == "exit")
			return;
		if (!exist(word))
			cout << "발견할 수 없음" << endl;
		search(word);
	}
}

SearchWords::~SearchWords() {
	fin.close();
}

int main() {
	SearchWords a;
	a.run();
}