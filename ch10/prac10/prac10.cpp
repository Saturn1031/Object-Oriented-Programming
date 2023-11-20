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
    string sNation[] = { "���ѹα�","�Ϻ�","�߱�","�̱�","����","ĳ����","ȣ��","����Ʈ����","���þ�" };
    string sCapital[] = { "����","����","����¡","�ͽ���","������","��Ÿ��","ĵ����","��","��ũ��" };
    for (int i = 0; i < 9; ++i) {
        Nation n;
        v.push_back(n);
        v[i].set(sNation[i], sCapital[i]);
    }
    cout << "***** ������ ���� ���߱� ������ �����մϴ�. *****" << endl;
    for (;;) {
        cout << "���� �Է� : 1, ���� : 2, ���� : 3 >>";
        int num; cin >> num;
        if (num == 1) {
            cout << "����" << v.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�." << endl;
            cout << "����� ������ �Է��ϼ���(no no �̸� �Է³�)" << endl;
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
                cout << v[r].getNation() << "�� ������?";
                string text; cin >> text;
                if (text == "exit") break;
                if (v[r].getCapital() == text) cout << "Corret !!" << endl;
                else cout << "NO !!" << endl;
            }
        }
        else if (num == 3) {
            break;
        }
        else cout << "�Է� ����" << endl;
    }

}
