#include <stdio.h>

// Desafio de Xadrez - Alexandra Kellen
// Nível Mestre: Funções recursivas e loops avançados para o Cavalo.

// --- Funções Recursivas para as Peças ---

// Função recursiva para movimentação do Bispo
// Movimenta 5 casas na diagonal superior direita
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Cima e Direita\n");
        moverBispoRecursivo(casasRestantes - 1);
    }
}

// Função recursiva para movimentação da Torre
// Movimenta 5 casas para a direita
void moverTorreRecursivo(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Direita\n");
        moverTorreRecursivo(casasRestantes - 1);
    }
}

// Função recursiva para movimentação da Rainha
// Movimenta 8 casas para a esquerda
void moverRainhaRecursivo(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Esquerda\n");
        moverRainhaRecursivo(casasRestantes - 1);
    }
}

int main() {
    // Constantes para as movimentações das peças
    const int MOV_BISPO = 5;    // 5 casas na diagonal superior direita
    const int MOV_TORRE = 5;    // 5 casas para a direita
    const int MOV_RAINHA = 8;   // 8 casas para a esquerda
    
    printf("--- Nível Mestre: Funções Recursivas e Loops Avançados ---\n\n");

    // Nível Mestre - Movimentação das Peças com Funções Recursivas

    // Movimentação do Bispo
    printf("Movimentação do Bispo (5 casas na diagonal superior direita - Recursivo):\n");
    moverBispoRecursivo(MOV_BISPO);
    printf("\n");

    // Movimentação da Torre
    printf("Movimentação da Torre (5 casas para a direita - Recursivo):\n");
    moverTorreRecursivo(MOV_TORRE);
    printf("\n");

    // Movimentação da Rainha
    printf("Movimentação da Rainha (8 casas para a esquerda - Recursivo):\n");
    moverRainhaRecursivo(MOV_RAINHA);
    printf("\n");

    // Nível Mestre - Movimentação do Cavalo
    // Mover o Cavalo 1 vez em L para cima à direita
    // Usando loops aninhados com múltiplas variáveis e demonstração de continue/break.
    printf("Movimentação do Cavalo (1 vez em L: 2 para cima e 1 para a direita):\n");
    
    int move_vertical = 0;
    int move_horizontal = 0;

    // Loop externo para a movimentação vertical (2 casas para cima)
    for (move_vertical = 0; move_vertical < 2; move_vertical++) {
        if (move_vertical == 1) { // Exemplo de 'continue'
            printf("Cima\n");
            continue; // Pula para a próxima iteração do loop
        }
        printf("Cima\n");
    }

    // Loop interno para a movimentação horizontal (1 casa para a direita)
    for (move_horizontal = 0; move_horizontal < 2; move_horizontal++) { // Itera 2 vezes para mostrar o break
        if (move_horizontal == 1) { // Exemplo de 'break'
            printf("Direita\n");
            break; // Sai do loop imediatamente
        }
        printf("Direita\n");
    }
    printf("\n");

    return 0;
}