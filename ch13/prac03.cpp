#include <iostream>
#include <fstream>
using namespace std;

int get();

int main(){
    int num1,num2;
    while (1)
    {
        try{
            cout << "0~9 사이의 정수입력 >>";
            num1= get();

            cout << "0~9 사이의 정수입력 >>";
            num2= get();

            cout << num1*num2<< endl;
        }
        
        catch(const char *s){
            cout <<s<< endl;
        }
    }

}

int get()  {
    const char *str = "ERROR: 예외 발생 계산할수 없음";
    int temp = 0;
    cin >> temp;    
    if (temp < 0 || 9 < temp)
        throw str;
    return temp;
}