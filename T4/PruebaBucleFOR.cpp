#include <iostream>
using namespace std;

// NO FUNCIONA NI P'ATR�S, ENTRA EN UN BUCLE INFINITO DE PEDIR N�MERO �.o

int main () {
    int n,i=0;
    
    do {
        cout << "Mete otro n�mero: ";
        cin >> n;
        
        for ( ; n>0; i++) {
              cout << "Mete otro n�mero: ";
              cin >> n;
        }
    }
    while (n=!0);
    
    cout << "Metiste " << i << " n�meros mayores que 0";
    
    system("PAUSE");
    return 0;
}
