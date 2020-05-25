#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () {
    int n;
    cout << "Introduzca un n�mero: ";
    cin >> n;
    /* Comprobaremos los n�meros desde 2 hasta ra�z cuadrada de n (el primer
    n�mero cuyo cuadrado es mayor que n, por eso se suma 1). */
    double tope=((pow(n,0.5))+1);
    // CREAMOS UNA MATRIZ CON LA LISTA TOTAL DE N�MEROS Y SI SON O NO PRIMOS.
    struct lista {int numero; int primo;};
    lista v[n-1]; // Se incluyen los n�meros hasta n menos el 1 (y el vector empieza en el 0).
    
    for (int i=0; i<(n-1); i++) {
        v[i].numero=(i+2); // La posici�n de un determinado n�mero en el vector es ese n�mero -2.
        v[i].primo=1; // Por defecto los calificamos como primos. 1=primo, 0=no primo.
    }
    
    // COMPROBAMOS QU� N�MEROS SON PRIMOS EN EL RANGO [2-RA�Z DE n]
    for (int i=0; i<(tope-1); i++) {
        for (int j=2; j<v[i].numero && v[i].primo==1; j++) { // Comprobamos si v[i] es primo.
            if (v[i].numero%j==0) { //Si es divisible entre alg�n n�mero (j) no es primo.
               v[i].primo=0;
            } 
        }
    }
    
    for (int i=0; i<(tope-1); i++) {
        if (v[i].primo==1) {
           int h=2;
           while ((h*v[i].numero)<=n) {  // v[i] era el primo y descartaremos sus m�ltiplos desde 2 hasta sobrepasar n.
               int x=(h*v[i].numero);
               v[x-2].primo=0;  // La posici�n en el vector de cada n�mero es 2 menos de su valor.
               h++;
           } 
        }
    }
    
    cout << "Los n�meros primos entre 2 y " << n << " son: ";
    for (int m=0; m<(n-1); m++) {
        if (v[m].primo==1) {
           cout << v[m].numero << ", ";
        }
    }
    
    system("PAUSE");
    return 0;
}
