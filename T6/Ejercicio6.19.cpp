#include <iostream>
using namespace std;

// 6.18  

/* DESCRIPCIÃ“N:     Producto de dos matrices.
   ENTRADA:          Dos matriz de enteros (int matriz[]).
                     El tamaño de las dos matrices: nº de filas y columnas (int filas1, filas2, columnas1, columnas2)
   SALIDA:           Matriz producto (int producto[])
   PRECONDICIONES:   Las columnas de la primera deben ser igual a las filas de la segunda.
   VALOR DE RETORNO: Matriz producto. 
*/

void prodmat (int matriz1[9], int matriz2[15], int tam1, int tam2, int& producto[9]) { 
    if (filas2!=columnas1) cout << "Las matrices no se pueden multiplicar.";
    else {
        for (int i=0; i<filas1; i++) {
            for (int j=0; j<columnas2; j++) {
             matriz[fiilas1*columnas2*i+j]=matriz1[filas1*columnas1*i+j]*matriz2[filas2*columnas2*i+j*filas2];
            }
        }
    }
}

// COMPROBAMOS
    
int main () {
    int f1=3, c1=3, tam1=9;
    int f2=3, c2=5, tam2=15;
    int m1[9]={1,2,6,
               2,6,7,
               6,7,3};
    int m2[15]={1,2,3,4,5,
               5,4,3,2,1,
               2,1,1,3,2};
    int prod[9];

    prodmat(m1,m2,f1,f2,c1,c2,prod);
    for (int i=0; i<9; i++) cout << prod[i] << " " << endl;
    
    system("PAUSE");
    return 0;
}
