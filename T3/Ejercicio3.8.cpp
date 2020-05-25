#include <iostream>
using namespace std;

int main () {
    int a;
    
    // Saber si un número es par o impar.
    cout << "Introduzca un número (entero): " << endl;
    cin >> a;
    
    if (a%2==1) {
       cout << "El número es impar" << endl;
    }   
    else {
       cout << "El número es par" << endl;
    }
    
    // Saber si m es divisible entre n.
    int m,n;
    
    cout << "Introduzca dos números (enteros): " << endl;
    cin >> m >> n;
    
    if (m%n==0)
       cout << "El primer número es divisible entre el segundo" << endl;
    else
       cout << "El primer número no es divisible entre el segundo" << endl;
    
    system("PAUSE");
    return 0;
}
