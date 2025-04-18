#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 7;
    int resultado = soma(num1, num2);
    
    printf("A soma de %d e %d é %d\n", num1, num2, resultado);
    
    return 0;
}