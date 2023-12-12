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
		cout << "���� ���� ����" << endl;
		exit(1);
	}
}

void SearchWords::fileRead(vector<string>& v, ifstream& fin) {
	string line;
	while (getline(fin, line))
		v.push_back(line);
	cout << "... words.txt ���� �ε� �Ϸ�" << endl;
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
	cout << "�˻��� �����մϴ�. �ܾ �Է��� �ּ���." << endl;
	while (true) {
		cout << "�ܾ�>> ";
		string word;
		getline(cin, word);
		if (word == "exit")
			return;
		if (!exist(word))
			cout << "�߰��� �� ����" << endl;
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