#include <iostream>
using namespace std;

int main () {
    int a,b;
    
    // Forma 1.
    cout << "Introduzca dos n�meros (enteros): " << endl;
    cin >> a >> b;
    
    cout << "El n�mero mayor es el " << (a>b ? "primero" : "segundo") << endl;
    
    // Forma 2.
    if (a>b) {
       cout << "El n�mero mayor es el primero" << endl;
    }
    else {
       cout << "El n�mero mayor es el segundo" << endl;
    }
    
    system("PAUSE");
    return 0;
}
