#include <iostream>
#include <string>
using namespace std;

// 6.2    

/* DESCRIPCIÓN:      Nos devuelve la cadena de caracteres más larga de 2.
   ENTRADA-SALIDA:   2 cadenas de caracteres (string& a, string& b).
   PRECONDICIONES:   Ninguna.
   VALOR DE RETORNO: La cadena más larga.
   
   La función no modificará ningún parámetro, sólo los leerá, luego los declararemos
   como parámetros formales de tipo const string.
   Las pasamos por referencia por ser más eficiente.
   
*/

string maslarga(const string& a, const string& b) {
    if (a.length()>b.length()) return a;
    else if (a.length()<b.length()); return b;
}


// LO COMPROBAMOS

int main () {
    string x="abcde";
    string y="abc";
    
    cout << "La más larga es: " << endl << endl;
    cout << maslarga(x,y) << endl << endl;
    
    system("PAUSE");
    return 0;
}
