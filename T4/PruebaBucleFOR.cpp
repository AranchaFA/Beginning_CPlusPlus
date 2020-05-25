#include <iostream>
using namespace std;

// NO FUNCIONA NI P'ATRÁS, ENTRA EN UN BUCLE INFINITO DE PEDIR NÚMERO Ô.o

int main () {
    int n,i=0;
    
    do {
        cout << "Mete otro número: ";
        cin >> n;
        
        for ( ; n>0; i++) {
              cout << "Mete otro número: ";
              cin >> n;
        }
    }
    while (n=!0);
    
    cout << "Metiste " << i << " números mayores que 0";
    
    system("PAUSE");
    return 0;
}
