#include <iostream>
using namespace std;

/*Introducimos n�meros hasta que se introduzca un 0, el programa para y nos dice
cu�ntos n�meros MAYORES QUE 0 hemos introducido*/

int main () {
    int n,i=0;
    
    cout << "Introduzca un n�mero entero (0 para terminar): ";
    cin >> n;
 /* As� s� sale bien, no se pierde el valor de i al meter negativos porque el
 sumatorio no est� en un bucle cuyos valores se pierden y se resetean. En el 
 Ejercicio4.5_2 For, While y Do While son bucles y para salir de ellos hay que 
 meter 0 y luego meter una segunda vez 0 para finalizar la funci�n main */      
    while (n!=0) {
       if (n>0) {
         i++;
         }
       cout << "Introduzca un n�mero entero (0 para terminar): ";
       cin >> n;
    }  

    cout << "Ha introducido " << i << " n�mero mayores de 0.";

    
  system("PAUSE");
  return 0;  
}
