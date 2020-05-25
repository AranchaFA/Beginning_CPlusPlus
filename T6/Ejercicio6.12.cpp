#include <iostream>
using namespace std;

// 6.12  

/* DESCRIPCIÓN:      Cambia el signo de los elementos de un vector.
   ENTRADA:          Número entero tamaño del vector (int tam).
   ENTRADA-SALIDA:   Vector de enteros (int v[]).       
   PRECONDICIONES:   -
   VALOR DE RETORNO: El vector de entrada con el signo de sus elementos cambiado.
   
   Los vectores sólo se pueden pasar por parámetro.
   
*/

void vectornegativo(int v[], const int& tam) { // vector(en)negativo
    for (int i=0; i<tam; i++) { 
        v[i] *= (-1);;
    }
    // La función no devuelve nada (void) porque NO SE PUEDE DEVOLVER UN VECTOR.
}

// Función para mostrar el vector
void muestravector(int v[], const int& tam) {
    for (int i=0; i<tam; i++) cout << v[i] << " ";
}

    
int main () {
    int tam=5;
    int v[]={1,-2,3,4,-3};
    vectornegativo(v,tam);
  
    cout << "El vector es: ";
    muestravector(v,tam);
    
    system("PAUSE");
    return 0;
}
