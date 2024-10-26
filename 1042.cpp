#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

int comparador2(const void *a, const void *b) {
   if (*(int*)a > *(int*)b) {
      return 1;
   } else if (*(int*)a < *(int*)b) {
      return -1;
   } else {
      return 0;
   }
}

int main () {
    int i, val[3], v2[3];
   
   
    scanf("%d%d%d",&val[0],&val[1],&val[2]);

     for( i = 0 ; i < 3; i++ ) {
        v2[i] = val[i];
    }


    //ordena o array
    qsort(val, 3, sizeof(int), comparador);

    //mostra os valores do array
    for( i = 0 ; i < 3; i++ ) {
        printf("%i\n", val[i]);
    }
    
    printf("\n");
    
    //mostra os valores do array
    for( i = 0 ; i < 3; i++ ) {
        printf("%i\n", v2[i]);
    }


   return(0);
}
