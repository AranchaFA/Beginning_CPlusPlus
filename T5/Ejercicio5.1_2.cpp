#include <iostream>
using namespace std;

int main () {
    int sum=0, tam=0;
    int v[];
    int i=0;
    char m;
    // ¡¡NO SE PUEDE COMENZAR SIN DEFINIR EL TAMAÑO DEL VECTOR!! :(
    do { // Las posiciones de los elementos van de 0 a n-1.
       cout << "Introduzca el valor " << i << " del vector: ";
       cin >> v[i]; 
       sum += v[i];
       i++;
       cout << "¿Desea introducir otro valor? (Pulse 'no' para finalizar, y cualquier letra para continuar) ";
       cin >> m;
    } while (m!='no');
    // EJERCICIO 4.1
    cout << "El vector introducido es: ";
    for (int j=0; j<n; j++) {
        cout << v[j] << " ";
    }
    cout << endl;
    cout << "La suma de todos los elementos del vector es: ";
    cout << sum;
    cout << endl;
    // EJERCICIO 4.4
    cout << "En orden inverso, el vector introducido es: ";
    for (int j=0; j<n; j++) {
        cout << v[n-j-1] << " ";
    }
    cout << endl;
    // EJERCICIO 4.5 y 4.7
    int mayor=v[0], mayor2=v[0];
    for (int j=0; j<n; j++) {
        if (v[j]>mayor && v[j]>mayor2) mayor=v[j];
        else if (v[j]>mayor2 && v[j]<mayor) mayor2=v[j];
    }
    cout << "El mayor elemento del vector introducido es: " << mayor << endl;
    cout << "El segundo mayor elemento del vector introducido es: " << mayor2 << endl;
    // EJERCICIO 4.6
    int u=0;
    char sumadelresto='F';
    do {
        if (v[u]==(sum/2)) {
        cout << "El elemento " << u << ", de valor " << v[u] << ", es igual a la suma del resto de elementos." << endl;
        sumadelresto='V';
        }
        u++; // Sumamos tras comprobar el if para pasar a comprobar el siguiente elemento en el if.
    } while (sumadelresto!='V'); // Para que pare de comprobar cuando uno lo cumpla.
    
    system("PAUSE");
    return 0;
}
