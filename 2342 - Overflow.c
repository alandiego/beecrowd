#include <stdio.h>

int main(){
    int N, P, Q;
    char C;
    int resp;
    
    
    scanf("%d%d %c %d", &N, &P, &C, &Q);
    
    if (C == '+'){
        resp = P + Q;
    } else {
        resp = P * Q;
    }
    
    if (resp > N){
        printf("OVERFLOW\n");
    } else {
        printf("OK\n");
    }
    
    return 0;
}
