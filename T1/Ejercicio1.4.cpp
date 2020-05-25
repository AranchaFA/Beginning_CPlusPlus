#include <iostream>
#include <stdlib.h.>
#include <cmath>
using namespace std;

int main () {
    float n1,n2,n3,n4,n5;
    
    cout << "Intruduzca n1: " << endl;
    cin >> n1;
    cout << "Intruduzca n2: " << endl;
    cin >> n2;
    cout << "Intruduzca n3: " << endl;
    cin >> n3;
    cout << "Intruduzca n4: " << endl;
    cin >> n4;
    cout << "Intruduzca n5: " << endl;
    cin >> n5;
    
    float media=(n1+n2+n3+n4+n5)/5;
    float sumatorio=pow((n1-media),2)+pow((n2-media),2)+pow((n3-media),2)+pow((n4-media),2)+pow((n5-media),2);
    float desviacion=sqrt((1/4)*sumatorio);
    
    cout << "La desviación estándar es: " << desviacion << endl;
        
    system("PAUSE");
    return 0;
}
