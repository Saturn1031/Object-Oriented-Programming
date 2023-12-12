#include <iostream>
#include <fstream>
using namespace std;

int main(){
    const char*srcFile = "c:\\temp\\desert.jpg";
    const char*destFile = "c:\\temp\\copydesert.jpg";


    try{
        ifstream frsc(srcFile,ios::in|ios::binary);

        if(!frsc){
        cout << srcFile << "�������" << endl;
            throw 0;
        }

        ofstream fdest(destFile, ios::out|ios::binary);
        if(!fdest){
            cout <<destFile<< "���� ����" << endl;
            throw 0;
        }

        int c;
        while ((c=frsc.get())!=EOF)
        {
            fdest.put(c);
        }
        cout << srcFile << "�� " << destFile << "�� ����Ϸ�" << endl;
        frsc.close();
        fdest.close();

    }
    catch(int x){
        cout <<  "ERROR CODE: " << x << endl;
    }

}