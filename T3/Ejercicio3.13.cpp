#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int a,b,c;
    
    cout << "Introduzca los tres lados del tri�ngulo (de mayor a menor): " << endl;
    cin >> a >> b >> c;

    if (a>(b+c)) {
       cout << "No es un tri�ngulo" << endl;
    }   
     else {
       if ((a^2)==((b^2)+(c^2))) {  //Poner (b^2) y (c^2) entre () o lo lee mal!!
           cout << "El tri�ngulo es rect�ngulo" << endl; 
         }
       else {
           if ((a^2)<((b^2)+(c^2))) {
              cout << "El tri�ngulo es acut�ngulo" << endl; 
           }
           else {  /* ((a^2)>(b^2+c^2)) */ 
              cout << "El tri�ngulo es obtus�ngulo" << endl; 
           }
       }
     }
     
     
    system("PAUSE");
    return 0;
}
