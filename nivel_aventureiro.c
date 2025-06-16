#include <stdio.h>

// Desafio de Xadrez - Alexandra Kellen
// Nível Aventureiro: Adição da movimentação do Cavalo com loops aninhados.

int main() {
    const int MOV_BISPO = 5;    // 5 casas na diagonal superior direita
    const int MOV_TORRE = 5;    // 5 casas para a direita
    const int MOV_RAINHA = 8;   // 8 casas para a esquerda

    printf("--- Nível Aventureiro: Movimentação das Peças e Cavalo ---\n\n");

    // Movimentação do Bispo (reaproveitada do Nível Novato)
    printf("Movimentação do Bispo (%d casas na diagonal superior direita):\n", MOV_BISPO);
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima e Direita\n");
    }
    printf("\n");

    // Movimentação da Torre (reaproveitada do Nível Novato)
    printf("Movimentação da Torre (%d casas para a direita):\n", MOV_TORRE);
    int contador_torre = 0;
    while (contador_torre < MOV_TORRE) {
        printf("Direita\n");
        contador_torre++;
    }
    printf("\n");

    // Movimentação da Rainha (reaproveitada do Nível Novato)
    printf("Movimentação da Rainha (%d casas para a esquerda):\n", MOV_RAINHA);
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < MOV_RAINHA);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Mover o cavalo em L para baixo e para a esquerda usando loops aninhados.
    // Exemplo de movimento L: 2 casas para baixo e 1 para a esquerda.
    printf("Movimentação do Cavalo (1 vez em L: 2 para baixo e 1 para a esquerda):\n");
    
    // Loop externo (for) para a movimentação vertical (2 casas para baixo)
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    // Loop interno (while) para a movimentação horizontal (1 casa para a esquerda)
    int j = 0;
    while (j < 1) {
        printf("Esquerda\n");
        j++;
    }
    printf("\n");

    return 0;
}