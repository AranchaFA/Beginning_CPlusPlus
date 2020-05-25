#include <iostream>
using namespace std;

/* EJERCICIO 5.22
   notas[i][j]
   *)  i = estudiante nº i
   *)  j = problema nº j de un examen
   
   peso[j]
   *)  ponderación del problema j de un examen
   
   CONSTRUIR
   alumno[i]
   *)  calificación final del alumno nº i
   
   ---> Matriz i*j multiplicada por Vector j*1 para dar otro Vector i*1 */

int main () {
    int i, j;
    cout << "Número de ejercicios totales del examen: ";
    cin >> j;
    cout << "Número de alumnos presentados al examen: ";
    cin >> i;
    
    double notas[i][j];
    for (int a=0; a<i; a++) { 
        for (int b=0; b<j; b++) {
        cout << "Introduzca la nota del problema nº " << b+1 << " del alumno nº " << a+1;
        cin >> notas[a][b];
        }
    }
    cout << endl << endl;
    
    // MOSTRAMOS MATRIZ PARA COMPROBAR
    for (int a=0; a<i; a++) { 
        for (int b=0; b<j; b++) {
            cout << notas[a][b] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    double pesos[j];
    for (int c=0; c<j; c++) { 
        cout << "Introduzca la ponderación del problema nº " << c+1 << " en la nota total del examen: ";
        cin >> pesos[c];
    }
    cout << endl << endl;
    
    // MOSTRAMOS EL VECTOR PARA COMPROBAR
    for (int c=0; c<j; c++) { 
        cout << pesos[c] << " ";
    }
    cout << endl << endl;
    
    // MULTIPLICAMOS notas[i][j]*pesos[j]
    
    double alumno[i];
    for (int c=0; c<i; c++) { 
        alumno[c]=0;
        for (int k=0; k<j; k++)
            alumno[c]+=notas[c][k]*pesos[k];
    }
    cout << endl << endl;
    
    // MOSTRAMOS MATRIZ PARA COMPROBAR
    for (int d=0; d<i; d++) { 
        cout << "Nota final del alumno " << d+1 << " : " << alumno[d] << endl;
    }
    
    
    system("PAUSE");
    return 0;
}
