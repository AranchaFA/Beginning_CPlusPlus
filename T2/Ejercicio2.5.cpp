#include <iostream>
#include <stdlib.h.>
#include <cmath>
using namespace std;

int main () {
    int a,b,c;
    
    cout << "Introduce a: " << endl;
    cin >> a;
    cout << "Introduce b: " << endl;
    cin >> b;
    
    c=a;
    a=b;
    b=c;
    
    cout << "Nueva a: " << a << " Nueva b: " << b << endl;
    
        
    system("PAUSE");
    return 0;
}    
