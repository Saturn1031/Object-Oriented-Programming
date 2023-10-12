#include <iostream>
#include <string>
using namespace std;

class Trace {
	static string debugArr[100][2];
public:
	static void put(string tag, string debugInfo);
	static void print();
	static void print(string tag);
};

string Trace::debugArr[100][2] = { "\0" };

void Trace::put(string tag, string debugInfo) {
	for (int i = 0; i < 100; i++) {
		if (debugArr[i][0] == "\0") {
			debugArr[i][0] = tag;
			debugArr[i][1] = debugInfo;
			return;
		}
	}
}

void Trace::print() {
	cout << "----- ��� Trace ������ ����մϴ�. -----" << endl;
	for (int i = 0; debugArr[i][0] != "\0"; i++) {
		cout << debugArr[i][0] << ": " << debugArr[i][1] << endl;
	}
}

void Trace::print(string tag) {
	cout << "----- " << tag << "�±��� Trace ������ ����մϴ�. ----- " << endl;
	for (int i = 0; debugArr[i][0] != "\0"; i++) {
		if (debugArr[i][0] == tag) {
			cout << debugArr[i][0] << ": " << debugArr[i][1] << endl;
		}
	}
}

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ��� >> ";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}

int main() {
	Trace::put("main()", "���α׷� �����մϴ�");
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();
}