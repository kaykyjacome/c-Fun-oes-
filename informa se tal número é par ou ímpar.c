#include <stdio.h>

void verificar_par_impar(int numero) {
    if (numero % 2 == 0) {
        printf("O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    verificar_par_impar(numero);

    return 0;
}