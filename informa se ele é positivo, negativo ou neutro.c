#include <stdio.h>

void verificar_positivo_negativo_neutro(int numero) {
    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é neutro.\n");
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    verificar_positivo_negativo_neutro(numero);

    return 0;
}