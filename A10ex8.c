#include <stdio.h>
#define PI 3.141592653589793

double area(double raio) {
    return PI * raio * raio;
}

int main() {
    double r;
    printf("Digite o valor do raio: ");
    scanf("%lf", &r);
    printf("A área do círculo é: %.2lf\n", area(r));
    return 0;
}