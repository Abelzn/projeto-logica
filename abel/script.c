#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Escolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &operacao);

    if (operacao == 1) {
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
    } 
    else if (operacao == 2) {
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
    } 
    else if (operacao == 3) {
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);
    } 
    else if (operacao == 4) {
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Erro: Divisao por zero nao e permitida.\n");
        }
    } 
    else {
        printf("Operacao invalida.\n");
    }

    return 0;
}
