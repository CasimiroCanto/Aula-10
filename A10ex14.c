#include <stdio.h>

// Função que verifica se dois números são iguais
int igual(int x, int y) {
    if (x == y) {
        return 1;
    } else {
        return 0;
    }
}

// Função que retorna o maior de dois números
int maior(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

// Função que retorna o menor de dois números
int menor(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

// Função principal para teste (pode ser removida se não for necessária)
int main() {
    int a = 5, b = 10;
    
    printf("Igual: %d\n", igual(a, b));
    printf("Maior: %d\n", maior(a, b));
    printf("Menor: %d\n", menor(a, b));
    
    return 0;
}
