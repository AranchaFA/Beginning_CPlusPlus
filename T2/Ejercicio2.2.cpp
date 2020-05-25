#include <iostream>
#include <cmath>
#include <stdlib.h.>
using namespace std;

int main () {
    double result;

    result=3.0*5.0;
    cout << "result = 3.0 * 5.0: " << result << endl;
    
    double x=2.0,y=3.0;
    result=pow(x,y)-x;
    cout << "result = pow(x(=2.0),y(=3.0))-x(=2.0): " << result << endl;
    
    x=2.0;
    result=4.0;
    result=result*x;
    cout << "result = result(=4.0) * x (=2.0): " << result << endl;
    
    system("PAUSE");
    return 0;
}
