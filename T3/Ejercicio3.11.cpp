#include <iostream>
using namespace std;

int main () {
    int edad;
    
    cout << "Introduzca su edad: " << endl;
    cin >> edad;
    
    if (edad>=18 && edad<=25) {
       cout << "�Tienes entre 18 y 25 a�os!" << endl;
    }   
    else {
       cout << "No tienes entre 18 y 25 a�os" << endl; 
    }
    
    
    system("PAUSE");
    return 0;
}
