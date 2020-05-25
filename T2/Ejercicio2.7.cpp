#include <iostream>
#include <stdlib.h.>
#include <cmath>
using namespace std;

int main () {
    double a1,a2,a3,a4;
    double media;
    
    cout << "Nota alumno 1: " << endl;
    cin >> a1;
    cout << "Nota alumno 2: " << endl;
    cin >> a2;
    cout << "Nota alumno 3: " << endl;
    cin >> a3;
    cout << "Nota alumno 4: " << endl;
    cin >> a4;
    
    media=(a1+a2+a3+a4)/4; // Si la defino antes de meter los valores no sale!
    cout << "Nota media de los cuatro: " << media << endl;
    
    system("PAUSE");
    return 0;
}
