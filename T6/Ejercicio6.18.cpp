#include <iostream>
using namespace std;

// 6.18  

/* DESCRIPCIÓN:     Nos dice si una matriz es sim�trica.
   ENTRADA:          Una matriz de n�meros (const int matriz[][]).
                     El tama�o: n� de filas y columnas (cons int& filas, const int& columnas)
   SALIDA:           Booleano (bool simetria)
   PRECONDICIONES:   La matriz debe ser cuadrada.
   VALOR DE RETORNO: True (sim�trica) o False (asim�trica).
*/

bool matsim (int matriz[][3], int filas, int columnas, bool& simetria) { 
    simetria=true;
    if (filas!=columnas) simetria=false;
    else {
        for (int i=0; i<filas; i++) {
            for (int j=0; j<columnas; j++) {
             if (matriz[i][j]!=matriz[j][i]) simetria=false;   
            }
        }
    }
    return simetria;
}

// COMPROBAMOS
    
int main () {
    int f=3, c=3;
    bool sim;
    int m[3][3]={1,2,6,
               2,6,7,
               6,7,3};

    matsim(m,f,c,sim);
    cout << boolalpha << sim <<endl;
    cout << boolalpha << matsim(m,f,c,sim) << endl;
    
    system("PAUSE");
    return 0;
}
