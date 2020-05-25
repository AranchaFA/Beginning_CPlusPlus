#include <iostream>
using namespace std;

int main () {
    int a,b;
    
    // Forma 1.
    cout << "Introduzca dos números (enteros): " << endl;
    cin >> a >> b;
    
    cout << "El número mayor es el " << (a>b ? "primero" : "segundo") << endl;
    
    // Forma 2.
    if (a>b) {
       cout << "El número mayor es el primero" << endl;
    }
    else {
       cout << "El número mayor es el segundo" << endl;
    }
    
    system("PAUSE");
    return 0;
}
