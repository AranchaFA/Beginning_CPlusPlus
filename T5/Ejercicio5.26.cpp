#include <iostream>
#include <string>
#include <string.h>
using namespace std;

/* 5.26
   Programa que nos dice si un nombre est√° en un vector 
   iniciado con una serie de nombres*/
int main () {
    //Esto es un arreglo bidimensinal
	//el primer corcheta es la cantidad de nombres
	//el segundo corchete es el tamano maximo de caracteres por cada nombre
	char nombres[4][10]={"jose","maria","rosa","sara"};
    char nombre[10];
    
    cout << "Introduzca un nombre (sin mayusculas ni tildes): ";
    cin >> nombre;
    cout << endl << endl;
    
    int esta=1; // 1 si no est·, si est· lo cambiaremos a 0.
    for (int i=0; i<10 && esta==1; i++) {
        if (strcmp(nombre,nombres[i])==0) esta=0;
    }
    if (esta==0) cout << "El nombre se encuentra en la lista." << endl;
    else cout << "El nombre NO se encuentra en la lista." << endl;
    
    
    cout << endl << endl << endl;
    
/*------------------------------------------------------------------------------------------------------------------------- */
    
    // OTRA MANERA DE HACERLO CON TIPO string Y NO char.
    
    string nombres2[10]={"Arancha", "Maria", "Jose", "Raquel", "Juan", "Lidia", "Mateo", "Daniel", "Ana", "Pedro"};
    string n;
    
    cout << "Introduzca un nombre (respete las may√∫sculas, sin tildes): ";
    cin >> n;
    cout << endl << endl;
    
    int si=1; // 1 si no est·, si est· lo cambiaremos a 0.
    for (int i=0; i<10 && si==1; i++) {
        if (nombres2[i]==n) si=0;
    }
    if (esta==0) cout << "El nombre se encuentra en la lista." << endl;
    else cout << "El nombre NO se encuentra en la lista." << endl;
    
    
    system("PAUSE");
    return 0;
}
