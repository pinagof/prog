#include <iostream>
using namespace std;
int main(){
   int n;
        cout << "Cuantos numeros me vas a dar\n";
        cin >> n;
        int valor[n];
    
        int i;
        i=0;
        while (i< n){
            cout << "Dame el numero "<< i <<"\n";
            cin >> valor[i];
             i++;
        }
        int j;
        j=0;
        while(j<n){
            cout << "El valor "<<j<<" es "<<valor[j]<<"\n";
            j++;
        } 
        }
        