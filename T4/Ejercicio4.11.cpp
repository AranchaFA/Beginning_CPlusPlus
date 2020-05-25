#include <iostream>
#include <cmath>
using namespace std;

int main () {
    // Aproximación del ¿número Pi?.
    float sum=0;
    int n;
    
    cout << "Introduzca el grado de aproximación (n): ";
    cin >> n;
    
    for (int j=1; j<=n; j++) {
        sum += (6/(j*j));
    }
    
    cout << "El número Pi vale aproximadamente: " << sqrt(sum) << endl;
    
    system("PAUSE");
    return 0;
}
