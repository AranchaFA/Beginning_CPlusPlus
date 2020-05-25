#include <iostream>
using namespace std;

/* EJERCICIO 5.23
   ENTRADAS: Asistentes a cada una de las 5 salas del congreso, para cada uno de los 5 días.
   SALIDAS: *) Total asistentes a cada sala.
            *) Total asistentes cada día.
            *) Media asistentes a cada sala.
            *) Media asistencia diaria.
            
   Haremos una matriz[5][5] --> Filas ~ Día (i)
                            --> Columnas ~ Sala (j)
 */

int main () {
    int i=5, j=5;
    
    double congreso[i][j];
    for (int a=0; a<i; a++) { 
        for (int b=0; b<j; b++) {
        cout << "Asistentes a la sala " << b+1 << " el día " << a+1 << " .";
        cin >> congreso[a][b];
        }
    }
    cout << endl << endl;
    
    // MOSTRAMOS MATRIZ PARA COMPROBAR
    for (int a=0; a<i; a++) { 
        for (int b=0; b<j; b++) {
            cout << congreso[a][b] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    
    /* CALCULAMOS EL TOTAL DE ASISTENTES A CADA SALA.
       Sumando todas los elementos (filas) de cada columna
       Almacenamos los resultados en un vector totals[j] */
    double totals[j];  
    for (int b=0; b<j; b++) {
        totals[b]=0;            // Iniciamos la variable
        for (int a=0; a<i; a++) {
            totals[b]+=congreso[a][b];
        }
    }
    // Mostramos los resultados de cada sala por pantalla.
    for (int b=0; b<j; b++) {
        cout << "En total acudieron " << totals[b] << " congresistas a la sala " << b+1 << endl;
    }
    
    /* CALCULAMOS EL TOTAL DE ASISTENTES CADA DÍA.
       Sumando todas los elementos (columnas) de cada fila
       Almacenamos los resultados en un vector totald[i] */
    double totald[i];  
    for (int a=0; a<i; a++) {
        totald[a]=0;            // Iniciamos la variable
        for (int b=0; b<i; b++) {
            totald[a]+=congreso[a][b];
        }
    }
    // Mostramos los resultados de cada sala por pantalla.
    for (int a=0; a<i; a++) {
        cout << "En total acudieron " << totald[a] << " congresistas el día " << a+1 << endl;
    }

    
    
    system("PAUSE");
    return 0;
}
