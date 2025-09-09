
#include <stdio.h>

int main() {
    
    float peso, altura, IMC;
    
    printf("Cálculo de IMC\n\n");
    
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    
    printf("\nDigite a sua altura: ");
    scanf("%f", &altura);
    
    printf("\n\nInformacoes:\n");
    
    printf("\nPeso: %.0f", peso);
    printf("\nAltura: %.2f", altura);
    
    IMC = peso / (altura * altura);
    
    printf("\n\nSeu IMC e: %.1f", IMC);
    
    if (IMC < 16) {
        printf("\n\nMagreza grave");
    } else if (IMC > 16 && IMC <17) {
        printf("\n\nMagreza moderada");
    } else if (IMC > 17 && IMC < 18.5) {
        printf("\n\nMagreza leve");
    } else if (IMC > 18.5 && IMC < 25) {
        printf("\n\nSaudavel");
    } else if (IMC > 25 && IMC < 30) {
        printf("\n\nSobrepeso");
    } else if (IMC > 30 && IMC < 35) {
        printf("\n\nObesidade grau I");
    } else if (IMC > 35 && IMC < 40) {
        printf("\n\nObesidade grau II");
    } else if (IMC > 40) {
        printf("\n\nObesidade grau III");
    }

    return 0;
}