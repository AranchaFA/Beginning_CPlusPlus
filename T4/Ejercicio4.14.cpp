#include <iostream>
#include <cmath>
using namespace std;

int main () {
    // Compa��a de seguros.
    int edad, registro;
    char sexo;
    double menor25=0, mujeres=0, hombres1825=0, total=0, jienenses=0, foriatos=0;
    
    do {
    cout << "Introduzca edad (18 o m�s; 0 para finalizar): ";
    cin >> edad;
    
    if (edad<18 && edad!=0) {
       cout << "Edad no v�lida, debe ser mayor de edad (18 a�os o m�s)." << endl;
    }
    else if (edad>=18) {
       cout << "Introduzca sexo (M o F): ";
       cin >> sexo;
       if (sexo!='M' && sexo!='F') {
          cout << "Sexo no v�lido, debe ser M o F." << endl;
       }
       else if (sexo=='M' || sexo=='F') {
          cout << "Introduzca 1 si est� registrado en Ja�n o 0 si est� registrado en otra parte: ";
          cin >> registro;
          if (registro!=1 && registro!=0) {
            cout << "Registro no v�lido, debe ser 1 o 0." << endl; 
          }
          else if (registro==1 || registro==0) {
            if (registro==1) jienenses++; // Si es de Ja�n
            else foriatos++; // Si es de fuera de Ja�n
          }
          if (sexo=='M' && edad<=25 && edad>=18) hombres1825++; //Hombre 18-25 a�os.
          else if (sexo=='F') mujeres++; //Mujer (cualquier edad).
       }
       if (edad<25) menor25++; //Menores de 25 (cualquier sexo).
       total++; //Sumamos uno al total de conductores registrados.  
    }
    } while (edad!=0);
    
    
    cout << "Porcentaje de mujeres: " << (mujeres*100/total) << endl;
    cout << "Porcentaje de menores de 25: " << (menor25*100/total) << endl;
    cout << "Porcentaje de hombres entre 18-25 a�os: " << (hombres1825*100/total) << endl;
    
    system("PAUSE");
    return 0;
}
