#include <iostream>
using namespace std;

// Leer 6 temperaturas y dar la media, la máxima y la mínima.

int main () {
    int t, media=0, max=-60, min=60; /* Ponemos valores muy altos de min y muy
    bajos de max para que los valores mínimos y máximos introducidos siempre
    modifiquen los iniciales */
    /* Definimos media como entero porque no tiene sentido una temperatura
    con muchos decimales (double o float) cuando los termómetros no tienen
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
    cout << "La temperatura máxima ha sido de " << max << endl;
    cout << "La temperatura mínima ha sido de " << min << endl;
    
    system("PAUSE");
    return 0;
}
