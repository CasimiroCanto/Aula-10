#include <stdio.h>
#define PI 3.141592653589793
   // util.h
#ifndef UTIL_H
#define UTIL_H


// Calcula o diâmetro de um círculo dado o raio
double diametro(double raio) {
    return 2 * raio;
}

// Calcula a circunferência de um círculo dado o raio
double circunferencia(double raio) {
    return 2 * PI * raio;
}

// Calcula a área de um círculo dado o raio
double area(double raio) {
    return PI * raio * raio;
}

#endif // UTIL_H
int main() {
    double r;
    printf("Digite o valor do raio: ");
    scanf("%lf", &r);
    printf("A área do círculo é: %.2lf\n", area(r));
    printf("O diâmetro do círculo é: %.2lf\n", diametro(r));
    printf("A circunferência do círculo é: %.2lf\n", circunferencia(r));
    return 0;
}

    


