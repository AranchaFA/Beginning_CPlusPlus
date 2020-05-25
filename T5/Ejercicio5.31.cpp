#include <iostream>
using namespace std;

/*  5.31

Estructura: tiempo empleado por un cilista en una etapa. 3 campos:
    *) Horas
    *) Minutos
    *) Segundos
    
Programa: Damos un vector con los tiempos de un ciclista en cada etapa.
          Nos devuelve el tiempo total.
*/

struct etapa {int horas; int minutos; int segundos;}; // DECLARARLO FUERA DEL MAIN()!!!!!

int main () {
    etapa tour [3]={{1, 30, 15},
                    {2, 15, 45},
                    {1, 15, 00}};
    
    etapa total[1]={0, 0, 0};
    for (int i=0; i<3; i++){
        total[0].horas += tour[i].horas;
        total[0].minutos += tour[i].minutos;
        total[0].segundos += tour[i].segundos;
    }
    // Mostramos el vector sin adecentar
        cout << "Horas: " << total[0].horas << endl;
        cout << "Minutos: " << total[0].minutos << endl;
        cout << "Segundos: " << total[0].segundos << endl;
        cout << endl << endl;
    
    // Adecentamos el vector pasando los minutos en exceso a horas y los segundos en exceso a minutos
    while (total[0].segundos>=60) { // Cuando 60 segundos o más
        total[0].segundos -= 60; // Restamos 60 segundos
        total[0].minutos += 1;   // Sumamos un minutos
    }
    while (total[0].minutos>=60) { // Cuando 60 minutos o más
        total[0].minutos -= 60; 
        total[0].horas += 1;   
    }
    
    // Mostramos el vector bien ajustado
        cout << "Horas: " << total[0].horas << endl;
        cout << "Minutos: " << total[0].minutos << endl;
        cout << "Segundos: " << total[0].segundos << endl;

    
    
    system("PAUSE");
    return 0;
}
