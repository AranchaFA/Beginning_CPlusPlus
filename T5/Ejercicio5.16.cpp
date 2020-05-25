#include <iostream>
using namespace std;

int main () {
    int m[3][3];
    
    for (int i=0; i<3; i++) {       /*  i=filas de la columna */
        for (int j=0; j<3; j++) {
            cout << "Introduzca el elemento " << i << "," << j << ": ";
            cin >> m[i][j];
        }
    }
    
    // MOSTRAR MATRIZ
    for (int i=0; i<3; i++) {       /*  i=filas de la columna */
        for (int j=0; j<3; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    // 5.16 MOSTRAR DIAGONAL
    for (int i=0, j=0; i<3 && j<3; i++, j++) {
        cout << m[i][j] << " ";
    }
    
    // 5.17 CALCULAR DETERMINANTE
    int det=(m[0][0]*m[1][1]*m[2][2])+(m[0][1]*m[1][2]*m[2][0])+(m[0][2]*m[1][0]*m[2][1]);
    cout << "Determinante de m = " << det;
    cout << endl << endl;
    
    // 5.18 MATRIZ TRASPUESTA
    for (int i=0; i<3; i++) {       /* Intercambiar posiciones m[i][j]-m[j][i] */
        for (int j=i; j<3; j++) {   // j debe empezar en la misma posición que i para no
            int copia;              //trasponer los elementos de las columnas anteriores ya traspuestos 
            copia=m[i][j];
             m[i][j]=m[j][i];
              m[j][i]=copia;
        }
    }
    // MOSTRAR MATRIZ
    for (int i=0; i<3; i++) {       
        for (int j=0; j<3; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    /* EJERCICIO 5.20 
       Comprobar si una matriz es simétrica
       (deberíamos confirmar primero que es cuadrada). */
    
    int simetria=1; // Si no es simétrica le daremos valor 0.
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (m[i][j]!=m[j][i]) simetria=0; // Si no coinciden los elementos no es simétrica.
        }
    }
    if (simetria==1) {
        cout << "La matriz es simétrica." << endl;
    }
    else {
        cout << "La matriz NO es simétrica." << endl;
    }
    cout << endl << endl << endl;
    /* EJERCICIO 5.21 
    Multiplicar dos matrices de 3*3
    (Para poder multiplicarlas nºcolumnas A= nºfilas B)*/
    int n[3][3];
    cout << "Introduzca una nueva matriz (n).";
    for (int i=0; i<3; i++) {       /*  i=filas de la columna */
        for (int j=0; j<3; j++) {
            cout << "Introduzca el elemento " << i << "," << j << ": ";
            cin >> n[i][j];
        }
    }
    // MOSTRAR MATRIZ
    for (int i=0; i<3; i++) {       
        for (int j=0; j<3; j++) {
            cout << n[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    int c[3][3];
    /* c[i][j] = m[i][0]*n[0][j] + m[i][1]*n[1][j] + m[i][2]*n[2][j]
       Los índices que se incrementan de 0 a 2 serán 'k'.*/
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            c[i][j]=0; // Tenemos que iniciarla o no la reconoce en el siguiete bucle.
            for (int k=0; k<3; k++) {
                c[i][j]+=m[i][k]*n[k][j];
            }
        }
    }
    cout << "La matriz c, resultante de multiplicar m*n, es: " << endl << endl;
    // MOSTRAR MATRIZ
    for (int i=0; i<3; i++) {       
        for (int j=0; j<3; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    

    system("PAUSE");
    return 0;
}
