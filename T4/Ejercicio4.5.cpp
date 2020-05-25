#include <iostream>
using namespace std;

/*Introducimos números hasta que se introduzca un 0, el programa para y nos dice
cuántos números MAYORES QUE 0 hemos introducido*/

int main () {
    int n,i=0;
    
    do {
       cout << "Introduzca un número entero (0 para terminar): ";
       cin >> n;
       /* i=0 se tiene que iniciar fuera del bucle for, si ponemos 
       for (i=0 ;n>0; i++) al introducir un valor negativo SALIMOS de for y 
       al volver a entrar con un nuevo valor positivo SE RESETEA el valor 
       de i y volvería a ser 0 */
       for ( ;n>0; i++){
         cout << "Introduzca otro número entero (0 para terminar): ";
         cin >> n;
         } 
    }  
    while (n!=0); 

    cout << "Ha introducido " << i << " número mayores de 0.";

    
  system("PAUSE");
  return 0;  
}
