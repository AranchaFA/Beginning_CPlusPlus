#include <iostream>
using namespace std;

int main () {
    // Programa para calcular los kilos de pesca y cuándo llegas al límite.
    double k, lim, sum=0;
    
    cout << "Introduzca el límite de KILOS del día de hoy: ";
    cin >> lim;
    cout << "Introduzca el peso en KILOS de la presa (0 para finalizar): ";
    cin >> k;
    
    do { 
       sum += k;
       cout << "Llevas " << sum << " kilos de pescado por ahora" << endl;
       if (sum>=lim) {
          cout << "¡Has llegado al límite permitido para hoy!" << endl;
       }
       else {
            cout << "Introduzca el peso en KILOS de la presa (0 para finalizar): ";
            cin >> k;
       }
    } while (k!=0 && sum<lim);
    
    cout << "Hoy has pescado " << sum << "kilos de pescado.";
    
    system("PAUSE");
    return 0;
}
