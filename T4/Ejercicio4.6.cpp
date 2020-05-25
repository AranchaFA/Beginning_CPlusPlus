#include <iostream>
#include <cmath>
using namespace std;

// Programa que calcula y muestra la suma de los cuadrados de 1 a 10.
int main () {
    int cuadrado,n;
    
    for (n=1, cuadrado=0; n<=10; n++) {
        cuadrado += n*n;
    }
    cout << "La suma de los cuadrados de los 10 primeros enteros positivos es: ";
    cout << cuadrado;
    
    system("PAUSE");
    return 0;  
}
