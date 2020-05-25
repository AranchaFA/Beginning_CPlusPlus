#include <iostream>
#include <string.h>
using namespace std;

// 6.5   

/* DESCRIPCIÓN:      Nos dice cuántos dígitos hay en una cadena de caracteres.
                     Nos ayudamos de la función esdigito() del ejercicio 6.4
   ENTRADA:          Una cadena de caracteres (string a).
   SALIDA:           Número entero con la cantidad de dígitos (int x).
   PRECONDICIONES:   -
   VALOR DE RETORNO: Número de dígitos en la cadena.
   
   La función no modificará ningún parámetro, sólo los leerá, luego los declararemos
   como parámetros formales de entrada de tipo const.
   Las pasamos por referencia por ser más eficiente.
   
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


int cuantosdig(const string a, int x) {  // cuantosdig(itos)
        x=0;
        for (int i=0; i<a.length(); i++) {
            bool m;
           if (esdigito(a[i],m)==true) x++;
        }
    return x;
}


// LO COMPROBAMOS

int main () {
    string a="1nef23dnksk4"; // 4 dígitos
    int x;
    
    cout << "Cuantos digitos hay : " << cuantosdig(a,x) << endl << endl;
    
    system("PAUSE");
    return 0;
}
