#include <stdio.h>
 
int main() {
 
    int N, S[505];;
    int sol=1, i, atual=1, v;

    scanf("%d", &N);
    
    for (i=0; i<N; i++){
        scanf("%d", &v);
        if (v!=atual){
            sol++;
            if (atual == 1)
                atual = 2;
            else
                atual =1;
        }
    }
    printf("%d\n", sol);
 
    return 0;
}
