#include <stdio.h>
 
int main() {
    char nome[100];
    double mtotal, sfixo, salario;
    
    fgets(nome, 100, stdin);
    scanf("%lf", &sfixo);
    scanf("%lf", &mtotal);    
    
    salario = sfixo + (mtotal*0.15);
    
    printf("TOTAL = R$ %.2lf\n", salario); 
    return 0;
}
