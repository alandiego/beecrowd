#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>
#include <ctype.h>
#include <algorithm>
#include <utility>
#include <iostream>
using namespace std;

int main(){
    int cem=0, cinq=0, vinte=0, dez=0, cinco=0, dois=0, um=0;
    int val;
    cin >> val;
    printf("%d\n", val);
    
    while (val - 100 >= 0){
        cem++;
        val-=100;
    }
    while (val - 50 >= 0){
        cinq++;
        val-=50;
    }
    while (val - 20 >= 0){
        vinte++;
        val-=20;
    }
    while (val - 10 >= 0) {
        dez++;
        val-=10;
    }
    while (val - 5 >= 0) {
        cinco++;
        val-=5;
    }
    while (val - 2 >= 0) {
        dois++;
        val-=2;
    }
    while (val - 1 >= 0) {
        um++;
        val-=1;
    }
    
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinq);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}
