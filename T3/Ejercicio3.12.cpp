#include <iostream>
using namespace std;

int main () {
    int a,b,c,x;
    
    cout << "Introduzca tres n�meros (enteros): " << endl;
    cin >> a >> b >> c;
    cout << "Introduzca otro n�mero (enteros): " << endl;
    cin >> x;
    
    if (x==a||x==b||x==c) {
       cout << "El n�mero coincide con uno de los 3 primeros" << endl;
    }   
    else {
       cout << "El n�mero no coincide con uno de los 3 primeros" << endl; 
    }
    
    
    system("PAUSE");
    return 0;
}
