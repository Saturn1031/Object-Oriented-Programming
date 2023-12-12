#include <iostream>
using namespace std;

int main() {
    char ch;
    int cnt;

    while (true) {
        cin.get(ch);
        if (cin.eof()) 
            break;
        if (ch == '\n') 
            break;
        else if (ch == ' ')
            cnt++;
    }
    cout << cnt;
}
