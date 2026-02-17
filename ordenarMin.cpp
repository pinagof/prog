#include <iostream>
#include <vector>
using namespace std;
int main(){
   int n;
   int temp;
    cout << "Cuantos numeros me vas a dar y quieres ordenar\n";
    cin >> n;
    std::vector<int> vl(n);
    
    for (int i=0; i<n; i++){
        cout << "Dame el numero "<< i <<"\n";
            cin >> vl[i];
    }

    // mostrar los números ingresados originalmente
    cout << "\nNumeros que me diste anteriormente:\n";
    for (int k = 0; k < n; k++){
        cout << vl[k] << " ";
    }
    cout << "\n";

    int menor, psmenor, mayor, psmayor;
int i, j, k;
    for (int i=0; i<n; i++){
        // definimos el intervalo a usar para la busqqueda (i->n) y luego pasaremos el valor encontrado a la posicion inicial
        menor=vl[i];psmenor=i;
        //Buscamos el menor del intervalo definido
        for (int j=i+1; j<n; j++){
            if (vl[j]<menor){
                menor=vl[j]; psmenor=j;
            }
        }
        // Pasamos el valor menor en el intervalo a la posicion "i"
        temp = vl[i];
        vl[i] = vl[psmenor];
        vl[psmenor] = temp;
    }

    // mostrar resultados
    cout << "\nNumeros ordenados:\n";
    for (int k = 0; k < n; k++){
        cout << vl[k] << "\n";
    }
 
}
    