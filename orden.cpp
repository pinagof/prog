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
    int menor, psmenor, mayor, psmayor;

    for (int i=0; i<n; i++){
        menor=vl[i];psmenor=i;
        for (int j=i+1; j<n; j++){
            if (vl[j]<menor){
                menor=vl[j]; psmenor=j;
            }
        }
    }
    int temp;
    vl[i]=menor;
    vl[psmenor]=temp;


    for (int k=0; k<n; k++){
        cout << vl[k] << " ";
    }
 

    