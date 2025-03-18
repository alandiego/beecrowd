#include <stdio.h>
 
int main() {
    int tipo_cha;
    int participante;
    int acertos =0;
    int i=0;
    
    scanf("%d", &tipo_cha);
    
    for (i=0; i < 5; i++){
        scanf("%d",&participante);
        if (participante == tipo_cha)
            acertos++;
    }
 
    printf("%d\n",acertos);

 
    return 0;
}
