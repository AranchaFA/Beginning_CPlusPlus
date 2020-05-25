#include <iostream>
using namespace std;
// EJERCICIO 5.11
int main () {
    int n;
    cout << "Introduzca la dimensión del vector: ";
    cin >> n;
    int v[n];
    cout << "Introuzca por orden los elementos del vector: ";
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    // Calculamos las diferencias entre elementos consecutivos y cuál es mayor.
    int difmax=0, dif=0;
    int m1=0, m2=0; // Índices de los elementos entre los que hay la mayor dif.
    for (int i=1; i<n; i++) { // i=1 para empezar restando v[1]-v[0].
        if (v[i]>=v[i-1]) {dif=v[i]-v[i-1];} // Restamos el mayor del menor para
        else {dif=v[i-1]-v[i];} // que la diferencia sea positiva y comparar la mayor.
        if (dif>difmax) {
           difmax=dif; // Si la dif. es mayor que la máxima hasta ahora se sustituye
           m1=i-1; // Los índices de los elementos entre los que hay la difmax.
           m2=i;
        } 
    }
    
    cout << "La diferencia máxima es de " << difmax;
    cout << " y se da entre los valores " << v[m1] << " y " << v[m2];
    cout << " que ocupan las posiciones " << m1 << " y " << m2 << " respectivamente.";
    
    system("PAUSE");
    return 0;
}
