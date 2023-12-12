#include <iostream>
#include <fstream>
using namespace std;

int *concat(int a[], int sizea , int b[], int sizeb);

int main(){
    int x[] ={1,2,3,4,5};
    int y[] ={10,20,30,40};

    try{
        int *p =concat(x,5,y,4);
        for(int n=0;n<9;n++){
            cout << p[n] << ' ';
        }
        cout << endl;
        delete [] p;
    }

    catch(int failCode){
        cout << "오류코드: " << failCode << endl;
    }
    return 0;
}

int *concat(int a[], int sizea , int b[], int sizeb){
 


    int *c = new int [sizea + sizeb];
    if(sizea <0 || sizeb <0 || a==NULL || b==NULL){
        throw -1;
    }
    for(int i=0; i<sizea ;i++){
        c[i] = a[i];
    }
    int i=0;
  
    for(int j=sizea; j<sizeb+sizea ;j++,i++){
        c[j] = b[i];
    }

    return c;
}