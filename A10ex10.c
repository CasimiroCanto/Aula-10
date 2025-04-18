// main.c
#include <stdio.h>
#ifndef UTIL_H
#define UTIL_H

// Calcula o diâmetro de um círculo dado o raio
float calcularDiametro(float raio) {
    return 2 * raio;
}

// Calcula a circunferência de um círculo dado o raio
float calcularCircunferencia(float raio) {
    return 2 * 3.14159 * raio;
}

// Calcula a área de um círculo dado o raio
float calcularArea(float raio) {
    return 3.14159 * raio * raio;
}

#endif

int main() {
    float raio;
    
    // Solicita ao usuário o valor do raio
    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);
    
    // Verifica se o raio é positivo
    if (raio <= 0) {
        printf("Erro: O raio deve ser um valor positivo.\n");
        return 1;
    }
    
    // Calcula e exibe os resultados
    printf("\nResultados:\n");
    printf("Raio: %.2f\n", raio);
    printf("Diâmetro: %.2f\n", calcularDiametro(raio));
    printf("Circunferência: %.2f\n", calcularCircunferencia(raio));
    printf("Área: %.2f\n", calcularArea(raio));
    
    return 0;
}