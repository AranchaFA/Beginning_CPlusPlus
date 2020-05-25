#include <iostream>
using namespace std;

// 6.8  

/* DESCRIPCIÓN:      Intercambia el valor de dos parámetros.
   ENTRADA-SALIDA:   Dos enteros, pero podrían ser de cualquier tipo (int a, int b).           
   PRECONDICIONES:   -
   VALOR DE RETORNO: a y b con sus valores intercambiados.
   
   La función modificará los parámetro, luego los declararemos
   como parámetros formales de salida con paso por parámetro.
   
*/

int cambianum(int& a, int& b) {
    int aux=a;
    a=b;
    b=aux;
}

// VAMOS A COMPROBAR QUÉ PASA SI SE PASAN POR VALOR Y NO POR REFERENCIA
int cambianum2(int a, int b) {
    int aux=a;
    a=b;
    b=aux;
}

int main () {
    int a=0, b=7;
    
    cout << "Cambiamos a=" << a << endl << "Cambiamos b=" << b << endl;
    cambianum(a,b);
    cout << "Y obtenemos a=" << a << endl << "Y obtenemos b=" << b << endl;
    
    a=0, b=7;
    cout << "Si pasamos las variables POR VALOR sus valores no se cambian definitivamente, sólo dentro del ámbito de la función: " << endl;
    cambianum2(a,b);
    cout << "Y obtenemos a=" << a << endl << "Y obtenemos b=" << b << endl;
    
    system("PAUSE");
    return 0;
}
