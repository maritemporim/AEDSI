// Link Codeforces: https://codeforces.com/problemset/problem/263/A
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int matriz[5][5];
    int linha, coluna;
    
    // encontra a posição do 1
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] == 1) {
                linha = i + 1;  // convertendo para índice base 1
                coluna = j + 1;
            }
        }
    }
    
    // calcula a diferença para o centro (linha 3, coluna 3)
    int diff_linha, diff_coluna;
    
    // calcula diferença de linha
    if (linha > 3) diff_linha = linha - 3;
    else diff_linha = 3 - linha;
    
    // calcula diferença de coluna
    if (coluna > 3) diff_coluna = coluna - 3;
    else diff_coluna = 3 - coluna;
    
    // total de movimentos
    int movimentos = diff_linha + diff_coluna;
    printf("%d\n", movimentos);
    
    return 0;
}