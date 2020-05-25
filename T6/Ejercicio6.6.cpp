#include <iostream>
using namespace std;

// 6.6

/* DESCRIPCIÓN:      Nos dice si un entero positivo es primo.
   ENTRADA:          Número entero (const int x).
   SALIDA:           Booleano que nos diga si es primo o no (bool m).
   PRECONDICIONES:   Número positivo (>2, el 1 no cuenta).
   VALOR DE RETORNO: True (primo) o False (no primo).
   
   La función no modificará ningún parámetro, sólo los leerá, luego los declararemos
   como parámetros formales de entrada de tipo const.
   Las pasamos por referencia por ser más eficiente.
   
*/

bool primo (const int& x, bool m) {
    m=true;
    for (int i=2; i<x; i++) {
        if (x%i==0) m=false;
    }
    return m;
}

// COMPROBAMOS

int main () {
    int x=13;
    int y=12;
    bool m;
    
    cout << "El número " << x << " es primo? " << boolalpha << primo(x,m) << endl;
    cout << "El número " << y << " es primo? " << boolalpha << primo(y,m) << endl;
    
    
    
    system("PAUSE");
    return 0;
}