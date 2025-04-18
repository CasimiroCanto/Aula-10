#include <stdio.h>

// Função que recebe dois inteiros e retorna a soma
int soma(int a, int b) {
    return a + b;
}

// Função que recebe um valor de soma e imprime uma mensagem
void imprime_mensagem(int resultado) {
    printf("O resultado da soma é: %d\n", resultado);
}

int main() {
    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    // Chamando a função de soma
    int resultado = soma(num1, num2);
    
    // Chamando a função que imprime a mensagem
    imprime_mensagem(resultado);
    
    return 0;
}