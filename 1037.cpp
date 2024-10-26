#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    double val;
    
    cin >> val;
    
    if (val>=0 && val<=25){
        printf("Intervalo [0,25]\n");
    } else if (val>25 && val<=50){
        printf("Intervalo (25,50]\n");
    } else if (val>50 && val<=75){
        printf("Intervalo (50,75]\n");
    } else if (val>75 && val<=100){
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }
 
    return 0;
}
