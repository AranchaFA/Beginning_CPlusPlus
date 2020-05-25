#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main () {
    /* 5.26 - 5.27
       Detectar si una cadena de caracteres CON ESPACIOS es un palíndromo
       (una frase "capicúa")*/
    
    string frase;
    cout << "Introduzca una frase (sin mayusculas, tildes, ni signos de puntuación): " << endl;
    getline (cin >> ws, frase);
    
    int pal=1; // Si no es palíndromo valdrá 0;
    for (int i=0; i<=(frase.length()/2) && pal==1; i++) {
        if (frase[i]!=frase[frase.length()-1-i]) pal=0;
    }
    
    if (pal==1) cout << "Es palíndromo." << endl;
    else cout << "No es palíndromo." << endl;
    
    
    system("PAUSE");
    return 0;
}
