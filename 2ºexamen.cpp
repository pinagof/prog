#include <iostream>
using namespace std;

int multiplica (int a,int b){
    a=a+2;
    b=b-2;
    return a*b;
}

int main(){
    int a,b,i;
    i=5;
    a=2;
    b=3;
    cout << multiplica(a,b);
    cout << "\n"<< a*b <<"\n";
}