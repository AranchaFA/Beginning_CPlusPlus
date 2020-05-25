#include <iostream>
using namespace std;
// Meter un n�mero de 1 a 10 y sacar su tabla de multiplicar.
int main () {
   int n;
   
   cout << "Introduzca un n� entero entre 1 y 10: ";
   cin >> n;
   
   while (n<1||n>10){
       cout << "El n� est� fuera del rango (1-10)." << endl;
       break;
   }
   /* Las tres condiciones de la EXPRESI�N L�GICA del for se tienen que unir
   con "&&", si se separan con comas simplemente creo que la da por verdadera
   cuando se cumple alguna de ellas (i<=0 se va a cumplir hasta sacarnos la
   tabla de multiplicar como en un n�mero v�lido del rango 1-10) */
   for (int i=1; n>=1 && n<=10 && i<=10; i++) {
       cout << n << "x" << i << "=" << i*n << endl;
   }
   
   
   system("PAUSE");
   return 0;
}
