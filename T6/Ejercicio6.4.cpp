#include <iostream>
#include <string>
using namespace std;

// 6.3    

/* DESCRIPCIÓN:      Nos dice si un caracter es un dígito.
   ENTRADA:          Un caracter (char a).
   SALIDA:           Booleano que nos confirme si es o no un dígito (bool m).
   PRECONDICIONES:   Sólo un caracter. (Me da error si le pongo las condiciones)
   VALOR DE RETORNO: True (es un dígito) o False (no lo es).
   
   La función no modificará ningún parámetro, sólo los leerá, luego los declararemos
   como parámetros formales de entrada de tipo const.
   Las pasamos por valor aunque por referencia es más eficiente por no iniciar las variables.
   
*/

bool esdigito(const char a, bool m) { 
        m=false;
        switch (a) { 
            case '0': m=true;
            case '1': m=true;
            case '2': m=true;
            case '3': m=true;
            case '4': m=true;
            case '5': m=true;
            case '6': m=true;
            case '7': m=true;
            case '8': m=true;
            case '9': m=true;
        }
    return m;
}


// LO COMPROBAMOS

int main () {
    char a='2';
    bool m;
    
    cout << "Es un digito : " << boolalpha << esdigito(a,m) << endl << endl;
    
    system("PAUSE");
    return 0;
}
