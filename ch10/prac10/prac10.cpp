#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
class Nation {
    string nation;
    string capital;
public:
    Nation() {}
    void set(string nation, string capital) { this->nation = nation; this->capital = capital; }
    string getNation() { return nation; }
    string getCapital() { return capital; }
};
int main() {
    srand((unsigned)time(0));
    vector<Nation> v;
    string sNation[] = { "대한민국","일본","중국","미국","독일","캐나다","호주","오스트리아","러시아" };
    string sCapital[] = { "서울","도쿄","베이징","와싱턴","베를린","오타와","캔버라","빈","모스크바" };
    for (int i = 0; i < 9; ++i) {
        Nation n;
        v.push_back(n);
        v[i].set(sNation[i], sCapital[i]);
    }
    cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << endl;
    for (;;) {
        cout << "정보 입력 : 1, 퀴즈 : 2, 종료 : 3 >>";
        int num; cin >> num;
        if (num == 1) {
            cout << "현재" << v.size() << "개의 나라가 입력되어 있습니다." << endl;
            cout << "나라와 수도를 입력하세요(no no 이면 입력끝)" << endl;
            for (;;) {
                bool sw = false;
                cout << v.size() + 1 << ">> ";
                string nat, cap;
                cin >> nat >> cap;
                if (nat == "no" && cap == "no") {
                    break;
                }
                for (int i = 0; i < v.size(); ++i) {
                    if (v[i].getNation() == nat) {
                        cout << "alreday exists !!!" << endl;
                        sw = true;
                        break;
                    }
                }
                if (sw == false) {
                    Nation n;
                    v.push_back(n);
                    v[v.size() - 1].set(nat, cap);
                }
            }
        }
        else if (num == 2) {
            for (;;) {
                int r = rand() % v.size();
                cout << v[r].getNation() << "의 수도는?";
                string text; cin >> text;
                if (text == "exit") break;
                if (v[r].getCapital() == text) cout << "Corret !!" << endl;
                else cout << "NO !!" << endl;
            }
        }
        else if (num == 3) {
            break;
        }
        else cout << "입력 오류" << endl;
    }

}
