#include <iostream>
using namespace std;

int main () {
    // Programa para 5 alumnos: cuantos aprueban los 3 ex�menes, uno o el �ltimo.
    double nota;
    int todos=0, uno=0, ultimo=0;
    int j,i, aprobado; // i: numero de examen; j: numero de alumno.
    
    for (j=1;j<=5;j++){ // Alumnos del 1 al 5
    i=1; // Comenzamos en el examen n�mero 1.
    aprobado=0; /* Al comenzar de nuevo el ciclo for con el siguiente alumno j
                se reiniciar� el valor de aprobado e i para que al empezar el 
                siguiente ciclo do-while comiencen de 0 y 1 de nuevo */
    do {
        cout << "Alumno n�mero " << j << ", nota del examen n�mero " << i << ": ";
        cin >> nota;
        if (nota>=5 && i!=3) { // Aprobado que NO es del �ltimo examen.
           aprobado++; // Contabilizamos un aprobado a este alumno.
        }
        else if (nota>=5 && i==3 && aprobado!=0) { /* Aprobado del �ltimo examen
                                                   pero con aprobados en alg�n otro */
           aprobado++; // Contabilizamos un aprobado a este alumno.
        }
        else if (nota>=5 && i==3 && aprobado==0) { /* Aprobado del �ltimo examen
                                                   sin aprobados en ning�n otro */
           aprobado++; // Contabilizamos un aprobado a este alumno y 
           ultimo++;   // contabilizamos un alumno que ha aprobado S�LO el �ltimo.
        }
        i++; // Sumamos uno a i para pasar al sieguiente examen de la lista.
    } while (i<=3); // Ex�menes del 1 al 3 (del alumno j en concreto)
    
    // Al finalizar el bucle do-while analizamos los resultados:
    if (aprobado==3) {
       todos++; // Contabilizamos un alumno que aprob� todos. 
       uno++;   // Contabilizamos un alumno que aprob� al menos 1. 
    }
    else if (aprobado==1) {
       uno++;   // Contabilizamos un alumno que aprob� al menos 1. 
    }
    }
    
    cout << todos << " alumnos aprobaron los 3 ex�menes." << endl;
    cout << uno << " alumnos aprobaron AL MENOS un examen." << endl;
    cout << ultimo << " alumnos aprobaron SOLO el �ltimo examen." << endl;
    
    system("PAUSE");
    return 0;
}
