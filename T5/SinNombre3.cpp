#include <iostream>
#include <string>
using namespace std;

int main () {
    string frase="a", larga, lexmin;
    while (frase!="FIN"); {
        if (frase.length()>larga.length()) larga=frase;
        if (frase<lexmin) lexmin=frase;
        cout << "Introduzca una linea de caracteres (sin espacios, FIN para finalizar): " << endl;
        cin >> frase;
       } 
    
    cout << "La frase más larga es: " << endl << larga << endl;
    cout << "La frase menor lexicográficamente es: " << endl << lexmin << endl;
    
    system("PAUSE");
    return 0;
}
