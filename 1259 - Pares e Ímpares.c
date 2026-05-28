#include <stdio.h>
#include <stdlib.h>

int comp_crescente(const void *a, const void *b){
    return (*(int *)a - *(int*)b);
}
int comp_decrescente(const void *a, const void *b){
    return (*(int *)b - *(int*)a);
}


int main()
{
	int n, i;
	scanf("%d", &n);
	int vet[n];

	for(i = 0; i < n; i++) {
		scanf("%d", &vet[i]);
	}

	qsort(vet, n, sizeof(int), comp_crescente);

	for(i = 0; i < n; i++) {
        if(vet[i] % 2 == 0){
            printf("%d\n", vet[i]);
        }	    
	}
	
	qsort(vet, n, sizeof(int), comp_decrescente);
	
	for(i = 0; i < n; i++) {
        if(vet[i] % 2 != 0){
            printf("%d\n", vet[i]);
        }	    
	}

	return 0;
}
