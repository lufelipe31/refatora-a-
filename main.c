#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARACTERES "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"

// Função para gerar uma senha aleatória
void gerar_senha(int tamanho) {
    char caracteres[] = CARACTERES;
    int comprimento_caracteres = sizeof(CARACTERES) - 1;

    // Semente de aleatoriedade usando `srand` uma única vez
    srand((unsigned)time(NULL));

    for (int i = 0; i < tamanho; i++) {
        printf("%c", caracteres[rand() % comprimento_caracteres]);
    }
    printf("\n");
}

int main() {
    int tamanho_senha;

    printf("Informe o comprimento da senha desejada: ");
    scanf("%d", &tamanho_senha);

    if (tamanho_senha <= 0) {
        printf("O comprimento da senha deve ser maior que zero.\n");
        return 1;
    }

    printf("Gerando senha aleatória:\n");
    gerar_senha(tamanho_senha);

    return 0;
}