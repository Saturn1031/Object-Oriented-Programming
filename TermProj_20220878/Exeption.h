#ifndef EXEPTION
#define EXEPTION
#include <string>
using namespace std;

class Exeption {
	string errMsg1 = "유효한 세 숫자가 아닙니다. 다시 입력해주세요.";
	string errMsg2 = "유효한 메뉴 숫자가 아닙니다. 다시 입력해주세요.";
	string errMsg3 = "입력한 세 숫자 중 중복된 숫자가 존재합니다. 다시 입력해주세요.";
public:
	bool isValidNum(int* n);
	bool isValidGameNum(int n);
	bool isPrimaryPcNum(int n1, int n2, int n3);
};

#endif // !EXEPTION
