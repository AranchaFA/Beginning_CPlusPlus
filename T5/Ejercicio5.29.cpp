#include <iostream>
#include <string>
using namespace std;

/* 5.29  
   PROGRAMA QUE CUENTE EN Nº DE PALABRAS DE UNA FRASE */
int main () {
    string frase;
    cout << "Introduzca una frase: " << endl;
    getline (cin >> ws, frase);
    
    int palabras=0;
    for (int i=0; i<frase.length(); i++){
        if (frase[i]==' ' && frase[i+1]!=' ') palabras++; 
    } /* Sumamos palabra si hay un espacio seguido de otro caracter diferente,
         si sólo ponemos como condición que haya un espacio se contaría como
         palabras cuando haya varios espacios en blanco seguidos*/
    
    cout << "La frase tiene " << palabras << " palabras diferentes.";
    
    system("PAUSE");
    return 0;
}