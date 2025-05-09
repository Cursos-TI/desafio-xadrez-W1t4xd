#include <stdio.h>

// Função recursiva para a Torre - movimento para a direita
void mover_torre(int casas_restantes) {
    if (casas_restantes > 0) {
        printf("Direita\n");
        mover_torre(casas_restantes - 1); // Chamada recursiva
    }
}

// Função recursiva para o Bispo - movimento na diagonal (cima, direita)
void mover_bispo(int casas_restantes) {
    if (casas_restantes > 0) {
        printf("Cima, Direita\n");
        mover_bispo(casas_restantes - 1); // Chamada recursiva
    }
}

// Função recursiva para a Rainha - movimento para a esquerda
void mover_rainha(int casas_restantes) {
    if (casas_restantes > 0) {
        printf("Esquerda\n");
        mover_rainha(casas_restantes - 1); // Chamada recursiva
    }
}

// Função para mover o Cavalo - movimento em "L" (duas casas para cima e uma para a direita)
void mover_cavalo() {
    // Loop aninhado para o movimento em "L"
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");  // Movimento vertical (para cima)
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");  // Movimento horizontal (para a direita)
        }
    }
}

// Função recursiva para o Bispo com loops aninhados - movimento na diagonal
void mover_bispo_com_loops(int casas_restantes) {
    if (casas_restantes > 0) {
        // Loop para movimento vertical (cima)
        for (int i = 0; i < 1; i++) {
            printf("Cima\n");
            // Loop interno para movimento horizontal (direita)
            for (int j = 0; j < 1; j++) {
                printf("Direita\n");
            }
        }
        mover_bispo_com_loops(casas_restantes - 1); // Chamada recursiva
    }
}

int main() {
    // Definindo o número de casas para movimentação
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    // Movimentação da Torre (recursiva)
    printf("Movimentação da Torre:\n");
    mover_torre(casas_torre);
    printf("\n");

    // Movimentação do Bispo (recursiva)
    printf("Movimentação do Bispo:\n");
    mover_bispo(casas_bispo);
    printf("\n");

    // Movimentação da Rainha (recursiva)
    printf("Movimentação da Rainha:\n");
    mover_rainha(casas_rainha);
    printf("\n");

    // Movimentação do Cavalo (usando loops aninhados)
    printf("Movimentação do Cavalo:\n");
    mover_cavalo();
    printf("\n");

    // Movimentação do Bispo com loops aninhados e recursividade
    printf("Movimentação do Bispo com loops aninhados e recursividade:\n");
    mover_bispo_com_loops(casas_bispo);
    printf("\n");

    return 0;
}
