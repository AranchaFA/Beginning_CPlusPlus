#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n;
    cout << "Introduzca un n�mero: ";
    cin >> n;
    /* Comprobaremos los n�meros desde 2 hasta ra�z cuadrada de n (el primer
    n�mero cuyo cuadrado es mayor que n, por eso se suma 1). */
    double tope=((pow(n,0.5))+1);
    // CREAMOS UN VECTOR CON LA LISTA TOTAL DE N�MEROS.
    int v[n-1]; // Se incluyen los n�meros hasta n menos el 1 (y el vector empieza en el 0).
    
    for (int i=0; i<(n-1); i++) {
        v[i]=(i+2); // La posici�n de un determinado n�mero en el vector es ese n�mero -2.
    }
    
    // NO SALE, METE ALGUNOS PARES, HECHO CON MATRICES EN Ejercicio5.10_2
    
    // COMPROBAMOS QU� N�MEROS SON PRIMOS EN EL RANGO [2-RA�Z DE n]
    for (int i=0; i<(tope-1); i++) {
        char primo='v';
        for (int j=2; j<v[i] && primo=='v'; j++) { // Comprobamos si v[i] es primo.
            if (v[i]%j==0) { //Si es divisible entre alg�n n�mero (j) no es primo.
               primo='f';
               v[i]=0;
            } 
            else if (primo=='v' && j==(v[i]-1)) { // Legamos a un n�mero antes del n�mero sin ser primo=falso.
                  for (int h=2; (h*v[i])<=n; h++) { // Vamos a anular todos los m�ltiplos del n�mero hasta n.
                      v[(h*v[i])-2]=0; // v[i] era el primo y descartaremos sus m�ltiplos asign�ndoles un 0.
                                       // La posici�n en el vector de cada n�mero es 2 menos de su valor.
                  }
            }
        }
    }
    
    cout << "Los n�meros primos entre 2 y " << n << " son: ";
    for (int m=0; m<(n-1); m++) {
        if (v[m]!=0) {
           cout << v[m] << ", ";
        }
    }
    
    system("PAUSE");
    return 0;
}
