#include <iostream>
#include <stdlib.h.>
using namespace std;

int main () {
    int edad;
    char sexo;
    float alto;
    
    cout << "Introduzca su edad:" << endl;
    cin >> edad;
    
    cout << "Introduzca su sexo (H o M):" << endl;
    cin >> sexo;
    
    cout << "Introduzca su altura:" << endl;
    cin >> alto;
    
    cout << "Tienes " << edad << " años, mides " << alto << " y tu sexo es " << sexo << endl;
    
    system("PAUSE");
    return 0;
}
