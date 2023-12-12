#include <iostream>
#include <fstream>
using namespace std;

int main(){
    const char*srcFile = "c:\\temp\\desert.jpg";
    const char*destFile = "c:\\temp\\copydesert.jpg";


    try{
        ifstream frsc(srcFile,ios::in|ios::binary);

        if(!frsc){
        cout << srcFile << "열기오류" << endl;
            throw 0;
        }

        ofstream fdest(destFile, ios::out|ios::binary);
        if(!fdest){
            cout <<destFile<< "열기 오류" << endl;
            throw 0;
        }

        int c;
        while ((c=frsc.get())!=EOF)
        {
            fdest.put(c);
        }
        cout << srcFile << "을 " << destFile << "로 복사완료" << endl;
        frsc.close();
        fdest.close();

    }
    catch(int x){
        cout <<  "ERROR CODE: " << x << endl;
    }

}