#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int a,b,c;
    
    cout << "Introduzca los tres lados del triángulo (de mayor a menor): " << endl;
    cin >> a >> b >> c;

    if (a>(b+c)) {
       cout << "No es un triángulo" << endl;
    }   
     else {
       if ((a^2)==((b^2)+(c^2))) {  //Poner (b^2) y (c^2) entre () o lo lee mal!!
           cout << "El triángulo es rectángulo" << endl; 
         }
       else {
           if ((a^2)<((b^2)+(c^2))) {
              cout << "El triángulo es acutángulo" << endl; 
           }
           else {  /* ((a^2)>(b^2+c^2)) */ 
              cout << "El triángulo es obtusángulo" << endl; 
           }
       }
     }
     
     
    system("PAUSE");
    return 0;
}
