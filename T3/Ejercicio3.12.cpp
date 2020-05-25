#include <iostream>
using namespace std;

int main () {
    int a,b,c,x;
    
    cout << "Introduzca tres números (enteros): " << endl;
    cin >> a >> b >> c;
    cout << "Introduzca otro número (enteros): " << endl;
    cin >> x;
    
    if (x==a||x==b||x==c) {
       cout << "El número coincide con uno de los 3 primeros" << endl;
    }   
    else {
       cout << "El número no coincide con uno de los 3 primeros" << endl; 
    }
    
    
    system("PAUSE");
    return 0;
}
