#include <stdio.h>

void verificar_zero(int numero) {
    if (numero == 0) {
        printf("O número é igual a zero.\n");
    } else {
        printf("O número não é igual a zero.\n");
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    verificar_zero(numero);

    return 0;
}