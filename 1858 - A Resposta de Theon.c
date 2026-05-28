#include <stdio.h>
#include <string.h>

int main(){
    int algoz[101];
    int N, x, i, menor=1;
    
    memset(algoz, 0, sizeof(algoz));
    
    scanf("%d", &N);
    
    for (i = 1; i<=N; i++){
        scanf("%d", &algoz[i]);
    }
    
    for (i = 1; i<=N; i++){
        if (algoz[i]<algoz[menor])
            menor = i;
    }
    
    printf("%d\n", menor);
    
    return 0;
}
