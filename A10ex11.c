#include <stdio.h>

int igual(int x, int y) {
    if (x == y) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    // Exemplo de uso da função
    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    if (igual(num1, num2)) {
        printf("Os números são iguais.\n");
    } else {
        printf("Os números são diferentes.\n");
    }
    
    return 0;
}