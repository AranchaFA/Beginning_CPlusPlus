#include <iostream>
#include <stdlib.h.>
#include <cmath>
using namespace std;

int main () {
    float a,b,c,d;
    
    cout << "Introduzca un n�mero:" << endl;
    cin >> a;
    
    cout << "Introduzca otro n�mero:" << endl;
    cin >> b;
        
    cout << "Introduzca otro n�mero:" << endl;
    cin >> c;
        
    cout << "Introduzca otro n�mero:" << endl;
    cin >> d;
    
    cout << "a/b+1 como N entero:" << (float) (a/b+1) << endl; //Redondea y no me da un float
    cout << "a/b+1 como N entero:" << (float) (a/b)+1 << endl; //Redondea y no me da un float
    cout << "a/b+1 como N real:" << (float) a/b+1 << endl;     //No redondea, S� me da un float
    
    cout << "a+b/(c-d):" << a+b/(c-d) << endl; 
    
    cout << "Soluci�n +:" << (-b+sqrt(pow(b,2)-4*a*c))/(2*a) << endl;
    cout << "Soluci�n -:" << (-b-sqrt(pow(b,2)-4*a*c))/(2*a) << endl;
    
    system("PAUSE");
    return 0;
}
