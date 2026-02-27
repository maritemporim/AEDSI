// Link Codeforces: https://codeforces.com/problemset/problem/3/C
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int verifica_ganhador(char tabuleiro[3][3], char jogador) { // verifica se o jogador ganhou
    // verifica todas as linhas e colunas
    for (int i = 0; i < 3; i++) { 
        // checa linha horizontal
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador)
            return 1;
        // checa linha vertical
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)
            return 1;
    }

    // verifica as duas diagonais
    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador)
        return 1;
    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)
        return 1;

    return 0; // Se não encontrou vitória
}

int main() {
    char tabuleiro[3][3];  // matriz 3x3 para o tabuleiro
    int contador_x = 0, contador_o = 0;  // contadores de peças

    // lê o estado atual do tabuleiro
    for (int linha = 0; linha < 3; linha++) {
        scanf("%s", tabuleiro[linha]);
        for (int coluna = 0; coluna < 3; coluna++) {
            // conta quantas peças X e O existem
            if (tabuleiro[linha][coluna] == 'X') contador_x++;
            else if (tabuleiro[linha][coluna] == '0') contador_o++;
        }
    }

    // verifica se cada jogador ganhou
    int x_ganhou = verifica_ganhador(tabuleiro, 'X');
    int o_ganhou = verifica_ganhador(tabuleiro, '0');

  // verifica situações ilegais:
    
    // 1. número de peças inválido (O não pode ter mais peças que X)
    if (contador_o > contador_x || contador_x > contador_o + 1) {
        printf("illegal\n");
        return 0;
    }

    // 2. ambos jogadores não podem ter ganho ao mesmo tempo
    if (x_ganhou && o_ganhou) {
        printf("illegal\n");
        return 0;
    }

    // 3. se X ganhou, deve ter exatamente 1 peça a mais que O
    if (x_ganhou && contador_x != contador_o + 1) {
        printf("illegal\n");
        return 0;
    }

    // 4. se O ganhou, deve ter o mesmo número de peças que X
    if (o_ganhou && contador_x != contador_o) {
        printf("illegal\n");
        return 0;
    }

   // Resultados válidos
    
    // caso X tenha ganho
    if (x_ganhou) {
        printf("the first player won\n");
    } 
    // caso O tenha ganho
    else if (o_ganhou) {
        printf("the second player won\n");
    } 
    // caso de empate (tabuleiro cheio)
    else if (contador_x + contador_o == 9) {
        printf("draw\n");
    } 
    // caso o jogo ainda não terminou
    else {
        // decide de quem é a vez
        if (contador_x == contador_o)
            printf("first\n");  // vez do X (primeiro jogador)
        else
            printf("second\n"); // vez do O (segundo jogador)
    }

    return 0;
}