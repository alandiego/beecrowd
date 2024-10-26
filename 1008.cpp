#include <stdio.h>
 
int main() {
    int num, horas;
    double phora, sol;
    
    scanf("%d", &num);
    scanf("%d", &horas);
    scanf("%lf", &phora);    
    
    sol = horas*phora;
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", sol); 
    return 0;
}
