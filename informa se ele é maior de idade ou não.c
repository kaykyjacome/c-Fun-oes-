#include <stdio.h>

void verificar_maioridade(int idade) {
    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");
    }
}

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    verificar_maioridade(idade);

    return 0;
}
