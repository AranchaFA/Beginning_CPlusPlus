#include <iostream>
using namespace std;

// 6.7

/* DESCRIPCIÓN:      Suma los dígitos de un número.
   ENTRADA:          Número entero (const int x).
   SALIDA:           Número entero (int y).
   PRECONDICIONES:   -
   VALOR DE RETORNO: Suma de todos los dígitos del número introducido.
   
   La función no modificará ningún parámetro, sólo los leerá, luego los declararemos
   como parámetros formales de entrada de tipo const.
   Los pasamos por referencia por ser más eficiente.
   
*/

int sumadig(int& x, int y) {
    y=0;
    while (x>0) {
        y += x%10;
        x = (x-x%10)/10;
        // Restamos las unidades para que la división nos quede exacta
        // y no redondee el dígito correspondiente a las decenas.
    }
    return y;
}

// COMPROBAMOS

int main () {
    int x=1234;
    int y;
    
    cout << "La suma de sus dígitos es: " << sumadig(x,y);
    
    system("PAUSE");
    return 0;
}
