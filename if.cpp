#include <iostream>
using namespace std;
void p1(void) {
     int i;
     i=0;
     while (i<6)
     {
         cout << "Hello, Fran!" << endl;
         i++;
     }
    int e;
    e=0;
    while (e<1299)
    {
        cout << "Eres un maquina, Fran!" << endl;
        e++;
    }
}
void p2(void) {
    int a;
    a=0;
    while (a<728)
    {
        cout << "Podrias ayudar mas en casa" << endl;
        a++;
    } 
}
void p3(void) {
    int o;
    o=0;
    while (o<15000)
    {
        cout << "Eres un maquina, una fiera, un mastodonte" << endl;
        o++;
    }
}

int main() {
    cout << "Buenas, elige una opción: alabar, solicitar o subir autoestima" << endl;
    string option;
    getline(cin, option);
    if (option == "alabar") {
        p1();
    }
    if (option == "solicitar") {
        p2();
    }
    if (option == "subir autoestima") {
        p3();
    }
    return 0;
}
