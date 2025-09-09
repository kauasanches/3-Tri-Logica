
#include <stdio.h>
#include <stdbool.h>


int main()
{
    float nota1;
    float nota2;
    float nota3;
    
    float soma;
    
    float resultado;
    
    bool jaAsNotas = false;
    
    printf("Sistema para calcular média de notas\n\n");
    
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    
    printf("\nDigite a sua segunda nota: ");
    scanf("%f", &nota2);
    
    printf("\nDigite a sua terceira nota: ");
    scanf("%f", &nota3);
    
    printf("\nNota um: %.1f\n", nota1);
    printf("Nota dois: %.1f\n", nota2);
    printf("Nota tres: %.1f\n", nota3);
    
    if (jaAsNotas == false) {
        soma = nota1 + nota2 + nota3;
        resultado = soma / 3;
    }
    
    printf("Sua media e: %.1f", resultado);

    return 0;
}