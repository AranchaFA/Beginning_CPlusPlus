#include <iostream>
#include <string.h>
using namespace std;

// 6.13  

/* DESCRIPCIÓN:      Le damos un número n y nos devuelve un vector con los n primeros números perfectos.
                     Son números perfectos los que son iguales a la suma de sus divisores (6=1+2+3, 28=1+2+4+7+14,...)
   ENTRADA:          Número entero (const int& n).
   SALIDA:           Vector de números perfectos en [1,n) (int v[]).       
   PRECONDICIONES:   -
   VALOR DE RETORNO: Un vector con los números perfectos de 1 hasta n.
   
   Los vectores sólo se pueden pasar por parámetro.
   Una función nunca puede devolver un vector, así que será un main de tipo void.
   
*/

void numperfectos (const int& n, int v[], int& tamfinal) { // tamfinal es el tamaño definitivo del vector creado
    tamfinal=n;                                            // porque n EST� DECLARADA COMO CONSTANTE
    v[n];
    int pos=0; // Contabilizaremos las posiciones de los elementos en v[].
    for (int i=0; i<n; i++) {
        int suma=0; // Suma de los divisores del número i.
        for (int j=1; j<i; j++) {
            if (i%j==0)  suma += j;
        }
        if (i==suma) {
            v[pos]=i;
            pos++;
        }
         else tamfinal--;  /* Si el número no es perfecto, restamos 1 al tamaño del vector. Si no al 
                    mostrarlo mostrará los valores "raros" de los espacios de memoria vacíos. */
        }
}
/* La funci�n debe devolver la variable tamfinal para poder luego mostrar correctamente el vector. Si no
   hay que mostrarlo desde 0 hasta n y salen los espacios finales "vac�os" de memoria. */

void muestravector (int v[], const int& tam) {
    for (int i=0; i<tam; i++) {
        cout << v[i] << " ";
    }
}


// COMPROBAMOS
    
int main () {
    int n=10;
    int v[n];
    int tam;
    
    numperfectos(n,v,tam);
    
    muestravector(v,tam);
    
    system("PAUSE");
    return 0;
}
