
#ifndef IGUALDADE_H
#define IGUALDADE_H

#include <stdio.h>

// Retorna o maior entre dois números
int maior(int a, int b) {
    return (a > b) ? a : b;
}
// Protótipo da função maior
int maior(int num1, int num2);

#endif

int main() {
    int num1, num2, num3;

    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Usa a função maior() para encontrar o maior entre os três
    int maiorTemp = maior(num1, num2);
    int maiorFinal = maior(maiorTemp, num3);

    printf("O maior número é: %d\n", maiorFinal);

    return 0;
}