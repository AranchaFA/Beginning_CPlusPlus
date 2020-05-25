#include <iostream>
#include <string>
using namespace std;

int main () {
    double media=0;
    struct alumno {string nombre; double nota;};
    // VERSIÓN 1 CON MATRIZ.
    alumno v[10];
    for (int i=0; i<10; i++) {
        cout << "Nombre del alumno Nº " << (i+1) << ": ";
        cin >> v[i].nombre;
        cout << endl << "Nota del alumno Nº " << (i+1) << ": ";
        cin >> v[i].nota;
        media += (v[i].nota/10);
    }
    for (int i=0; i<10; i++) {
        if (v[i].nota>media) {
        cout << v[i].nombre << " tiene una nota superior a la media." << endl;
        }
    }
    // VERSIÓN 2 CON DOS VECTORES.
    string nombre[10];
    double nota[10];
    double media2=0;
    for (int i=0; i<10; i++) {
        cout << "Nombre del alumno Nº " << (i+1) << ": ";
        cin >> nombre[i];
        cout << endl << "Nota del alumno Nº " << (i+1) << ": ";
        cin >> nota[i];
        media2 += (nota[i]/10);
    }
    for (int i=0; i<10; i++) {
        if (nota[i]>media2) {
        cout << nombre[i] << " tiene una nota superior a la media." << endl;
        }
    }
    
    system("PAUSE");
    return 0;
}
