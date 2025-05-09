#include <stdio.h>

int main() {
    // Definindo o número de casas que as peças se moverão
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;
    
    // Movimentação da Torre - 5 casas para a direita
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    
    // Movimentação do Bispo - 5 casas na diagonal para cima e à direita
    printf("\nMovimentação do Bispo:\n");
    int i = 0;
    while (i < casas_bispo) {
        printf("Cima, Direita\n");
        i++;
    }
    
    // Movimentação da Rainha - 8 casas para a esquerda
    printf("\nMovimentação da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casas_rainha);
    
    // Movimentação do Cavalo - 2 casas para baixo e 1 para a esquerda
    printf("\nMovimentação do Cavalo:\n");
    
    // Vamos usar dois loops aninhados, um "for" para mover 2 casas para baixo, e um "while" para mover uma casa para a esquerda
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");  // Movimento para baixo
        for (int j = 0; j < 1; j++) {
            printf("Esquerda\n");  // Movimento para a esquerda
        }
    }

    return 0;
}
