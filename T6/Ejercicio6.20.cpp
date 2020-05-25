#include <iostream>
#include <string.h>
using namespace std;

// 6.16  

/* DESCRIPCIÃ“N:     Nos dice el menor de los elementos de una fila de una matriz.
   ENTRADA:          Una matriz de números (const int m[][]).
                     El tamaño: nº de filas y columnas (cons int& f, const int& c)
                     El nº de la fila a analizar (int nf);
   SALIDA:           El nº menor de la fila nf (int min)
   PRECONDICIONES:   La fila debe estar en el rango del tamaño.
   VALOR DE RETORNO: El número más pequeño de la fila.
*/

int menorfilamat (int m[], int f, int c, int nf, int& min) { 
    while (nf>(f-1)) {
        cout << "La fila pedida excede el tamaño de la matriz. Introduzcala de nuevo: " << endl;
        cin >> nf;
    }
    
    min=m[c*nf]; /* Como guardamos la matriz como un vector, con las filas una detrás de otra, 
                    el primer elemento de nf tendrá delante nf*c elementos (el número de filas
                    que tiene delante por el número de columnas (elementos) que tiene cada fila.*/
    for (int j=(c*nf); j<(c*nf+c); j++) {
        if (m[j]<min) min=m[j];
    }
    cout << min << endl; // Sale perfecto
    return min;
}

// COMPROBAMOS
    
int main () {
    int f=3, c=4;
    int nf=1;
    int min;
    int m[12]={1,2,6,4,
                 2,6,7,1,
                 1,7,3,6};

    menorfilamat(m,f,c,nf,min); // Sale perfecto
    cout << menorfilamat(m,f,c,nf,min) << endl;
    cout << min*10 << endl;
    cout << m[4] << endl; // Sale perfecto
    cout << min << endl; // Da 228, ni idea de por qué 0.o --> HAY QUE PASARLO POR PARÁMETRO! PARA QUE GUARDE EL VALOR TRAS EJECUTAR LA FUNCIÓN
    
    system("PAUSE");
    return 0;
}
