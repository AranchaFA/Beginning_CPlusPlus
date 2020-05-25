#include <iostream>
using namespace std;

int main () { // Descomponer un númere en factores primos.
    int n1;
    
    cout << "Introduzca un número entero: ";
    cin >> n1;
    int n2=n1;
    
    for (int i=2; i*i<=n1; i++) {
        while (n2%i==0) {
            n1=n2; //Para guardar el valor de n2 antes de dividirlo entre i.
            n2 /= i; //Si usamos el n2/i para el if ya no será divisible entre i
                     //y dará siempre falsa la condición.
        }
        if (n1%i==0) {
           cout << i << " es factor primo del número introducido." << endl;
        }
    }
        
    system("PAUSE");
    return 0;
}
