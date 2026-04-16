#include <stdio.h>

int main(){
    int L, D, K, P;
    int valorTotal, valorPedagio, valorKmRodado;
    
    scanf("%d%d%d%d", &L, &D, &K, &P);
    
    /*valor do pedagio sera a quantidade de pedagios que será passada nos
    L km. Como tem pedagio a cada D km. A quantidade de pedagios será L/D
    (se atentar ao detalhe que é a parte inteira da divisao ja que não vai 
    acontecer de pagar uma fraçao de pedagio)
    Como L e D são inteiros so a parte inteira da divisao vai ser retornada
    da operação
    */
    valorPedagio = (L/D) * P;
    valorKmRodado = L * K;
    valorTotal = valorKmRodado+ valorPedagio;
    
    printf("%d\n", valorTotal);
    
    return 0;
}
