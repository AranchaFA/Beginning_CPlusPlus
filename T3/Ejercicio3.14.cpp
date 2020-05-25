#include <iostream>
using namespace std;

int main () {
    int i,j;
    char c;
    
    cout << "Introduzca un número (entero): " << endl;
    cin >> i;
    cout << "Introduzca un operador (+,-,*,x,/): " << endl;
    cin >> c;
    cout << "Introduzca otro número (entero): " << endl;
    cin >> j;
    
    if (c!='+' && c!='-' && c!='*' && c!='x' && c!='/') {
       cout << "El operador no es válido" << endl;
    }   
    else {
       cout << "El resultado de la operación es: " << endl;
       if (c=='+') cout << i+j;
       else if (c=='-') cout << i-j;
       else if (c=='*'||c=='x') cout << i*j;
       else cout << (float) i/j; // (float) para que saque los decimales
       
    }
    
    
    system("PAUSE");
    return 0;
}
