#include <stdio.h>
 
 
void calcula_hora(int x1, int y1, int x2, int y2, int *hora, int *min);


int main() {
    int x1, x2, y1, y2, hora, min;
    scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
    calcula_hora(x1, x2, y1, y2, &hora, &min);
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);

    return 0;
}

void calcula_hora(int x1, int y1, int x2, int y2, int *hora, int *min){
    int rh, rm;
    if (x1 == x2 && y1 == y2 ){
        *hora = 24;
        *min = 0;
    } else if (x1 <= x2 ) {
        *hora = x2 - x1;
        if (y1 <= y2){
            *min = y2-y1;
        } else {
            if(*hora==0)
                *hora=24;
            *hora-=1;
            *min = 60 + (y2-y1);
        }
    } else {
        *hora = 24 + (x2 - x1);
        if (y1 <= y2){
            *min = y2-y1;
        } else {
            if(*hora==0)
                *hora=24;
            *hora-=1;
            *min = 60 + (y2-y1);
        }
    }
    
}
