#include <stdio.h>

// Desafio de Xadrez - Alexandra Kellen
// Nível Novato: Implementação inicial da movimentação de peças usando loops.

int main() {
    // Requisitos Funcionais:
    // 1. Entrada de Dados: Valores inseridos manualmente a partir de variáveis dentro do código.
    // 2. Estruturas de Repetição: Uso de diferentes estruturas de repetição.
    // 3. Saída de Dados: Resultados exibidos de forma clara e legível.

    // Requisitos Não Funcionais:
    // 1. Performance: Execução sem atrasos perceptíveis.
    // 2. Documentação: Código bem documentado.
    // 3. Manutenibilidade: Código claro e com nomes de variáveis significativos.

    // Constantes para as movimentações das peças
    const int MOV_BISPO = 5;    // 5 casas na diagonal superior direita
    const int MOV_TORRE = 5;    // 5 casas para a direita
    const int MOV_RAINHA = 8;   // 8 casas para a esquerda

    printf("--- Nível Novato: Movimentação das Peças ---\n\n");

    // Implementação de Movimentação do Bispo
    // Movimentação: 5 casas na diagonal superior direita
    printf("Movimentação do Bispo (%d casas na diagonal superior direita):\n", MOV_BISPO);
    // Utilizando loop 'for' para o Bispo
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima e Direita\n"); // Representa a movimentação diagonal
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Movimentação: 5 casas para a direita
    printf("Movimentação da Torre (%d casas para a direita):\n", MOV_TORRE);
    // Utilizando loop 'while' para a Torre
    int contador_torre = 0;
    while (contador_torre < MOV_TORRE) {
        printf("Direita\n");
        contador_torre++;
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Movimentação: 8 casas para a esquerda
    printf("Movimentação da Rainha (%d casas para a esquerda):\n", MOV_RAINHA);
    // Utilizando loop 'do-while' para a Rainha
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < MOV_RAINHA);
    printf("\n");

    return 0;
}