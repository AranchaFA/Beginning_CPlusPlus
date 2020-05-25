#include <iostream>
#include <stdlib.h.>
#include <cmath>
using namespace std;

int main () {
    double factura,anos;
    double const subida=0.03; //Subida del 3% del precio al año siguiente.
    
    cout << "Factura de este año: " << endl;
    cin >> factura;
    cout << "Numero de años: " << endl;
    cin >> anos;
    
    /* El precio tras n años de subida es Pn = (1.03)^n * Pinicial
       1.03 = 1 + subida */
    double factura2=factura*pow(1+subida,anos);
    
    cout << "La factura tras esos años vale: " << factura2 << endl;
    
        
    system("PAUSE");
    return 0;
}
