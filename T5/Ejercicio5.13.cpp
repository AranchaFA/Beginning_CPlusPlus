#include <iostream>
using namespace std;

// EJERCICIO 5.13
int main () {
    int n, m;
    cout << "Introduzca la dimensión del vector A: ";
    cin >> n;
    cout << "Introduzca la dimensión del vector B: ";
    cin >> m;
    // INTRODUCIMOS LOS VECTORES.
    int v[n], w[m];
    for (int i=0; i<n; i++) {
        cout << "Introduzca el valor del elemento del índice " << i << " del vector A: ";
        cin >> v[i];
    }
    for (int i=0; i<n; i++) {
        cout << "Introduzca el valor del elemento del índice: " << i << " del vector B: ";
        cin >> w[i];
    }
    // MOSTRAMOS EN PANTALLA PARA COMPARARLOS CON EL RESULTADO.
    cout << "El vector A es: " << endl;
    for (int i=0; i<n; i++) {
        cout << v[i] << ", ";
    }
    cout << "El vector B es: " << endl;
    for (int i=0; i<n; i++) {
        cout << w[i] << ", ";
    }    
    // VAMOS A ORDENAR LOS ELEMENTOS DE LOS VECTORES DE MENOR A MAYOR.
    // Vector A
    for (int i=0; i<(n-1); i++) { // Empezamos con el primero v[i] y el segundo v[i+1].
        for (int j=i+1; j<n; j++) { // Acabamos con el penúltimo v[n-2]  el último v[n-1].
            if (v[i]>v[j]) { // Si el primer elemento es mayor se intercambian posiciones.
               int copia=v[i];
               v[i]=v[j];
               v[j]=copia;
            }
        }
    }
    // Vector B
    for (int i=0; i<(m-1); i++) { // Empezamos con el primero v[i] y el segundo v[i+1].
        for (int j=i+1; j<m; j++) { // Acabamos con el penúltimo v[n-2]  el último v[n-1].
            if (w[i]>w[j]) { // Si el primer elemento es mayor se intercambian posiciones.
               int copia=w[i];
               w[i]=w[j];
               w[j]=copia;
            }
        }
    }
    // MOSTRAMOS EN PANTALLA PARA COMPROBAR QUE ES CORRECTO.
    cout << "El vector A ordenado es: " << endl;
    for (int i=0; i<n; i++) {
        cout << v[i] << ", ";
    }
    cout << "El vector B ordenado es: " << endl;
    for (int i=0; i<n; i++) {
        cout << w[i] << ", ";
    }
    // UNA VEZ ORDENADOS LOS VECTORES, COMPROBAMOS CUÁNTOS ELEMENTOS DIFERENTES HAY
    // PARA CALCULAR EL TAMAÑO MÁXIMO QUE TENDRÁN AL ELIMINAR LOS REPETIDOS. 
    // Vector A
    int n2=0;
    for (int i=0; i<(n-1); i++) { 
        for (int j=i+1; j<n; j++) {
            if (v[i]!=v[j]) { // Si los números consecutivos son diferentes se suma 1
               n2++;          // al número de elementos diferentes.
            }
        }
    }
    // Vector B
    int m2=0;
    for (int i=0; i<(m-1); i++) { // Empezamos con el primero v[i] y el segundo v[i+1].
        for (int j=i+1; j<m; j++) { // Acabamos con el penúltimo v[n-2]  el último v[n-1].
            if (w[i]!=w[j]) { // Si el primer elemento es mayor se intercambian posiciones.
               m2++;
            }
        }
    }
    // NUEVOS VECTORES A2 Y B2 TRAS DESCARTAR REPETIDOS.
    // Vector A
    int a[n2];
    for (int i=0, x=1; i<(n2-1); i++) { // x será el índice en que irán los números en el nuevo vector.
        for (int j=i+1; j<n2; j++) {
            if (v[i]!=v[j]) { // Si los números consecutivos son diferentes se agrega
               n2++;          // el elemento v[i] al nuevo vector.
            }
        }
    } 
       
        
    system("PAUSE");
    return 0;
}
