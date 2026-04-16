#include <stdio.h>

int main() {
    int n, conta = 7; // valor fixo da assinatura básica
    scanf("%d", &n);

    // Se o consumo for maior que 10, começa a cobrar excedente
    if (n > 10) {

        // Caso 1: consumo entre 11 e 30
        if (n <= 30) {
            // cobra 1 real por cada m³ acima de 10
            conta += (n - 10) * 1;
        } else {
            // já passou de 30, então soma toda a faixa 11-30
            // (20 m³ * 1 real = 20 reais)
            conta += 20;

            // Caso 2: consumo entre 31 e 100
            if (n <= 100) {
                // cobra 2 reais por cada m³ acima de 30
                conta += (n - 30) * 2;
            } else {
                // já passou de 100, então soma toda a faixa 31-100
                // (70 m³ * 2 reais = 140 reais)
                conta += 140;

                // Caso 3: consumo acima de 100
                // cobra 5 reais por cada m³ acima de 100
                conta += (n - 100) * 5;
            }
        }
    }

    // imprime o valor total da conta
    printf("%d\n", conta);

    return 0;
}
