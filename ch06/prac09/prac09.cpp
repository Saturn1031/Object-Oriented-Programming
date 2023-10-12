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
	cout << "********** �Խ����Դϴ�. **********" << endl;

	for (int i = 0; board[i] != ""; i++) {
		cout << i << ": " << board[i] << endl;
	}
}

int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}