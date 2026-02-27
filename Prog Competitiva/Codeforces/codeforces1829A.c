// Autor: Mariana Temporim Ferreira

#include <stdio.h>     // Inclui a biblioteca padrão de entrada e saída
#include <string.h>    // Inclui a biblioteca para manipulação de strings (como strcmp, strlen, etc.)

int main() {
    int t; 
    scanf("%d", &t);

    char target[] = "codeforces";

    while (t--) {
        char s[15]; 
        scanf("%s", s); 

        int c = 0; 
        for (int i = 0; i < 10; i++) {
            if (s[i] != target[i]) // compara o caractere na posição 'i' de 's' com o caractere na mesma posição em 'target'.
                c++; // se os caracteres forem diferentes, incrementa o contador 'c'.
        }
        printf("%d\n", c); 
    }
    return 0;
}