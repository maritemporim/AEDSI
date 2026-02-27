// Link Codeforces: https://codeforces.com/problemset/problem/510/A
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int n, m; //  n (linhas) | m (colunas)
    scanf("%d %d", &n, &m); 

    for (int i = 0; i < n; i++) 
    { 
        if (i % 2 == 0) //  linha par preenche toda com #
        { 
            for (int j = 0; j < m; j++) 
            {
                printf("#");
            }
        } 
        else // linha ímpar apenas um # será colocado em uma das extremidades
        { 
            
            if ((i / 2) % 2 == 0) // se for a primeira linha ímpar da sequencia, um # fica no final
            { 
                for (int j = 0; j < m - 1; j++) 
                {
                    printf(".");
                }
                printf("#");
            } 
            else // se for a segunda linha ímpar da sequencia, um # fica no inicio
            { 
                printf("#");
                for (int j = 1; j < m; j++) 
                {
                    printf(".");
                }
            }
        }
        printf("\n"); 
    }
    return 0;
}
