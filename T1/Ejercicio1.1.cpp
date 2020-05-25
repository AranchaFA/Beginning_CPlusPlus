#include <iostream>
#include <stdlib.h.> // Para poder usar system("PAUSE");
using namespace std;

int main () {
    int a, b;
    
    cout << "Introduce un número (a):" << endl;
    cin >> a;
    
    cout << "Introduce otro número (b):" << endl;
    cin >> b;
    
    cout << "Suma: " << a+b << endl;
    cout << "Resta: " << a-b << endl;
    cout << "Multiplicación: " << a*b << endl;
    cout << "División: " << (float) a/b << endl; // Me redondea a un entero! No pone decimales
    
    cout << a++ << endl;
    cout << ++a << endl;
    cout << a++ *2 << endl;
    cout << ++a *2 << endl;
    
    system("PAUSE"); // "Sustituye" a getchar ();
    return 0;
}
