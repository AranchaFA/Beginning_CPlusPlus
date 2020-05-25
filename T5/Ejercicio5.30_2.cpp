#include <iostream>
#include <string>
using namespace std;

/* 5.30 JUEGO DEL AHORCADO

    *)  Menú con 3 opciones: - Introducir la palabra a adivinar
                             - Adivinar palabra (sólo accesible si se ha cumplido la primera opción).
                             - Salir
                             
    *) Aparecerá una cadena formada por guiones (tantos como letras tenga la palabra).
    *) Pediremos que se vayan introduciendo letras: - Si es válida aparecerá en su posición
                                                    - Si no es válida se contabiliza un fallo
    *) El programa termina: - Se han acertado todas las letras
                            - Se han tenido 6 fallos
*/

int main () {
    char letra;
    string palabra;
    char menu;
    
    do {
    cout << "Desea introducir palabra (I), adivinar palabra (A) o salir (S)? ";
    cin >> menu;
    } while (menu!='I' && menu!='A' && menu!='S');

if (menu=='A' && palabra.length()==0) {
    cout << "Debes introducir una palabra antes de adivinar.";
    cout << "Desea introducir palabra (I) o salir (S)? ";
    cin >> menu;
}
    
if (menu=='I') {
    
    do {
        
    do {
    cout << "Introduzca una palabra (en minusculas y sin tildes): ";
    getline (cin >> ws, palabra);
    } while (palabra.length()==0);
    // Ya tendremos palabra.length>0
    cout << "Desea introducir una nueva palabra (I), adivinar palabra (A) o salir (S)? ";
    cin >> menu;
        
    } while (menu=='I');
}

if (menu=='S') cout << "Vuelve a jugar pronto! :)";
    
if (menu=='A' && palabra.length()!=0)  {

    //Ponemos muchos espacios para poder dejar la palabra introducida fuera de la vista
    cout << endl << endl << endl << endl << endl << endl;
    
    // Mostramos tantos guiones como caracteres tiene la palabra EN UN VECTOR
    char adivina[palabra.length()];
    for (int i=0; i<palabra.length(); i++) {
        adivina[i]='_';
        cout << adivina[i] << " ";
    }
    cout << endl << endl;
    
    char dichas[27]; // Número de letrás del abecedario. Almacenaremos las letras que están dichas para no repetir.
    int n=0; // Nos apoyaremos en ella para ir almacenando las dichas
    int repetida=0; // Será 1 si está repetida.
    int fallos=0, aciertos=0;
    while (fallos<6 && aciertos<=palabra.length()) {
        do {
            cout << "Introduzca una letra: ";
            cin >> letra;
            
            repetida=0; // Será 1 si está repetida.
            for (int k=0; k<n; k++){
                if (dichas[k]==letra) {
                   repetida=1;
                   cout << "Esa letra esta repetida!! " << endl;
                }
            }
            if (repetida==0) { // Si no está repetida la guardamos en el vector de dichas
               dichas[n]=letra; // y sumamos 1 a la cantidad de letras dichas
               n++; 
            }
        } while (repetida==1);     
    
        
        int noesta=0; // Contamos con cuantas letras no concuerda la introducida
        for (int i=0; i<palabra.length(); i++) {
            if (palabra[i]==letra) { // Aquí no puede ir el comentario de felicitación "caliente caliente!"
                aciertos++;          // porque se repetirá tantas veces como la letra se repita en la palabra
                adivina [i]=letra;
            }
            else noesta++;
        }
        if (noesta==palabra.length()) {
            fallos++; // Si no concuerda con ninguna, sumamos un fallo
            cout << endl << "Frio frio!! Esa letra no esta... " << endl;
        }
        else cout << "Caliente caliente!! Esa letra si esta." << endl; 

        // Mostramos el vector adivina con las letras acertadas ya puestas
        for (int j=0; j<palabra.length(); j++) {
        cout << adivina[j] << " ";
        }
        cout << endl << endl;
        
        
        }
    if (aciertos==palabra.length()) cout << "FELICIDADES! Adivinaste la palabra.";
    else if (fallos==6) cout << "LO SIENTO! La palabra era " << palabra <<". Intentalo de nuevo! :) ";    
    
}// Cerramos el if inicial
    system("PAUSE");
    return 0;
}
