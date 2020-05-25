#include <iostream>
using namespace std;

int main () {
    // Factorial de un número n.
    int n, fact=1;
    
    cout << "Introduzca un valor (n): ";
    cin >> n;
    
    for (int i=1; i<=n; i++) {
        fact *= i;
    }
    
    cout << "El factorial de " << n << " vale: " << fact << endl;
    
    system("PAUSE");
    return 0;
}
