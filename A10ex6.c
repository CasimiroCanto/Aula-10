#include <stdio.h>

double diametro(double raio) {
    return 2 * raio;
}

// Exemplo de uso:
int main() {
    double raio = 5.0;
    double d = diametro(raio);
    printf("Diâmetro do círculo com raio %.2f: %.2f\n", raio, d);
    return 0;
}