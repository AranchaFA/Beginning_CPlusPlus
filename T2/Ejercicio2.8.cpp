#include <iostream>
#include <stdlib.h.>
#include <cmath>
using namespace std;

int main () {
    double precio,metido,dif;
    
    cout << "Introduzca precio de la cajetilla: " << endl;
    cin >> precio;
    cout << "Introduzca importe en monedas: " << endl;
    cin >> metido;
    
    dif=metido-precio;
    
    //Para saber el número de monedas tengo que usar IF y esas cosas 0.o
    
    system("PAUSE");
    return 0;
}
