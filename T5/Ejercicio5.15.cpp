#include <iostream>
using namespace std;

int main () {
    int v[100]; // Definimos un valor suficientemente grande para que sobre.
    int par=0, impar=0; // Contadores del número de pares e impares que hay.
    int n=par+impar;; // Número de valores que vamos introduciendo en v.
 
 // INTRODUCIMOS LOS VALORES Y VAMOS UBICANDO PARES AL INICIO E IMPARES AL FINAL.   
    int cont; // Hay que declararla fuera, porque dentro se 'pierde' al salir del do al while.
    do { int dato;
        cout << "Introduzca valor: ";
        cin >> dato;
        if (dato%2==0) { // Si es par se irán ordenando desde las posiciones iniciales.
           v[par]=dato;  // Se suma a la posición inicial (0) el número de pares ya guardados.
           par++;
        }
        else {                   // Si es impar se irán ordenando desde las posiciones finales.
           v[100-1-impar]=dato;  // Se resta a la posición final (100-1) el número de impares ya guardados.
           impar++;
        }
        // int cont;  Para permitirnos decirle al bucle que finalice.
        cout << "Introduzca 0 para finalizar: ";
        cin >> cont;
    } while (cont!=0); // Reiniciaremos el bucle mientras no introduzcamos 0 al preguntar.
    
 /* SI MOSTRAMOS EN PANTALLA EL VECTOR COMPLETO SALEN LOS 'NÚMEROS RAROS' DE LOS HUECOS QUE QUEDARON
    POR EL MEDIO AL SER 100 VALORES EN TOTAL Y SÓLO HABER INTRODUCIDO UNOS POCOS ELEMENTOS
    
    cout << "El vector: " << endl;
    for (int i=0; i<(100); i++) {
    cout << v[i] << ", ";
    } 
 */
    
// MOVEMOS LOS VALORES PARES DEL FINAL A INMEDIATAMENTE DESPUÉS DE LOS PARES.    
    for (int i=1; i<=impar; i++) { // El número de pares que tenemos
        v[par-1+i]=v[100-i]; // El hueco detrás de los pares iniciales y de los impares ya reubicados=
                             // =el "último" impar que va quedando en la cola en cada momento.
        v[100-i]=v[100-1-impar]; // Primer hueco vacío por la cola del vector, para dejar vacíos los
                                 // huecos que ocupaban los impares reubicados.
    }
    
    // MOSTRAMOS EN PANTALLA PARA COMPROBAR QUE ES CORRECTO.
    cout << "El vector ordenado: " << endl;
    for (int i=0; i<(par+impar); i++) {
    cout << v[i] << ", ";
    }
    
    system("PAUSE");
    return 0;
}
