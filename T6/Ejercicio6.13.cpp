#include <iostream>
#include <string.h>
using namespace std;

// 6.13  

/* DESCRIPCIÓN:      Nos dice la letra asociada a un número de DNI.
   ENTRADA:          Cadena de caracteres con el número (string num).
   SALIDA:           Letra asociada (char a).       
   PRECONDICIONES:   La cadena de caracteres debe tener 8 elementos y ser dígitos.
   VALOR DE RETORNO: La letra asociada a ese número de DNI.
   
   El parámetro de entrada no se modificará por lo que se declarará el parámetro formal como const,
   y lo pasamos por parámetro.
   
*/

char letradni(const string& num, char& a) { // PONEMOS char& a PORQUE SI NO NO "SACA" EL VALOR FUERA DE LA FUNCIÓN!!!!
    if (num.length()==8) { // La cadena debe tener 8 elementos.
        // Comprobamos que son todo dígitos
        bool correcto=true;
        for (int i=0; i<8; i++) {
          if // Si hay algún elemento de la cadena que es diferente de un dígito
          (num[i]!='0'&&num[i]!='1'&&num[i]!='2'&&num[i]!='3'&&num[i]!='4'&&num[i]!='5'&&num[i]!='6'&&num[i]!='7'&&num[i]!='8'&&num[i]!='9') 
          correcto=false;
        }
        
        if (correcto==true) {
            int n=0; // En esta variable guardaremos el número pasado a tipo entero para poder dividirlo /23
          for (int i=0, j=10000000; i<8; i++) {
                  if (num[i]=='0') n *=0*j; // Sumamos a n el valor del dígito multiplicado por la potencia de 10 correspondiente.
                  else if (num[i]=='1') n*=1*j;
                  else if (num[i]=='2') n*=2*j;
                  else if (num[i]=='3') n*=3*j;
                  else if (num[i]=='4') n*=4*j;
                  else if (num[i]=='5') n*=5*j;
                  else if (num[i]=='6') n*=6*j;
                  else if (num[i]=='7') n*=7*j;
                  else if (num[i]=='8') n*=8*j;
                  else if (num[i]=='9') n*=9*j;

              j/=10;
          }
    /*    if (n%23==0) a='T'; // Según el resto de n/23 determinamos la letra
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
            else if (n%23==22) a='E';    */
            
        string letras= "TRWAGMYFPDXBNJZSQVHLCKE";
        a=letras[n%23];    
        }
    }
    return a;
}

// PROGRAMA QUE SOLICITE UN DNI HASTA QUE LA LETRA ASOCIADA SEA CORRECTA
    
int main () {
    string numero;
    char letra;
    char b; // Variable para introducir en la función y comparar con la letra introducida
    
    cout << "Introduzca los 8 digitos de su DNI: ";
    getline (cin>>ws, numero);
    cout << endl;
        
    cout << "Introduzca la letra: ";
    cin >> letra;
    cout << endl;
     
    b=letradni(numero,b);    
    cout << b;
    cout <<

    
    system("PAUSE");
    return 0;
}
