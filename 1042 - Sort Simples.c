#include <stdio.h>
#include <stdlib.h>

int comp_crescente (const void *a, const void *b) {
    return (*(int*) a - *(int*) b); 
} 
int comp_decrescente (const void *a, const void *b) {
    return (*(int*) b - *(int*) a); 
} 

int main () {
    int i, vet[3], aux[3];
    for (i = 0; i < 3; i++) {
        scanf("%d", &vet[i]);
        aux[i] = vet[i];
    }
    qsort(aux, 3, sizeof(int), comp_crescente);

    for (i = 0; i < 3; i++) {
        printf("%d\n", aux[i]);
    }

    printf ("\n");

    for (i = 0; i < 3; i++) {
        printf("%d\n", vet[i]);
    }
    
    return 0;
}
