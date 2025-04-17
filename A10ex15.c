#include <stdio.h>

int main() {
    float num1, num2;

    // Solicita ao usuário que insira os dois números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Verifica se os números são iguais
    if (num1 == num2) {
        printf("Os números são iguais.\n");
    } else {
        // Determina e exibe o maior e o menor número
        if (num1 > num2) {
            printf("Os números são diferentes.\n");
            printf("Maior número: %.2f\n", num1);
            printf("Menor número: %.2f\n", num2);
        } else {
            printf("Os números são diferentes.\n");
            printf("Maior número: %.2f\n", num2);
            printf("Menor número: %.2f\n", num1);
        }
    }

    return 0;
}