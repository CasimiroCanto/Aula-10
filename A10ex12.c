#include <stdio.h>

int maior(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    int resultado = maior(num1, num2);
    printf("O maior número é: %d\n", resultado);

    return 0;
}
