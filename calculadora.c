
#include <stdio.h>

float num1, num2, soma, subtracao, multi, divisao;

int operacao;

void somar(){
    soma = num1 + num2;
    printf("\nA soma dos numeros e: %.1f", soma);
}

void subtrair(){
    subtracao = num1 - num2;
    printf("A subtracao dos numeros e: %.1f", subtracao);
}

void multiplicar(){
    multi = num1 * num2;
    printf("A multiplicacao dos numeros e: %.1f", multi);
}

void dividir(){
    if(num2 <= 0) {
        return;
    } else {
        divisao = num1 / num2;
    }
    printf("A divisao e: %.1f", divisao);
}

int main()
{
    printf("--- + - Calculadora * / ---\n\n");
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("\n\nDigite o numero da operacao que deseja fazer: \n\n");
    
    printf("Digite (1) para somar os numeros\n");
    printf("Digite (2) para subtrair os numeros\n");
    printf("Digite (3) para multiplicar os numeros\n");
    printf("Digite (4) para dividir os numeros\n");
    printf("Digite (0) para sair do programa.\n\n");
    
    scanf("%d", &operacao);
    
    if (operacao == 1) {
        somar();
    } else if (operacao == 2) {
        subtrair();
    } else if (operacao == 3) {
        multiplicar();
    } else if (operacao == 4) {
        dividir();
    } else if (operacao == 0) {
        printf("\nSaindo da Calculadora...");
        return 0;
    }
    
}
