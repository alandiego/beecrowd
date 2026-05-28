#include <stdio.h>
#include <string.h>

int main()
{
    int n, qtdMinas, i;
    int vet[55];
    
    scanf("%d", &n);
    
    memset(vet, 0, sizeof(vet));
    
    for (i = 1; i <= n; i++){
        scanf("%d", &vet[i]);
    }
    
    for(i = 1; i <= n; i++){
        qtdMinas = vet [i-1] + vet[i] + vet[i+1];
        printf("%d\n", qtdMinas);
    }

    return 0;
}
