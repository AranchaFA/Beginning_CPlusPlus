#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n;
    cout << "Introduzca un número: ";
    cin >> n;
    /* Comprobaremos los números desde 2 hasta raíz cuadrada de n (el primer
    número cuyo cuadrado es mayor que n, por eso se suma 1). */
    double tope=((pow(n,0.5))+1);
    // CREAMOS UN VECTOR CON LA LISTA TOTAL DE NÚMEROS.
    int v[n-1]; // Se incluyen los números hasta n menos el 1 (y el vector empieza en el 0).
    
    for (int i=0; i<(n-1); i++) {
        v[i]=(i+2); // La posición de un determinado número en el vector es ese número -2.
    }
    
    // NO SALE, METE ALGUNOS PARES, HECHO CON MATRICES EN Ejercicio5.10_2
    
    // COMPROBAMOS QUÉ NÚMEROS SON PRIMOS EN EL RANGO [2-RAÍZ DE n]
    for (int i=0; i<(tope-1); i++) {
        char primo='v';
        for (int j=2; j<v[i] && primo=='v'; j++) { // Comprobamos si v[i] es primo.
            if (v[i]%j==0) { //Si es divisible entre algún número (j) no es primo.
               primo='f';
               v[i]=0;
            } 
            else if (primo=='v' && j==(v[i]-1)) { // Legamos a un número antes del número sin ser primo=falso.
                  for (int h=2; (h*v[i])<=n; h++) { // Vamos a anular todos los múltiplos del número hasta n.
                      v[(h*v[i])-2]=0; // v[i] era el primo y descartaremos sus múltiplos asignándoles un 0.
                                       // La posición en el vector de cada número es 2 menos de su valor.
                  }
            }
        }
    }
    
    cout << "Los números primos entre 2 y " << n << " son: ";
    for (int m=0; m<(n-1); m++) {
        if (v[m]!=0) {
           cout << v[m] << ", ";
        }
    }
    
    system("PAUSE");
    return 0;
}
