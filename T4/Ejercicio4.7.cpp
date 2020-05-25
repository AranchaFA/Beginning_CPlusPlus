#include <iostream>
using namespace std;

// Leer 6 temperaturas y dar la media, la m�xima y la m�nima.

int main () {
    int t, media=0, max=-60, min=60; /* Ponemos valores muy altos de min y muy
    bajos de max para que los valores m�nimos y m�ximos introducidos siempre
    modifiquen los iniciales */
    /* Definimos media como entero porque no tiene sentido una temperatura
    con muchos decimales (double o float) cuando los term�metros no tienen
    tanta sensibilidad */
    
    int i=0; // Variable para control del bucle for.

    for (i=1; i<=6; i++) {
        cout << "Introduzca la temperatura medida: ";
        cin >> t;
        
        media += (t/6);
        if (t>max) max=t;
        if (t<min) min=t;
    }
    
    cout << "La temperatura media ha sido de " << media << endl;
    cout << "La temperatura m�xima ha sido de " << max << endl;
    cout << "La temperatura m�nima ha sido de " << min << endl;
    
    system("PAUSE");
    return 0;
}
