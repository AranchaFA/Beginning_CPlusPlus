#include <iostream>
using namespace std;

/* 6.1    Función: - Entrada: parámetro real
            - Salida: su valor absoluto
*/

/* DESCRIPCIÓN:      Nos devuelve el valor absoluto de un número real.
   ENTRADA-SALIDA:   Un número real (double& x) por referencia.
   PRECONDICIONES:   Ninguna.
   VALOR DE RETORNO: Valor absoluto de x.
   
*/

double valorabs(double& x) {
    if (x<0) return (-x);
    else return x;
}

int main () {
    double a=5, b=-5;
    cout << "Valor absoluto de " << valorabs(a) << endl;
    cout << "Valor absoluto de " << valorabs(b) << endl;
    
    system("PAUSE");
    return 0;
}
