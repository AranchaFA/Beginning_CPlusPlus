#include <iostream>
#include <string.h>
using namespace std;

// 6.16  

/* DESCRIPCIÃ“N:     Función que gestione la elección de una opción de un menú.
   ENTRADA-SALIDA:   NÃºmero entero correspondiente a la opción elegida (const int& n).
                     Se enviará como salida para verificar que es esa opción
   PRECONDICIONES:   El valor debe de estar entre los ofrecidos.
   VALOR DE RETORNO: El número elegido.
   
   No se modifica la variable n así que se pasará por parámetro pero NO como constante,
   porque no nos dejará modificarla al hacer cin >> n dentro de la propia función.
   
*/

int eleccion (int& n) { 
    cout << "Elija una opción: " << endl << endl;
    cout << "0 - Super Mario Bros" << endl;
    cout << "1 - Bubble Bubble" << endl;
    cout << "2 - Panir Restaurant" << endl;
    cout << "3 - Rainbow Island" << endl << endl;
    cin >> n;
    while (n!=0&&n!=1&&n!=2&&n!=3) {
        cout << "Opción incorrecta, elija de nuevo: " << endl << endl;
        cin >> n;
    }
    cout << "Has elegido el juego número " << n << ". QUE TE DIVIERTAS! ;)"<< endl << endl;
}

// COMPROBAMOS
    
int main () {
    int n;

    eleccion(n);
     /*cout << eleccion(n,m);  *) Esto hará que se muestre de nuevo por pantalla la ejecución de la función 
       cout << m;            *) Esto hará que se muestre por pantalla el valor de n.
       
       Si hiciéramos una función void, no podríamos trabajar luego con el valor de n fuera de la función.*/
    
    system("PAUSE");
    return 0;
}
