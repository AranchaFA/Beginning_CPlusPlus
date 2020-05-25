#include <iostream>
using namespace std;

int main () {
    /* Compañía de seguros. Pide de nuevo los datos mal metidos sin empezar de nuevo 
    desde la edad que es el primer dato que se pide*/
    int edad, registro;
    char sexo;
    double menor25=0, mujeres=0, hombres1825=0, total=0, jienenses=0, foriatos=0;
    
    do {
    cout << "Introduzca edad (18 o más; 0 para finalizar): ";
    cin >> edad;
    
    
    while (edad<18 && edad!=0) {
       cout << "Edad no válida, debe ser mayor de edad (18 años o más):" << endl;
       cin >> edad;
    }
    if (edad>=18) {
       cout << "Introduzca sexo (M o F): ";
       cin >> sexo;
       while (sexo!='M' && sexo!='F') {
          cout << "Sexo no válido, debe ser M o F:" << endl;
          cin >> sexo;
       }
       if (sexo=='M' || sexo=='F') {
          cout << "Introduzca 1 si está registrado en Jaén o 0 si está registrado en otra parte: ";
          cin >> registro;
          while (registro!=1 && registro!=0) {
            cout << "Registro no válido, debe ser 1 o 0:" << endl; 
            cin >> registro;
          }
          if (registro==1) jienenses++; // Si es de Jaén
          else foriatos++; // Si es de fuera de Jaén
       }
       if (sexo=='M' && edad<=25 && edad>=18) hombres1825++; //Hombre 18-25 años.
       else if (sexo=='F') mujeres++; //Mujer (cualquier edad). 
       if (edad<25) menor25++; /*Menores de 25 (cualquier sexo).Hay que sumarlo
                               dentro del bucle while(edad>=18 && edad!=0) porque
                               si no suma 1 también cuando metemos 0 para finalizar.
                               Si pongo else if en lugar de if a secas NO SUMA porque
                               los H <25 los mete en la 1º condición y las M en la 2º */
       
       total++; /* Sumamos uno al total de conductores registrados, hay que sumarlo
                dentro del bucle while(edad>=18 && edad!=0) porque si no nos suma 1
                también cuando metemos 0 para finalizar */
    }
    
    } while (edad!=0);
    
    
    cout << "Porcentaje de mujeres: " << (mujeres*100/total) << endl;
    cout << "Porcentaje de menores de 25: " << (menor25*100/total) << endl;
    cout << "Porcentaje de hombres entre 18-25 años: " << (hombres1825*100/total) << endl;
    
    system("PAUSE");
    return 0;
}
