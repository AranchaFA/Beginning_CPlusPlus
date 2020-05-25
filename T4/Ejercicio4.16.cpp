#include <iostream>
#include <cmath>
using namespace std;

int main () {
    // Adivinar un n�mero de 1 a 1000 en 10 preguntas.
    int T=1000, medio=0; //Es el pto medio de las franjas de n�meros que van quedando.
    char n='f', m='a'; /* Iniciamos m con cualquier letra que no sea m o M para poder 
                       incluirla al principio del bucle for, si no la iniciamos falla*/
    
    for (int i=1, j=2;i<=10 && n=='f';i++, j*=2) { //j=2^i, escrito 2^i as� no me lo coge.
        if (m=='m'){
           medio -= (T/j);
           if (T%j!=0) medio--;
           cout << "�El n�mero elegido por usted es " << medio << " ? (Responda V o F): ";
           cin >> n;
        }
        else { /*El primer paso del bucle debe sumarse T/2 porque iniciamos con medio=0.
               Se aplica esta condici�n porque m=a!=m. Para restar T/2 en el primer paso
               deber�a iniciarse medio=1000*/
           medio += (T/j);
           if (T%j!=0) medio++;
           cout << "�El n�mero elegido por usted es " << medio << " ? (Responda v o f): ";
           cin >> n;
        //medio=medio +- T/2^i para quitar la mitad de los valores que ser�n descartados.
        }
        
        while (n!='v' && n!='f'){
          cout << "Debe contestar v (verdadero) o f (falso): ";
          cin >> n;    
        }
        
        if (n=='v'){
           cout << "El n�mero elegido es " << medio;
        }
        else {
          cout << "�Es mayor (M) o menor (m) que este n�mero?: ";
          cin >> m; 
           
          while (m!='M' && m!='m'){
          cout << "Debe contestar M (mayor) o m (menor): ";
          cin >> m;
          }
        }
    }
    
    system("PAUSE");
    return 0;
}
