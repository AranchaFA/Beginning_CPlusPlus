#include <iostream>
#include <stdlib.h.>
#include <cmath>
using namespace std;

int main () {
    float prac, teor, part;
    
    cout << "Nota pr�ctica: " << endl;
    cin >> prac;
    cout << "Nota te�rica: " << endl;
    cin >> teor;
    cout << "Nota participaci�n: " << endl;
    cin >> part;
    
    cout << "Nota final: " << 0.3*prac+0.6*teor+0.1*part << endl;


    system("PAUSE");
    return 0;
}
