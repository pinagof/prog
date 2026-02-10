#include <iostream>
defining int float
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
    int mayor = valor[0];
    int menor = valor[0];
    int psmayor,psmenor;
        while (j<n){
                if (valor[j] > mayor){mayor = valor[j];psmayor = j;}
                if (valor[j] < menor){menor = valor[j];psmenor = j;}
            j++;
    }      

    cout << "El mayor es: " << mayor << " en la posicion: " << psmayor << "\n";
    cout << "El menor es: " << menor << " en la posicion: " << psmenor << "\n";
    int sum=0;  
    int k;
    k=0;
    while (k<n){
        sum += valor[k];
        k++;
    }  
    cout << "la media es: " << (double)sum/n  << "\n";
}
        