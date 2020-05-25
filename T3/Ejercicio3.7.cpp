#include <iostream>
using namespace std;

int main () {
    int a,b,c,d;
    
    cout << "Introduzca 4 números (enteros): " << endl;
    cin >> a >> b >> c >> d;
    
    if (a==b && a==c && a==d) {
       cout << "Los números son iguales" << endl;
    }   
    else if (a>b && a>c && a>d) {
       cout << "El número mayor es el primero" << endl;
    }
    else if (b>c && b>d) {
       cout << "El número mayor es el segundo" << endl;     
    }
    else if (c>d){
       cout << "El número mayor es el tercero" << endl;
    }
    else {
       cout << "El número mayor es el cuarto" << endl;
    }
    
    
    system("PAUSE");
    return 0;
}
