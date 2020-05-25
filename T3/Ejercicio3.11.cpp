#include <iostream>
using namespace std;

int main () {
    int edad;
    
    cout << "Introduzca su edad: " << endl;
    cin >> edad;
    
    if (edad>=18 && edad<=25) {
       cout << "¡Tienes entre 18 y 25 años!" << endl;
    }   
    else {
       cout << "No tienes entre 18 y 25 años" << endl; 
    }
    
    
    system("PAUSE");
    return 0;
}
