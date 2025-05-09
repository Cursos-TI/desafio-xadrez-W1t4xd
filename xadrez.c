#include <stdio.h>

int main() {
    // Definindo o número de casas a serem movidas
    int casas_bispo = 5;
    int casas_torre = 5;
    int casas_rainha = 8;

    // Movimentação da Torre (5 casas para a direita) - Usando um 'for'
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo (5 casas na diagonal superior direita) - Usando um 'while'
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    int contador_bispo = 0;
    while (contador_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // Movimentação da Rainha (8 casas para a esquerda) - Usando um 'do-while'
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < casas_rainha);

    return 0;
}
