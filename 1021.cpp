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
    int cem=0, cinq=0, vinte=0, dez=0, cinco=0, dois=0;
    int m100=0, m50=0, m25=0, m10=0, m5=0, m1=0;
    int nota, moeda;
    scanf("%d.%d", &nota, &moeda);
    
        while (nota - 100 >= 0){
        cem++;
        nota-=100;
    }
    while (nota - 50 >= 0){
        cinq++;
        nota-=50;
    }
    while (nota - 20 >= 0){
        vinte++;
        nota-=20;
    }
    while (nota - 10 >= 0) {
        dez++;
        nota-=10;
    }
    while (nota - 5 >= 0) {
        cinco++;
        nota-=5;
    }
    while (nota - 2 >= 0) {
        dois++;
        nota-=2;
    }
    while (nota - 1 >= 0) {
        m100++;
        nota-=1;
    }
    
    
    while (moeda - 50 >= 0){
        m50++;
        moeda-=50;
    }
    while (moeda - 25 >= 0){
        m25++;
        moeda-=25;
    }
    while (moeda - 10 >= 0) {
        m10++;
        moeda-=10;
    }
    while (moeda - 5 >= 0) {
        m5++;
        moeda-=5;
    }
    while (moeda - 1 >= 0) {
        m1++;
        moeda-=1;
    }
    

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinq);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m100);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m1);


    return 0;
}
