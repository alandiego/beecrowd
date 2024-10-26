#include <stdio.h>
 
int main() {
    int codigo, qtd;
    
    scanf("%d %d", &codigo, &qtd);
    
    switch (codigo){
        case 1:
            printf("Total: R$ %.2f\n",qtd*4.0);
            break;
        case 2:
            printf("Total: R$ %.2f\n",qtd*4.5);
            break;
        case 3:
            printf("Total: R$ %.2f\n",qtd*5.0);
            break;
        case 4:
            printf("Total: R$ %.2f\n",qtd*2.0);
            break;
        case 5:
            printf("Total: R$ %.2f\n",qtd*1.5);
            break;
    }
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}
