#include <iostream>
using namespace std;

// 6.10  

/* DESCRIPCIÓN:      Suma los elementos de un vector.
   ENTRADA:          Vector de enteros (int v[]).
                     Número entero tamaño del vector (int tam).
   SALIDA:           Un entero (int x).           
   PRECONDICIONES:   -
   VALOR DE RETORNO: Suma de los elementos del vector.
   
   Los vectores sólo se pueden pasar por parámetro.
   
*/

int sumatoriovector(int v[], int tam, int suma) {
    suma=0;
    for (int i=0; i<tam; i++) {
       suma += v[i]; 
    }
    return suma;
}

int main () {
    int tam=3;
    int v[]= {5,5,9};
    int suma;
    
    cout << sumatoriovector(v,tam,suma);
    
    system("PAUSE");
    return 0;
}
