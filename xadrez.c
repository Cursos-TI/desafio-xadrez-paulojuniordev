#include <stdio.h>

int main() {
    // Simulação do movimento da Torre: move 5 casas para a direita usando loop for
    // A Torre move-se horizontalmente, então imprime "Direita" para cada casa
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo: move 5 casas na diagonal para cima e à direita usando loop while
    // O Bispo move-se diagonalmente, então imprime "Cima, Direita" para cada casa
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    int contador_bispo = 1;
    while (contador_bispo <= 5) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // Simulação do movimento da Rainha: move 8 casas para a esquerda usando loop do-while
    // A Rainha pode mover-se horizontalmente, então imprime "Esquerda" para cada casa
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= 8);

    return 0;
}