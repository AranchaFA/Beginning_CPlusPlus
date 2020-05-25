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

int eleccion (int& n, string v[], int tam) { 
    cout << "Elija una opci�n: " << endl << endl;
    for (int i=0; i<tam; i++){
        cout << v[i] << endl;
    }
    cin >> n;
    while (n!=0&&n!=1&&n!=2&&n!=3) {
        cout << "Opci�n incorrecta, elija de nuevo: " << endl << endl;
        cin >> n;
    }
    cout << "Has elegido el juego n�mero " << n << ". QUE TE DIVIERTAS! ;)"<< endl << endl;
    return n;
}

// COMPROBAMOS
    
int main () {
    int n;
    int tam=4;
    string v[]={"0 - Super Mario Bros",
                "1 - Bubble Bubble",
                "2 - Panir Restaurant",
                "3 - Rainbow Island"};

    eleccion(n,v,tam);
     /*cout << eleccion(n,m);  *) Esto har� que se muestre de nuevo por pantalla la ejecuci�n de la funci�n 
       cout << m;            *) Esto har� que se muestre por pantalla el valor de n.
       
       Si hici�ramos una funci�n void, no podr�amos trabajar luego con el valor de n fuera de la funci�n.*/
    
    system("PAUSE");
    return 0;
}
