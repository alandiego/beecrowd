#include <stdio.h>
 
int main() {
    float n1, n2, n3, n4, media, ef, mf;
    
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    
    media = (n1*2+n2*3+n3*4+n4)/10;
    
    printf("Media: %.1f\n", media);
    
    if (media>=7.0){
        printf("Aluno aprovado.\n");
    } else if (media < 5.0){
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        scanf("%f", &ef);
        printf("Nota do exame: %.1f\n", ef);
        mf = (ef+media)/2;
        if (mf>=5.0){
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", mf);
    }
   
    return 0;
}
