#include <iostream>
using namespace std;

// Leer valores enteros hasta que uno esté en [20,30] o sea igual a 0.

int main () {
    int n;

    do {
        cout << "Introduce un número entero: ";
        cin >> n;
    }
    while (n!=0 && (n<20||n>30));
    
    system("PAUSE");
    return 0;
}
