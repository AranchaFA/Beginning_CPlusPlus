#include <iostream>
#include <string>
using namespace std;

/* EJERCICIO 5.54
  Programa que lea un string y cuente cuántas veces aparece cada vocal */

int main () {
    string frase;
    int a=0, e=0, i=0, o=0, u=0;
    cout << "Introduzca una frase (sin espacios; máximo 100 caracteres): " << endl;
    cin >> frase;
    
    for (int n=0; n<frase.length(); n++) { //Si en vez de n pongo i, no me reconoce las 'i' e 'I' O.o
        if (frase[n]=='a' || frase[n]=='A') a++; 
        else if (frase[n]=='e' || frase[n]=='E') e++;
        else if (frase[n]=='i' || frase[n]=='I') i++;
        else if (frase[n]=='o' || frase[n]=='O') o++;
        else if (frase[n]=='u' || frase[n]=='U') u++;
    }
    cout << "La vocal A/a aparece " << a << " veces." << endl;
    cout << "La vocal E/e aparece " << e << " veces." << endl;
    cout << "La vocal I/i aparece " << i << " veces." << endl;
    cout << "La vocal O/o aparece " << o << " veces." << endl;
    cout << "La vocal U/u aparece " << u << " veces." << endl;
    
    
    system("PAUSE");
    return 0;
}
