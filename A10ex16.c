#include <stdio.h>

int ler_numero() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    return numero;
}int main() {
    int num = ler_numero();
    printf("Voce digitou: %d\n", num);
    return 0;
}