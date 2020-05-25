#include <iostream>
using namespace std;

// Calcular x elevado a y, siendo ambos ENTEROS POSITIVOS.

int main () {
    int x,y,potencia=1;
    
    cout << "Introduce un valor entero (x): ";
    cin >> x;
    cout << "Introduce otro valor entero (y): ";
    cin >> y;

    for (int i=1; i<=y; i++) {
        potencia = potencia*x;
    }
    cout << "x elevado a y vale " << potencia << endl;
    
    system("PAUSE");
    return 0;
}
