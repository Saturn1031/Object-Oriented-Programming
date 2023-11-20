#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    double sum = 0;
    while (true) {
        int tmp;
        cout << "정수를 입력하세요(0을 입력하면 종료)>>";
        cin >> tmp;
        if (!tmp) break;
        v.push_back(tmp); 
        for (int i = 0; i < v.size(); i++)
            cout << v.at(i) << ' ';
        cout << endl;
        sum += tmp;
        cout << "평균 = " << sum / v.size() << endl;
    }
}
