#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    double sum = 0;
    while (true) {
        int tmp;
        cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
        cin >> tmp;
        if (!tmp) break;
        v.push_back(tmp); 
        for (int i = 0; i < v.size(); i++)
            cout << v.at(i) << ' ';
        cout << endl;
        sum += tmp;
        cout << "��� = " << sum / v.size() << endl;
    }
}
