#include <iostream>
using namespace std;

/*Introducimos n�meros hasta que se introduzca un 0, el programa para y nos dice
cu�ntos n�meros MAYORES QUE 0 hemos introducido*/

int main () {
    int n,i=0;
    
    do {
       cout << "Introduzca un n�mero entero (0 para terminar): ";
       cin >> n;
       /* i=0 se tiene que iniciar fuera del bucle for, si ponemos 
       for (i=0 ;n>0; i++) al introducir un valor negativo SALIMOS de for y 
       al volver a entrar con un nuevo valor positivo SE RESETEA el valor 
       de i y volver�a a ser 0 */
       for ( ;n>0; i++){
         cout << "Introduzca otro n�mero entero (0 para terminar): ";
         cin >> n;
         } 
    }  
    while (n!=0); 

    cout << "Ha introducido " << i << " n�mero mayores de 0.";

    
  system("PAUSE");
  return 0;  
}
