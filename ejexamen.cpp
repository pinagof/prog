#include <iostream>
using namespace std;

int main(){
    int num,i,j;
    cout <<"Dame un numero\n";
    cin >> num;
    if(num%2==0){
        cout<<"Si "<<num<<"\n";
    }
    for (int j=2;j<num;j+=2){
        cout<<j<<"\n";
    }
}