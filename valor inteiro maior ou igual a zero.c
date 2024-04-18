#include <stdio.h>

unsigned long long calcular_fatorial(int numero) {
    unsigned long long fatorial = 1;
    for (int i = 1; i <= numero; ++i) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int numero;
    printf("Digite um número inteiro maior ou igual a zero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O número deve ser maior ou igual a zero.\n");
    } else {
        unsigned long long resultado = calcular_fatorial(numero);
        printf("O fatorial de %d é: %llu\n", numero, resultado);
    }

    return 0;
}
