#include <iostream>
using namespace std;

int mdc(int a, int b){
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int mmc(int a, int b){
    int valor = mdc(a, b);
    return a * (b/valor);
}

void simplificacao(int numerador, int denominador){
    int MDC = mdc(numerador, denominador);
    int numeradorF = numerador/MDC;
    int denominadorF = denominador/MDC;
    if (denominadorF <0 ){
        denominadorF *=-1;
        numeradorF *=-1;
    }
    printf("%d/%d\n", numeradorF, denominadorF);
}

void soma_racional(int num1, int deno1, int num2, int deno2){
    int denominador = deno1 * deno2;
    int val_num1 = denominador/deno1 * num1;
    int val_num2 = denominador/deno2 * num2;
    int numerador = val_num1 + val_num2;
    printf("%d/%d=", numerador, denominador);
    simplificacao(numerador, denominador);
}

void subtracao_racional(int num1, int deno1, int num2, int deno2){
    int denominador = deno1 * deno2;
    int val_num1 = denominador/deno1 * num1;
    int val_num2 = denominador/deno2 * num2;
    int numerador = val_num1 - val_num2;
    printf("%d/%d=", numerador, denominador);
    simplificacao(numerador, denominador);
}

void multiplicacao_racional(int num1, int deno1, int num2, int deno2){
    int denominador = deno1 * deno2;
    int numerador = num1 * num2;
    printf("%d/%d=", numerador, denominador);
    simplificacao(numerador, denominador);
}

void divisao_racional(int num1, int deno1, int num2, int deno2){
    int numerador = num1 * deno2;
    int denominador = deno1 * num2;
    printf("%d/%d=", numerador, denominador);
    simplificacao(numerador, denominador);
}


int main()
{
    int num1, deno1, num2, deno2, N;
    char op, lixo;
    
    scanf("%d", &N);
    
   
    
    while(N--){
        cin >> num1 >> lixo >> deno1;
        cin >> op;
        cin >> num2 >> lixo >> deno2;
    
        //cout << N << " " << num1 << lixo << deno1 << " " << num2 << lixo << deno2 << endl;
        
        switch (op) {
            case '+':
                soma_racional(num1, deno1, num2, deno2);
                break;
            case '-':
                subtracao_racional(num1, deno1, num2, deno2);
                break;
            case '*':
                multiplicacao_racional(num1, deno1, num2, deno2);
                break;
            case '/':
                divisao_racional(num1, deno1, num2, deno2);
                break;
        }
    }
    
    return 0;
}
