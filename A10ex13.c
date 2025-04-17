#include <stdio.h>

int menor(int x, int y) {
    return (x < y) ? x : y;
}

int main() {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    int resultado = menor(num1, num2);
    printf("O menor número é: %d\n", resultado);

    return 0;
}
