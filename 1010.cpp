#include <stdio.h>
 
int main() {
    int x, y, qtd1, qtd2;
    double vp1, vp2, result;
    
    scanf("%d %d %lf", &x, &qtd1, &vp1);
    scanf("%d %d %lf", &y, &qtd2, &vp2);
    
    result = (qtd1*vp1)+(qtd2*vp2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", result); 
    return 0;
}
