#include <iostream>
#include <stdlib.h.>
#include <cmath>
using namespace std;

int main () {
    double factura,anos;
    double const subida=0.03; //Subida del 3% del precio al a�o siguiente.
    
    cout << "Factura de este a�o: " << endl;
    cin >> factura;
    cout << "Numero de a�os: " << endl;
    cin >> anos;
    
    /* El precio tras n a�os de subida es Pn = (1.03)^n * Pinicial
       1.03 = 1 + subida */
    double factura2=factura*pow(1+subida,anos);
    
    cout << "La factura tras esos a�os vale: " << factura2 << endl;
    
        
    system("PAUSE");
    return 0;
}
