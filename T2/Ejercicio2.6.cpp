#include <iostream>
#include <stdlib.h.>
#include <cmath>
using namespace std;

int main () {
    float prac, teor, part;
    
    cout << "Nota práctica: " << endl;
    cin >> prac;
    cout << "Nota teórica: " << endl;
    cin >> teor;
    cout << "Nota participación: " << endl;
    cin >> part;
    
    cout << "Nota final: " << 0.3*prac+0.6*teor+0.1*part << endl;


    system("PAUSE");
    return 0;
}
