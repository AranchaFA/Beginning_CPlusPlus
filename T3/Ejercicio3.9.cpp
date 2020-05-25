#include <iostream>
using namespace std;

int main () {
    char a;
    
    cout << "Introduzca una letra: " << endl;
    cin >> a;
    
    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u') {
       cout << "La letra introducida es una vocal minúscula" << endl;
    }   
    else {
       cout << "La letra introducida no es una vocal minúscula" << endl; 
    }
    
    
    system("PAUSE");
    return 0;
}
