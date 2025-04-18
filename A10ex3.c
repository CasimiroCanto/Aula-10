#include <stdio.h>

// Função que lê um número do usuário e retorna o valor
double lerNumero() {
    double numero;
    
    printf("Digite um número: ");
    scanf("%lf", &numero);
    
    // Limpa o buffer do teclado para evitar problemas com entradas posteriores
    while (getchar() != '\n');
    
    return numero;
}

// Exemplo de uso da função
int main() {
    double valor;
    
    printf("Programa para ler um número do usuário\n");
    valor = lerNumero();
    
    printf("Você digitou: %.2f\n", valor);
    
    return 0;
}