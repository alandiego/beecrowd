#include <stdio.h>


int main(){

    int P1, P2, C1, C2;
    
    scanf("%d%d%d%d", &P1 , &C1 , &P2 , &C2);
    
    int equilibrio = P1*C1 - P2*C2;
    
    if (equilibrio == 0)
        printf("0\n");
    else if (equilibrio<0)
        printf("1\n");
    else
        printf("-1\n");
    
    return 0;
}
