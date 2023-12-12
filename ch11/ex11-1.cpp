#include <iostream>
using namespace std;

int main() {
	cout.put('H');
	cout.put('i');
	cout.put(33);
	cout.put('\n');
	
	// "C++ "을 출력한다.
	cout.put('C').put('+').put('+').put(' ');

	char str[]="I love programming";
	cout.write(str, 6);
}