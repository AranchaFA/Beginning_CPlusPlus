#include <iostream>
using namespace std;

int main () {
    int a,b,c;
    
    cout << "Introduzca tres n�meros (enteros): " << endl;
    cin >> a >> b >> c;
    
    if (a==b && a==c) {
       cout << "Los n�meros son iguales" << endl;
    }   
    else if (a>b && a>c) {
       cout << "El n�mero mayor es el primero" << endl;
    }
    else if (b>c) {
       cout << "El n�mero mayor es el segundo" << endl;     
    }
    else {
       cout << "El n�mero mayor es el tercero" << endl;
    }
    
    
    system("PAUSE");
    return 0;
}
