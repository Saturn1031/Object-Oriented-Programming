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
		cout << "words.txt" << " ���� ����" << endl;
		exit(0);
	}

	string word;
	while(getline(fin, word)) {
		wordVector.push_back(word);
	}
	cout << "... words.txt ���� �ε� �Ϸ�" << endl;
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
	cout << "�˻��� �����մϴ�. �ܾ �Է��� �ּ���." << endl;
	while(true) {
		cout << "�ܾ�>> ";
		string word;
		getline(cin, word);
		if(word == "exit")
			return;
		if(!exist(word))
			cout << word << "�ܾ� ����. �ٽ� �Է��ϼ���" << endl;
		search(word);
	}
}

int main() {
	Words w;
	w.gamerun();
}