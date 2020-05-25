#include <iostream>
#include <string.h>
using namespace std;

// 6.16  

/* DESCRIPCIÓN:     Funci�n que gestione la elecci�n de una opci�n de un men�.
   ENTRADA-SALIDA:   Número entero correspondiente a la opci�n elegida (const int& n).
                     Se enviar� como salida para verificar que es esa opci�n
   PRECONDICIONES:   El valor debe de estar entre los ofrecidos.
   VALOR DE RETORNO: El n�mero elegido.
   
   No se modifica la variable n as� que se pasar� por par�metro pero NO como constante,
   porque no nos dejar� modificarla al hacer cin >> n dentro de la propia funci�n.
   
*/

int eleccion (int& n) { 
    cout << "Elija una opci�n: " << endl << endl;
    cout << "0 - Super Mario Bros" << endl;
    cout << "1 - Bubble Bubble" << endl;
    cout << "2 - Panir Restaurant" << endl;
    cout << "3 - Rainbow Island" << endl << endl;
    cin >> n;
    while (n!=0&&n!=1&&n!=2&&n!=3) {
        cout << "Opci�n incorrecta, elija de nuevo: " << endl << endl;
        cin >> n;
    }
    cout << "Has elegido el juego n�mero " << n << ". QUE TE DIVIERTAS! ;)"<< endl << endl;
}

// COMPROBAMOS
    
int main () {
    int n;

    eleccion(n);
     /*cout << eleccion(n,m);  *) Esto har� que se muestre de nuevo por pantalla la ejecuci�n de la funci�n 
       cout << m;            *) Esto har� que se muestre por pantalla el valor de n.
       
       Si hici�ramos una funci�n void, no podr�amos trabajar luego con el valor de n fuera de la funci�n.*/
    
    system("PAUSE");
    return 0;
}
