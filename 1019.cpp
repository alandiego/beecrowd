#include <stdio.h>
 
int main() {
    int entrada;
    int h=-1, m=-1, s=-1;
    
    scanf("%d",&entrada);
    
    h = entrada/(60*60);
    entrada%=(60*60);
    m = entrada/(60);
    s=entrada%(60);
    
    printf("%d:%d:%d\n", h, m, s);
 
 
    return 0;
}
