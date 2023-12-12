#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Words {
	ifstream fin;
	vector<string> wordVector;
	bool exist(string word);
	void search(string word);
public:
	Words();
	void gamerun();
	~Words();
};

Words::Words() {
	fin.open("words.txt");
	if(!fin) {
		cout << "words.txt" << " 열기 실패" << endl;
		exit(0);
	}

	string word;
	while(getline(fin, word)) {
		wordVector.push_back(word);
	}
	cout << "... words.txt 파일 로딩 완료" << endl;
}

bool Words::exist(string word) {
	for(int i=0; i<wordVector.size(); i++) {
		if(word == wordVector[i])
			return true;
	}
	return false;
}

void Words::search(string word) {
	int length = word.length();
	for(int i=0; i<wordVector.size(); i++) {
		if(wordVector[i].size() == length) {
			if(word == wordVector[i])
				continue;

			for(int j=0; j<length; j++) {
				string originalTmp = word;
				string secondaryTmp = wordVector[i];
				originalTmp[j] = secondaryTmp[j] = '*';
				if(originalTmp == secondaryTmp) {
					cout << wordVector[i] << endl;
				}
			}
		}
	}
}

Words::~Words() {
	fin.close();
}

void Words::gamerun() {
	cout << "검색을 시작합니다. 단어를 입력해 주세요." << endl;
	while(true) {
		cout << "단어>> ";
		string word;
		getline(cin, word);
		if(word == "exit")
			return;
		if(!exist(word))
			cout << word << "단어 없음. 다시 입력하세요" << endl;
		search(word);
	}
}

int main() {
	Words w;
	w.gamerun();
}