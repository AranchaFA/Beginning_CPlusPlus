#include <iostream>
using namespace std;

/*Introducimos números hasta que se introduzca un 0, el programa para y nos dice
cuántos números MAYORES QUE 0 hemos introducido*/

int main () {
    int n,i=0;
    
    cout << "Introduzca un número entero (0 para terminar): ";
    cin >> n;
 /* Así sí sale bien, no se pierde el valor de i al meter negativos porque el
 sumatorio no está en un bucle cuyos valores se pierden y se resetean. En el 
 Ejercicio4.5_2 For, While y Do While son bucles y para salir de ellos hay que 
 meter 0 y luego meter una segunda vez 0 para finalizar la función main */      
    while (n!=0) {
       if (n>0) {
         i++;
         }
       cout << "Introduzca un número entero (0 para terminar): ";
       cin >> n;
    }  

    cout << "Ha introducido " << i << " número mayores de 0.";

    
  system("PAUSE");
  return 0;  
}
