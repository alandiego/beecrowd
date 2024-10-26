#include <stdio.h>
 
int main() {
 
    int entrada;
    int a=-1, m=-1, d=-1;
    
    scanf("%d",&entrada);
    
    a = entrada/(365);
    entrada%=(365);
    m = entrada/(30);
    d=entrada%(30);
    
    printf("%d ano(s)\n", a);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);
    return 0;
}
