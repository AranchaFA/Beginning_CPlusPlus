#include <iostream>
#include <string.h>
using namespace std;

// 6.13  

/* DESCRIPCIÓN:      Nos dice la letra asociada a un número de DNI.
   ENTRADA:          Número entero (int num).
   SALIDA:           Letra asociada (char a).       
   PRECONDICIONES:   El número debe tener 8 dígitos.
   VALOR DE RETORNO: La letra asociada a ese número de DNI.
   
   El parámetro de entrada no se modificará por lo que se declarará el parámetro formal como const,
   y lo pasamos por parámetro.
   
*/

char letradni(const int& n, char a) {
    if (n>1000000 && n<99999999) { // Puede empezar por 0 así que debemos partir de 10^6 y no 10^7
            if (n%23==0) a='T';
            else if (n%23==1) a='R';
            else if (n%23==2) a='W';
            else if (n%23==3) a='A';
            else if (n%23==4) a='G';
            else if (n%23==5) a='M';
            else if (n%23==6) a='Y';
            else if (n%23==7) a='F';
            else if (n%23==8) a='P';
            else if (n%23==9) a='D';
            else if (n%23==10) a='X';
            else if (n%23==11) a='B';
            else if (n%23==12) a='N';
            else if (n%23==13) a='J';
            else if (n%23==14) a='Z';
            else if (n%23==15) a='S';
            else if (n%23==16) a='Q';
            else if (n%23==17) a='V';
            else if (n%23==18) a='H';
            else if (n%23==19) a='L';
            else if (n%23==20) a='C';
            else if (n%23==21) a='K';
            else if (n%23==22) a='E';
        }
    return a;
}

// PROGRAMA QUE SOLICITE UN DNI HASTA QUE LA LETRA ASOCIADA SEA CORRECTA
    
int main () {
    int numero;
    char letra;
    char a; // Variable para introducir en la función y comparar con la letra introducida
    
    cout << letradni(numero,a);
    
    do {
        cout << "Introduzca los 8 digitos de su DNI: ";
        cin >> numero;
        cout << endl;
        
        cout << "Introduzca la letra: ";
        cin >> letra;
        cout << endl;
    } while (letra!=letradni(numero,a));
    
    system("PAUSE");
    return 0;
}
