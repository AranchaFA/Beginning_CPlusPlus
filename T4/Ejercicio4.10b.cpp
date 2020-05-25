#include <iostream>
using namespace std;

// Calcular distintos sumatorios (a).
// Sumatorio de 2i-1.

int main () {
    int sumatorio=0, n;
    
    cout << "Introduce un valor entero (n): ";
    cin >> n;

    for (int i=1; i<=n; i++) {
        sumatorio += (2*i-1);
    }
    cout << "El sumatorio de n es " << sumatorio << endl;
    
    system("PAUSE");
    return 0;
}
