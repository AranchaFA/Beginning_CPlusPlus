#include <iostream>
#include <stdlib.h.> // Para poder usar system("PAUSE");
using namespace std;

int main () {
    int a, b;
    
    cout << "Introduce un n�mero (a):" << endl;
    cin >> a;
    
    cout << "Introduce otro n�mero (b):" << endl;
    cin >> b;
    
    cout << "Suma: " << a+b << endl;
    cout << "Resta: " << a-b << endl;
    cout << "Multiplicaci�n: " << a*b << endl;
    cout << "Divisi�n: " << (float) a/b << endl; // Me redondea a un entero! No pone decimales
    
    cout << a++ << endl;
    cout << ++a << endl;
    cout << a++ *2 << endl;
    cout << ++a *2 << endl;
    
    system("PAUSE"); // "Sustituye" a getchar ();
    return 0;
}
