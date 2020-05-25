#include <iostream>
#include <string>
using namespace std;

// 6.3    

/* DESCRIPCIÓN:      Nos dice si un número pertenece a un intervalo cerraro.
   ENTRADA:          Extremos del intervalo (int a, int b) por valor.
                     Un número para comprobar si está en el intervalo (int x) por valor.
   SALIDA:           Booleano que nos confirme si está o no en el intervalo (bool m).
   PRECONDICIONES:   a>b para que sea un intervalo válido.
   VALOR DE RETORNO: True (está en el intervalo) o False (no está).
   
   La función no modificará ningún parámetro, sólo los leerá, luego los declararemos
   como parámetros formales de entrada de tipo const.
   Las pasamos por valor aunque por referencia es más eficiente por no iniciar las variables.
   
*/

bool estanum(const int a, const int b, int x, bool m) {  // esta(el)num(ero)
        m=false;
        for (int i=a; i<=b; i++) {
            if (i==x) m=true;
        }
    return m;
}


// LO COMPROBAMOS

int main () {
    int a=10;
    int b=20;
    int x=15;
    bool m;
    
    cout << "El número está: " << boolalpha << estanum(a,b,x,m) << endl << endl;
    
    system("PAUSE");
    return 0;
}
