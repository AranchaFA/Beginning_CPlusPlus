#include <iostream>
#include <string>
using namespace std;

/* 5.32

Estructura persona:
    *) Nombre
    *) Minusvalía o no (bool)
    
Programa: Metemos un vector de personas
          Nos da dos vectores nuevos: - Con minusvalía
                                      - Sin minusvalía

*/

struct persona {string nombre; bool minusv;};

int main () {
    persona v[5]={
        {"Maria", true},
        {"Pablo", false},
        {"Luisa", false},
        {"Juan", true},
        {"Pepa", false},
    };
    
    persona v1[5]; // Sin minusvalia HAY QUE ASIGNARLES UN TAMA�O AUNQUE NO SE CONOZCA
    persona v2[5]; // Con minusvalia
    int n1=0, n2=0; // tamaños de v1 y v2 respectivamente
    for (int i=0; i<5; i++){
        if (v[i].minusv==true) {
            v2[n2]=v[i];
            n2++;
        }
        else {
            v1[n1]=v[i];
            n1++;
        }
    }
    cout << endl << endl;
    for (int i=0; i<n1; i++) {
        cout << v1[i].nombre << " no tiene minusvalia." << endl;
    }
    for (int i=0; i<n2; i++) {
        cout << v2[i].nombre << " si tiene minusvalia." << endl;
    }
    
    
    system("PAUSE");
    return 0;
}
