#include <iostream>
using namespace std;

int main () {
    int a;
    
    // Saber si un n�mero es par o impar.
    cout << "Introduzca un n�mero (entero): " << endl;
    cin >> a;
    
    if (a%2==1) {
       cout << "El n�mero es impar" << endl;
    }   
    else {
       cout << "El n�mero es par" << endl;
    }
    
    // Saber si m es divisible entre n.
    int m,n;
    
    cout << "Introduzca dos n�meros (enteros): " << endl;
    cin >> m >> n;
    
    if (m%n==0)
       cout << "El primer n�mero es divisible entre el segundo" << endl;
    else
       cout << "El primer n�mero no es divisible entre el segundo" << endl;
    
    system("PAUSE");
    return 0;
}
