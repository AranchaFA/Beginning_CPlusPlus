#include <iostream>
#include <cmath>
using namespace std;

int main () {
    // Aproximaci�n del �n�mero Pi?.
    float sum=0;
    int n;
    
    cout << "Introduzca el grado de aproximaci�n (n): ";
    cin >> n;
    
    for (int j=1; j<=n; j++) {
        sum += (6/(j*j));
    }
    
    cout << "El n�mero Pi vale aproximadamente: " << sqrt(sum) << endl;
    
    system("PAUSE");
    return 0;
}
