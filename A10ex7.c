#include <stdio.h>
#include <math.h>

double circunferencia(double raio) {
    return 2 * M_PI * raio;
}

int main() {
    double raio = 5.0;
    double resultado = circunferencia(raio);
    printf("Circunferência do círculo com raio %.2f: %.2f\n", raio, resultado);
    return 0;
}