#include <iostream>
#include <string>
using namespace std;

/* 5.33

Estructura candidato:
    *) Nombre
    *) DNI
    *) Fecha nacimiento

Programa: - Nos pregunta el número de candidatos.
          - Nos pide los datos de cada candidato (mínimo 3).
          - Debe leer y almacenar los votos: 
                0  Voto en blanco
            1...N  Voto para el candidato N
               -1  Fin de recuento
            Otro   Voto nulo
            
Mostrar los votos totales, el nº de votos de cada tipo (con el nombre de cada candidato)
Mostrar el delegado y subdelegado con nombre, DNI y fecha de nacimiento (en caso de empate escoger al azar)
*/

struct fecha {int dia; int mes; int ano;};
struct candidato {string nombre; int DNI; fecha nacim; int numero;};


int main () {
    int n;
    do {cout << "Cuantos candidatos se presentan? (Minimo 3) ";
    cin >> n;
    } while (n<3);
    
    candidato cand[n];
    for (int i=0; i<n; i++) {
        cout << "Candidato " << i+1 << " : " << endl;
        cout << "Nombre: ";
        getline (cin >> ws, cand[i].nombre);
        cout << endl;
        cout << "DNI: ";
        cin >> cand[i].DNI;
        cout << endl;
        cout << "Fecha de nacimiento (dia/mes/ano dando intro tras cada digito): ";
        cin >> cand[i].nacim.dia >> cand[i].nacim.mes >> cand[i].nacim.ano;
        cout << endl;
        cand[i].numero=i+1;
        
    }
/* Construimos un vector votos:
                                *) Posición 0            Blancos (0)
                                *) Posición 1,2,...n     Votos a cada candidato
                                *) Posición n+1          Nulos (nº fuera de rango)
                                TAMAÑO TOTAL n+2
*/
    int votos[n+2];
    for (int i=0; i<n+2; i++) {votos[i]=0;} // Iniciamos todos los elementos en 0 para ir sumando los votos.
    int v;
    int total=0;
    do {
        cout << "Voto: ";
        cin >> v;
        if (v==0) votos[0]++;
        else if (v>0 && v<=n) votos[v]++;
        else if ((v<0 || v>n) && v!=-1) votos[n+1]++;
        if (v!=-1) total++;
    } while (v!=-1);
    
/*  Comparamos los votos a cada candidato para hallar los dos maximos.
*/
    int max1=0, max2=0;
    int del, sub;
    for (int i=1; i<=n; i++) {
        if (votos[i]>max1 && votos[i]>max2) {
            max2=max1;
            max1=votos[i];
            del=i; // del= número asociado al candidato mas votado
        }
        else if (votos[i]>max2 && votos[i]<max1) {
            max2=votos[i];
            sub=i; // sub= numero asociado al segundo mas votado
        }
        
    }
    
    // Mostramos resultados
    cout << "El candidato ganador es " << cand[del].nombre << endl;
    cout << "DNI: " << cand[del].DNI  << endl;
    cout << "Nacido el: " << cand[del].nacim.dia << "/" << cand[del].nacim.mes << "/" << cand[del].nacim.ano << endl << endl;

    cout << "El subdelegado es " << cand[sub].nombre << endl;
    cout << "DNI: " << cand[sub].DNI  << endl;
    cout << "Nacido el: " << cand[sub].nacim.dia << "/" << cand[sub].nacim.mes << "/" << cand[sub].nacim.ano << endl << endl;
            
    cout << votos[0] << "  Votos en blanco." << endl;
    cout << votos[n+1] << "  Votos nulos." << endl;   
    cout << endl << endl << "Votos totales: " << total << endl << endl;
    
    system("PAUSE");
    return 0;
}
