#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"dime un numero ";
    cin >> n;
    if(n>=40){
        cout <<"XL";
        n=n-40;
    }if(n>=10)
    for (int i=0; i<n; i=i+10){
        cout <<"X";
        n=n-10;
    } 
    if (n>=9){
        cout <<"IX";
        n=n-9;
    }
    
    if(n=5){
        cout<<"V";
        n=n-5;
    } 
    if(n>5){
        for (int k=0; k<n; k++){
            cout <<"I";
            n=n-1;
    
        }
    }
}
