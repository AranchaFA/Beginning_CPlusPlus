#include <iostream>
#include <string>
using namespace std;

/* EJERCICIO 5.25
   Programa que lea líneas de caracteres hasta que metamos FIN y nos diga
   cuál es la más larga y cuál es la menor lexicográficamente*/

int main () {
    string frase, larga;
    string lexmin="z"; // Si la inicio en la línea de arriba no funciona O.o
        cout << "Introduzca una linea de caracteres (sin espacios, FIN para finalizar): " << endl;
        cin >> frase;
    do {
        if (frase.length()>larga.length()) larga=frase;
        if (frase<lexmin) lexmin=frase;
        cout << "Introduzca una linea de caracteres (sin espacios, FIN para finalizar): " << endl;
        cin >> frase;
       }
    while (frase!="FIN");
    
    cout << "La frase más larga es: " << endl << larga << endl;
    cout << "La frase menor lexicográficamente es: " << endl << lexmin << endl;
    
    system("PAUSE");
    return 0;
}
