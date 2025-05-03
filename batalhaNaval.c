#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    char tabuleiro[10][10];

    // Inicializa com água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '~';
        }
    }

    // Posições dos navios
    int lin1 = 2, col1 = 4;
    int lin2 = 3, col2 = 5;
    int lin3 = 4, col3 = 6;

    // Navio 1 - Vertical
    if (lin1 + 2 < 10 &&
        tabuleiro[lin1][col1] == '~' &&
        tabuleiro[lin1+1][col1] == '~' &&
        tabuleiro[lin1+2][col1] == '~') {
        tabuleiro[lin1][col1] = 'N';
        tabuleiro[lin1+1][col1] = 'N';
        tabuleiro[lin1+2][col1] = 'N';
    } else {
        printf("Erro ao adicionar o primeiro navio!\n");
    }

    // Navio 2 - Horizontal
    if (col2 + 2 < 10 &&
        tabuleiro[lin2][col2] == '~' &&
        tabuleiro[lin2][col2+1] == '~' &&
        tabuleiro[lin2][col2+2] == '~') {
        tabuleiro[lin2][col2] = 'N';
        tabuleiro[lin2][col2+1] = 'N';
        tabuleiro[lin2][col2+2] = 'N';
    } else {
        printf("Erro no navio 2\n");
    }

    // Navio 3 - Diagonal
    if (lin3 + 2 < 10 && col3 + 2 < 10 &&
        tabuleiro[lin3][col3] == '~' &&
        tabuleiro[lin3+1][col3+1] == '~' &&
        tabuleiro[lin3+2][col3+2] == '~') {
        tabuleiro[lin3][col3] = 'N';
        tabuleiro[lin3+1][col3+1] = 'N';
        tabuleiro[lin3+2][col3+2] = 'N';
    } else {
        printf("Erro no navio 3\n");
    }

    // Imprimir tabuleiro
    printf("----BATALHA NAVAL----\n");

    // Cabeçalho das colunas
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Impressão da matriz
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i);  // Cabeçalho da linha
        for (int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}