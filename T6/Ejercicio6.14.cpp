#include <iostream>
#include <string.h>
using namespace std;

// 6.13  

/* DESCRIPCIÓN:     Guarda los números impares de un vector en otro vector.
   ENTRADA:          Vector de enteros (int v[]).
                     Tamaño del vector (int tam).
   SALIDA:           Vector de números impares (int u[]).       
   PRECONDICIONES:   -
   VALOR DE RETORNO: Un vector con los impares del vector de entrada.
   
   Los vectores sólo se pueden pasar por parámetro.
   Una función nunca puede devolver un vector, así que será un main de tipo void.
   
*/

void vectorimpares (int v[], const int& tam, int u[]) {
    int n=0; // Con esta variable iremos contabilizando los espacios ocupados en el vector u[]
    for (int i=0; i<tam; i++) {
        if (v[i]%2==1) {
            u[n]=v[i];
            n++;
        }
    }
}


// COMPROBAMOS
    
int main () {
    int v[]={1,2,3,4,5,6,7,8,9};
    int tam=9;
    int u[tam];
    
    vectorimpares(v,tam,u);
    
    cout << u[4] << " " << u[3];
    
    system("PAUSE");
    return 0;
}
