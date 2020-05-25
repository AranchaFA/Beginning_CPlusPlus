#include <iostream>
#include <string.h>
using namespace std;

// 6.8  

/* DESCRIPCIÓN:      Nos dice cuál es la cadena más larga y más corta de dos.
   ENTRADA:          Dos cadenas de caracteres (string a, string b).
   SALIDA:           Cout << mostrando la más larga y la más corta (función void).
   PRECONDICIONES:   -
   VALOR DE RETORNO: Saca por pantalla ambas cadenas especificando cuál es cuál.
   
   La función no modificará ningún parámetro, sólo los leerá, luego los declararemos
   como parámetros formales de entrada de tipo const.
   Las pasamos por referencia por ser especialmente eficiente al ser cadenas string.
   
*/

void cadmaxmin(const string& a, const string& b) {
    if (a.length()>b.length()) cout << "La cadena más larga es: '" << a << "'" << endl << "y la más corta: '" << b << "'";
    else if (a.length()<b.length()) cout << "La cadena más larga es: '" << b << "'" << endl << "y la más corta: '" << a << "'";
    else cout << "Las dos cadena: '" << a << "' y: '" << b << "' son igual de largas";
}

int main () {
    string a="tururu";
    string b="tururu";
    
    cadmaxmin(a,b);
    
    system("PAUSE");
    return 0;
}
