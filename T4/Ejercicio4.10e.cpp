#include <iostream>
using namespace std;

int main () {
    // Sumatorio de potencias de base 2 elevado a los números de 1 hasta n.
    int n, pot=1, sum=0;
    
    cout << "Introduzca un valor (n): ";
    cin >> n;
    
    for (int j=1; j<=n; j++) {
        pot=1; /* Si no inicio pot=1 aquí va acumulando los valores obtenidos 
                en el siguiente bucle for y sale mal */
        for (int i=1; i<=j; i++) {
            pot *= 2;
        }
        sum += pot;
    }
    
    cout << "El sumatorio de potencias de 2 elevado a " << n << " vale: " << sum << endl;
    
    system("PAUSE");
    return 0;
}
