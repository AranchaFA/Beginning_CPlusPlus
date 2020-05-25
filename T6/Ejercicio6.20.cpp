#include <iostream>
#include <string.h>
using namespace std;

// 6.16  

/* DESCRIPCIÓN:     Nos dice el menor de los elementos de una fila de una matriz.
   ENTRADA:          Una matriz de n�meros (const int m[][]).
                     El tama�o: n� de filas y columnas (cons int& f, const int& c)
                     El n� de la fila a analizar (int nf);
   SALIDA:           El n� menor de la fila nf (int min)
   PRECONDICIONES:   La fila debe estar en el rango del tama�o.
   VALOR DE RETORNO: El n�mero m�s peque�o de la fila.
*/

int menorfilamat (int m[], int f, int c, int nf, int& min) { 
    while (nf>(f-1)) {
        cout << "La fila pedida excede el tama�o de la matriz. Introduzcala de nuevo: " << endl;
        cin >> nf;
    }
    
    min=m[c*nf]; /* Como guardamos la matriz como un vector, con las filas una detr�s de otra, 
                    el primer elemento de nf tendr� delante nf*c elementos (el n�mero de filas
                    que tiene delante por el n�mero de columnas (elementos) que tiene cada fila.*/
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
    cout << min << endl; // Da 228, ni idea de por qu� 0.o --> HAY QUE PASARLO POR PAR�METRO! PARA QUE GUARDE EL VALOR TRAS EJECUTAR LA FUNCI�N
    
    system("PAUSE");
    return 0;
}
