#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};  // Inicializa tudo com 0

    int navio1H[3] = {1, 2, 3};    // Linhas dos navios
    int navio1V[3] = {1, 2, 3};    // Colunas dos navios
    int navio2H[3] = {1, 2, 3}; 
    int navio2V[3] = {9, 8, 7};
    int navio3H[3] = {5, 5, 5}; 
    int navio3V[3] = {1, 2, 3};  
    int navio4H[3] = {6, 7, 8}; 
    int navio4V[3] = {7, 7, 7};      
    int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};   // Cabeçalho

    // Preencher o tabuleiro com navios (valor 3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio1H[i]][navio1V[i]] = 3;
    }
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio2H[i]][navio2V[i]] = 3;
    }
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio3H[i]][navio3V[i]] = 3;
    }
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio4H[i]][navio4V[i]] = 3;
    }

    // Impressão do cabeçalho
    int numeros;
    int i, j;
    char letra = 'A';

    printf("******* BATALHA NAVAL *******\n");
    printf("   ");
    for (numeros = 0; numeros < 10; numeros++) {
        printf("%d ", linhas[numeros]);
    }
    printf("\n");

    // Impressão do tabuleiro
    for (i = 0; i < 10; i++) {
        printf("%c  ", letra);      // IMPRIME O IDENTIFICADOR DAS LINHAS (A, B, C...)
        ++letra;
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);     // IMPRIME O TABULEIRO
        }
        printf("\n");
    }

    return 0;
}
