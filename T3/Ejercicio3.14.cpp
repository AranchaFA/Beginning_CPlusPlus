#include <iostream>
using namespace std;

int main () {
    int i,j;
    char c;
    
    cout << "Introduzca un n�mero (entero): " << endl;
    cin >> i;
    cout << "Introduzca un operador (+,-,*,x,/): " << endl;
    cin >> c;
    cout << "Introduzca otro n�mero (entero): " << endl;
    cin >> j;
    
    if (c!='+' && c!='-' && c!='*' && c!='x' && c!='/') {
       cout << "El operador no es v�lido" << endl;
    }   
    else {
       cout << "El resultado de la operaci�n es: " << endl;
       if (c=='+') cout << i+j;
       else if (c=='-') cout << i-j;
       else if (c=='*'||c=='x') cout << i*j;
       else cout << (float) i/j; // (float) para que saque los decimales
       
    }
    
    
    system("PAUSE");
    return 0;
}
