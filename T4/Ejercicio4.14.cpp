#include <iostream>
#include <cmath>
using namespace std;

int main () {
    // Compañía de seguros.
    int edad, registro;
    char sexo;
    double menor25=0, mujeres=0, hombres1825=0, total=0, jienenses=0, foriatos=0;
    
    do {
    cout << "Introduzca edad (18 o más; 0 para finalizar): ";
    cin >> edad;
    
    if (edad<18 && edad!=0) {
       cout << "Edad no válida, debe ser mayor de edad (18 años o más)." << endl;
    }
    else if (edad>=18) {
       cout << "Introduzca sexo (M o F): ";
       cin >> sexo;
       if (sexo!='M' && sexo!='F') {
          cout << "Sexo no válido, debe ser M o F." << endl;
       }
       else if (sexo=='M' || sexo=='F') {
          cout << "Introduzca 1 si está registrado en Jaén o 0 si está registrado en otra parte: ";
          cin >> registro;
          if (registro!=1 && registro!=0) {
            cout << "Registro no válido, debe ser 1 o 0." << endl; 
          }
          else if (registro==1 || registro==0) {
            if (registro==1) jienenses++; // Si es de Jaén
            else foriatos++; // Si es de fuera de Jaén
          }
          if (sexo=='M' && edad<=25 && edad>=18) hombres1825++; //Hombre 18-25 años.
          else if (sexo=='F') mujeres++; //Mujer (cualquier edad).
       }
       if (edad<25) menor25++; //Menores de 25 (cualquier sexo).
       total++; //Sumamos uno al total de conductores registrados.  
    }
    } while (edad!=0);
    
    
    cout << "Porcentaje de mujeres: " << (mujeres*100/total) << endl;
    cout << "Porcentaje de menores de 25: " << (menor25*100/total) << endl;
    cout << "Porcentaje de hombres entre 18-25 años: " << (hombres1825*100/total) << endl;
    
    system("PAUSE");
    return 0;
}
