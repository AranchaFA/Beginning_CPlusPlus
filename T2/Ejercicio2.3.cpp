#include <iostream>
#include <stdlib.h.>
#include <cmath>
using namespace std;

int main () {
    int x,y,z;
    
    cout << "Introduzca x: " << endl;
    cin >> x;
    cout << "Introduzca y: " << endl;
    cin >> y;
    cout << "Introduzca z: " << endl;
    cin >> z;
    
    x=y;
    y=z;
    cout << "x=" << x << " y=" << y << " z=" << z << endl;
    y=z;
    x=y;
    cout << "Cambiando orden: x=" << x << " y=" << y << " z=" << z << endl;
    
    x=z;
    x=y;
    cout << "x=" << x << " y=" << y << " z=" << z << endl;
    x=y;
    x=z;
    cout << "Cambiando orden: x=" << x << " y=" << y << " z=" << z << endl;    
    
    x=y;
    z=x;
    cout << "x=" << x << " y=" << y << " z=" << z << endl;
    z=x;
    x=y;
    cout << "Cambiando orden: x=" << x << " y=" << y << " z=" << z << endl;
    
    z=y;
    x=y;
    cout << "x=" << x << " y=" << y << " z=" << z << endl;
    x=y;
    z=y;
    cout << "Cambiando orden: x=" << x << " y=" << y << " z=" << z << endl;
    
    // Sólo cambia el valor en el primer caso al variar el ordern.
    
    system("PAUSE");
    return 0;
    
}
