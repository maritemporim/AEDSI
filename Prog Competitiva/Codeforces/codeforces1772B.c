// Link Codeforces: https://codeforces.com/problemset/problem/1772/B
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

// verifica se a matriz está em sua forma perfeita
int perfeita(int t_e, int t_d, int b_e, int b_d) {
    return (t_e < t_d && b_e < b_d && t_e < b_e && t_d < b_d);
}

int main() {
    int num_testes;
    scanf("%d", &num_testes);
    
    while (num_testes--) {
        int m[2][2];
        
        scanf("%d %d", &m[0][0], &m[0][1]);
        scanf("%d %d", &m[1][0], &m[1][1]);
        
        // verifica todas as 4 movimentações possíveis
        int resultado = 
            perfeita(m[0][0], m[0][1], m[1][0], m[1][1]) ||  // posição original
            perfeita(m[1][0], m[0][0], m[1][1], m[0][1]) ||  // roda 90°
            perfeita(m[1][1], m[1][0], m[0][1], m[0][0]) ||  // roda 180°
            perfeita(m[0][1], m[1][1], m[0][0], m[1][0]);    // roda 270°
        
        printf(resultado ? "YES\n" : "NO\n"); 
    }
    
    return 0;
}