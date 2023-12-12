#include <iostream>
using namespace std;

char CheckScore(int score);

int main(int argc, const char* argv[]) {
    int score;
    try {
        cout << "Score>>";
        cin >> score;
        cout << CheckScore(score) << endl;
    }

    catch (const char* s) {
        cout << s << endl;
    }
}

char CheckScore(int score) {
    if (score >= 90 && score <= 100)
        return 'A';
    else if (score >= 80 && score < 90)
        return 'B';
    else if (score >= 70 && score < 80)
        return 'C';
    else if (score >= 60 && score < 70)
        return 'D';
    else if (score < 60)
        return 'F';
    else
        throw "Error";
}