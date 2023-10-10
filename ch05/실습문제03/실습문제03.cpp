#include <iostream>
#include <string>
using namespace std;

void combine(string& str1, string& str2, string& str3);

int main() {
	string text1("I love you"), text2("very much");
	string text3;
	combine(text1, text2, text3);
	cout << text3;
}

void combine(string& str1, string& str2, string& str3) {
	str3 = str1 + " " + str2;
}