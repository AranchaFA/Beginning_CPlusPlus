#include <iostream>
using namespace std;

// 6.10  

/* DESCRIPCIÓN:      Dice si un vector está ordenado de forma creciente o no.
   ENTRADA:          Vector de enteros (int v[]).
                     Número entero tamaño del vector (int tam).
   SALIDA:           Booleano (bool creciente).           
   PRECONDICIONES:   -
   VALOR DE RETORNO: True (ordenado creciente) o false (no ordenado creciente).
   
   Los vectores sólo se pueden pasar por parámetro.
   
*/

bool ordenvectcrec(int v[], int tam, bool creciente) { // orden(ado)vect(or)crec(iente)
    creciente=true;
    for (int i=0; i<(tam-1) && creciente==true; i++) { // tam-1 para que no compare el último con la casilla siguiente de la RAM
        if (v[i]>v[i+1]) creciente=false;
    }
    return creciente;
}

int main () {
    int tam=5;
    int v[]={1,2,3,4,3};
    bool m;
    
    cout << "El vector esta ordenado de forma creciente?: " << boolalpha << ordenvectcrec(v,tam,m);
    
    system("PAUSE");
    return 0;
}
