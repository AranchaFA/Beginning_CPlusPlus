#include <iostream>
using namespace std;

/*Introducimos n�meros hasta que se introduzca un 0, el programa para y nos dice
cu�ntos n�meros MAYORES QUE 0 hemos introducido*/

int main () {
    int n,i=0; /* Si inicio i=0 dentro del for le vuelve a dar ese valor al 
               salir del bucle y volver a entrar */
    
    cout << "Introduzca un n�mero entero (0 para terminar): ";
    cin >> n;
 // De esta manera pide dos veces 0 para salir.      
    while (n!=0) {
       for ( ;n>0; i++) {
         cout << "Introduzca otro n�mero entero (0 para terminar): ";
         cin >> n;
         /* "continue;" - Hace bien el recuento al meter un negativo, pero pide
         dos veces el 0 para finalizar*/
         /* "break;" - No hace bien el recuento al meter un negativo (cancela
         el valor de i al salir de for as� que da i=0), y pide dos veces el 0
         para finalizar*/
         }
       cout << "Introduzca un n�mero entero (0 para terminar): ";
       cin >> n;
    }  

    cout << "Ha introducido " << i << " n�mero mayores de 0.";

    
  system("PAUSE");
  return 0;  
}
