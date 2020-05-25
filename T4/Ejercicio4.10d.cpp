#include <iostream>
using namespace std;

int main () {
    // Sumatorio de los factoriales de los números de 1 hasta n.
    int n, fact=1, sum=0; // Fact habría que definirlo dentro del bucle for.
    
    cout << "Introduzca un valor (n): ";
    cin >> n;
    
    for (int j=1; j<=n; j++) {
        fact=1; /* Si no inicio fact=1 aquí va acumulando los valores obtenidos 
                en el siguiente bucle for y sale mal */
        for (int i=1; i<=j; i++) {
            fact *= i;
        }
        sum += fact;
    }
    
    cout << "El sumatorio de factoriales de " << n << " vale: " << sum << endl;
    
    system("PAUSE");
    return 0;
}
