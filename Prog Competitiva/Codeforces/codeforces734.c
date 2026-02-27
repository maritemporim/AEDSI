// Link Codeforces: https://codeforces.com/problemset/problem/734/A
// Autor: Mariana Temporim Ferreira

#include <stdio.h> 

int main() { 
    int n, a = 0, d = 0; // 'n' para armazenar o número de jogos,
                         // 'a' para contar as vitórias de Anton (inicializada com 0),
                         // 'd' para contar as vitórias de Danik (inicializada com 0).

    scanf("%d", &n);
    char s[n + 1]; // O tamanho do array é 'n + 1' para acomodar 'n' caracteres de resultado
                   // e o caractere nulo ('\0') que marca o fim da string em C.

    scanf("%s", s); 
            
    for (int i = 0; i < n; i++) { 

        if (s[i] == 'A') // Verifica se o caractere atual é igual a 'A'.
            a++; // Se for 'A', incrementa o contador de vitórias de Anton ('a').

        else 
            d++; // Incrementa o contador de vitórias de Danik ('d').
    }
    if (a > d) 
        printf("Anton\n"); 
    else if (d > a) 
        printf("Danik\n"); 
    else 
        printf("Friendship\n"); 
    return 0; 
}