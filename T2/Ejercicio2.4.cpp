#include <iostream>
#include <stdlib.h.>
#include <cmath>
using namespace std;

int main () {
    int a,b,c;
    
    a=3;
    b=20;
    c=a+b;
    b=a+b;
    a=b;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    system("PAUSE");
    return 0;
}
