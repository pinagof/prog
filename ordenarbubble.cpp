#include <iostream>
using namespace std;
int main(){
   int n;
    cout << "Cuantos numeros me vas a dar y quieres ordenar\n";
    cin >> n;
    int vl[n];
    for (int i=0; i<n; i++){
        cout << "Dame el numero "<< i <<"\n";
            cin >> vl[i];
    }
    bool cambio;
    int temp;
    do{
        cambio=false;
        for (int i=0; i<n-1; i++){
            if (vl[i]>vl[i+1]){
                temp=vl[i];
                vl[i]=vl[i+1];
                vl[i+1]=temp;
                cambio=true;
            }
        }
    }while(cambio);

    // mostrar resultados
    cout << "\nNumeros ordenados:\n";
    for (int k = 0; k < n; k++){
        cout << vl[k] << "\n";
    }

}
    