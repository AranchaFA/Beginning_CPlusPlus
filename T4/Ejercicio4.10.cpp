#include <iostream>
using namespace std;

// Calcular distintos sumatorios (a).
// Sumatorio de i.

int main () {
    int sumatorio=0, n;
    
    cout << "Introduce un valor entero (n): ";
    cin >> n;

    for (int i=1; i<=n; i++) {
        sumatorio += i;
    }
    cout << "El sumatorio de n es " << sumatorio << endl;
    
    system("PAUSE");
    return 0;
}
