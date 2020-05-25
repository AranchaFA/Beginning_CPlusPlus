#include <iostream>
using namespace std;

int main () {
    int a,b,c;
    
    cout << "Introduzca tres números (enteros): " << endl;
    cin >> a >> b >> c;
    
    if (a==b && a==c) {
       cout << "Los números son iguales" << endl;
    }   
    else if (a>b && a>c) {
       cout << "El número mayor es el primero" << endl;
    }
    else if (b>c) {
       cout << "El número mayor es el segundo" << endl;     
    }
    else {
       cout << "El número mayor es el tercero" << endl;
    }
    
    
    system("PAUSE");
    return 0;
}
