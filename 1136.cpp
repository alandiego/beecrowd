#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    double x1, x2, rdelta, delta;
    
    cin >> a >> b >> c;
    
    delta =(b*b)-4*a*c;
    
    if (rdelta<0 || a==0 || delta<0){
        cout << "Impossivel calcular" << endl;
        return 0;
    }
    
    rdelta = sqrt(delta);

    x1 = (-b+rdelta)/(2*a);
    x2 = (-b-rdelta)/(2*a); 
    
    printf("R1 = %.5lf\n", x1);
    printf("R2 = %.5lf\n", x2);
    
    return 0;
}
