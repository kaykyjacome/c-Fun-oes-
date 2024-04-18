#include <stdio.h>

void verificar_multiplo_de_5(int numero) {
    if (numero % 5 == 0) {
        printf("O número é múltiplo de 5.\n");
    } else {
        printf("O número não é múltiplo de 5.\n");
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    verificar_multiplo_de_5(numero);

    return 0;
}
