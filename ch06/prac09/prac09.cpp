#include <iostream>
#include <string>
using namespace std;

class Board {
	static string board[4];
	static int postPtr;
public:
	static void add(string post);
	static void print();
};

string Board::board[4] = { "" };
int Board::postPtr = 0;

void Board::add(string post) {
	if (postPtr < 3) {
		board[postPtr] = post;
		postPtr++;
	}
}

void Board::print() {
	cout << "********** 게시판입니다. **********" << endl;

	for (int i = 0; board[i] != ""; i++) {
		cout << i << ": " << board[i] << endl;
	}
}

int main() {
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
}