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
	cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
	for (int i = 0; debugArr[i][0] != "\0"; i++) {
		cout << debugArr[i][0] << ": " << debugArr[i][1] << endl;
	}
}

void Trace::print(string tag) {
	cout << "----- " << tag << "태그의 Trace 정보를 출력합니다. ----- " << endl;
	for (int i = 0; debugArr[i][0] != "\0"; i++) {
		if (debugArr[i][0] == tag) {
			cout << debugArr[i][0] << ": " << debugArr[i][1] << endl;
		}
	}
}

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요 >> ";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

int main() {
	Trace::put("main()", "프로그램 시작합니다");
	f();
	Trace::put("main()", "종료");

	Trace::print("f()");
	Trace::print();
}