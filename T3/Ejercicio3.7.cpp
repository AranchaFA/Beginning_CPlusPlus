#include <iostream>
using namespace std;

int main () {
    int a,b,c,d;
    
    cout << "Introduzca 4 n�meros (enteros): " << endl;
    cin >> a >> b >> c >> d;
    
    if (a==b && a==c && a==d) {
       cout << "Los n�meros son iguales" << endl;
    }   
    else if (a>b && a>c && a>d) {
       cout << "El n�mero mayor es el primero" << endl;
    }
    else if (b>c && b>d) {
       cout << "El n�mero mayor es el segundo" << endl;     
    }
    else if (c>d){
       cout << "El n�mero mayor es el tercero" << endl;
    }
    else {
       cout << "El n�mero mayor es el cuarto" << endl;
    }
    
    
    system("PAUSE");
    return 0;
}
