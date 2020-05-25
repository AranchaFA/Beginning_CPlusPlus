#include <iostream>
using namespace std;

// EJERCICIO 5.13
int main () {
    int na=1000, nb=1000; // Tamaños de los vectores lo suficientemente grandes, luego los ajustaremos.
    int a[na], b[nb];
    
    // INTRODUCIMOS LOS VECTORES, DESCARTANDO LOS VALORES REPETIDOS.
    // Vector A.
    cout << "Introduzca valor del vector A: ";
    cin >> a[0];
    int na1=1; // Número de elementos que se van metiendo en el vector ("tamaño real").
    int cont; // Hay que declararla fuera, porque dentro se 'pierde' al salir del do al while.
    do { int dato;
        cout << "Introduzca valor del vector A: ";
        cin >> dato;
        int repetido=1; // Si está repetido valdrá 0.
        for (int j=0; j<na1 && repetido==1; j++) {
            if (dato==a[j]) {
               repetido=0; // Verdadera la condición de estar repetido.
            }
        }
        if (repetido==1) {
           na1++; // Sumamos uno al número de elementos del vector.
           a[na1-1]=dato; // El úndice será el número de elementos totales -1.
        }
        // int cont;  Para permitirnos decirle al bucle que finalice.
        cout << "Introduzca 0 para finalizar: ";
        cin >> cont;
    } while (cont!=0); // Reiniciaremos el bucle mientras no introduzcamos 0 al preguntar.
    
    // Vector B.
    cout << "Introduzca valor del vector B: ";
    cin >> b[0];
    int nb1=1; // Número de elementos que se van metiendo en el vector ("tamaño real").
    // int cont; ya está declarada antes de introducir A y es una variable general.
    do { int dato;
        cout << "Introduzca valor del vector B: ";
        cin >> dato;
        int repetido=1; // Si está repetido valdrá 0.
        for (int j=0; j<nb1 && repetido==1; j++) {
            if (dato==b[j]) {
               repetido=0; // Verdadera la condición de estar repetido.
            }
        }
        if (repetido==1) {
           nb1++; // Sumamos uno al número de elementos del vector.
           b[nb1-1]=dato; // El úndice será el número de elementos totales -1.
        }
        // int cont;  Para permitirnos decirle al bucle que finalice.
        cout << "Introduzca 0 para finalizar: ";
        cin >> cont;
    } while (cont!=0); // Reiniciaremos el bucle mientras no introduzcamos 0 al preguntar.

    // MOSTRAMOS EN PANTALLA PARA COMPARARLOS CON EL RESULTADO.
    cout << "El vector A es: " << endl;
    for (int i=0; i<na1; i++) {
        cout << a[i] << ", ";
    }
    cout << endl << "El vector B es: " << endl;
    for (int i=0; i<nb1; i++) {
    cout << b[i] << ", ";
    }
    
    // VAMOS A ORDENAR LOS ELEMENTOS DE LOS VECTORES DE MENOR A MAYOR.
    // Vector A
    for (int i=0; i<(na1-1); i++) { // Empezamos con el primero v[i] y el segundo v[i+1].
        for (int j=i+1; j<na1; j++) { // Acabamos con el penúltimo v[n-2]  el último v[n-1].
            if (a[i]>a[j]) { // Si el primer elemento es mayor se intercambian posiciones.
               int copia=a[i];
               a[i]=a[j];
               a[j]=copia;
            }
        }
    }
    // Vector B
    for (int i=0; i<(nb1-1); i++) { // Empezamos con el primero v[i] y el segundo v[i+1].
        for (int j=i+1; j<nb1; j++) { // Acabamos con el penúltimo v[n-2]  el último v[n-1].
            if (b[i]>b[j]) { // Si el primer elemento es mayor se intercambian posiciones.
               int copia=b[i];
               b[i]=b[j];
               b[j]=copia;
            }
        }
    }
    // MOSTRAMOS EN PANTALLA PARA COMPROBAR QUE ES CORRECTO.
    cout << endl << endl << "El vector A ordenado: " << endl;
    for (int i=0; i<na1; i++) {
    cout << a[i] << ", ";
    }
    cout << endl << "El vector B ordenado: " << endl;
    for (int i=0; i<nb1; i++) {
    cout << b[i] << ", ";
    }

 
// *********** HASTA AQUÍ PERFECTO, LUEGO DA PROBLEMAS RAROS o.O ************

  
    // FUSIONAMOS LOS DOS VECTORES, DESCARTANDO DE A LOS ELEMENTOS REPETIDOS EN B.
    int nc=na1+nb1; // Como máximo C tiene el tamaño de A y B completos.
    int nc1=0; // Cantidad de elementos que vamos introduciendo en C.
    int c[nc];
    
    // Añadimos los elementos no repetidos de A
    for (int i=0; i<(na1); i++) {
        int repetido=1; // Si está repetido será 0.
        for (int j=0; j<(nb1) && repetido==1; j++) {
            if (a[i]==b[j]) repetido=0; // Si está repetido cambiamos el valor.
        }
        if (repetido==1) {
           c[nc1]=a[i];
           nc1++; // Sumamos 1 al número de elementos de C.
        }
    }   
    // Añadimos TODOS los elementos de B, pues los repetidos en A se descartaron.
    for (int i=0; i<(nb1); i++) {
           c[nc1]=b[i];
           nc1++; // Sumamos 1 al número de elementos de C.
    }
    // MOSTRAMOS EN PANTALLA PARA COMPROBAR QUE ES CORRECTO.
    cout << "El vector C es: " << endl;
         for (int i=0; i<nc1; i++) {
         cout << c[i] << ", ";
    }
    
    //YA TENEMOS EL VECTOR C SIN REPETIDOS, AHORA ORDENAMOS.   
    for (int i=0; i<(nc1-1); i++) { // Empezamos con el primero v[i] y el segundo v[i+1].
        for (int j=i+1; j<nc1; j++) { // Acabamos con el penúltimo v[n-2]  el último v[n-1].
            if (c[i]>c[j]) { // Si el primer elemento es mayor se intercambian posiciones.
               int copia=c[i];
               c[i]=c[j];
               c[j]=copia;
            }
        }
    }
    // MOSTRAMOS EN PANTALLA PARA COMPROBAR QUE ES CORRECTO.
    cout << "El vector C ordenado: " << endl;
    for (int i=0; i<nc1; i++) {
    cout << c[i] << ", ";
    }
       
        
    system("PAUSE");
    return 0;
}
