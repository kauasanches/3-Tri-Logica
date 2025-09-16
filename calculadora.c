
#include <stdio.h>

void somar(){
    
}

void subtrair(){
    
}

void multiplicar(){
    
}

void dividir(){
    
}

int main()
{
    printf("--- Calculadora ---");
    
    printf("\n\nNão aceita numero com virgula!\n\n");
    
    int num1, num2, soma, subtracao, multi, divisao, operacao;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

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
