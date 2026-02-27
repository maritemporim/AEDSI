// Link Codeforces: https://codeforces.com/problemset/problem/59/A
// Autor: Mariana Temporim Ferreira

#include <stdio.h>    
#include <string.h>
#include <ctype.h>

int main() {
    char s[105]; 
    scanf("%s", s);

    int upper = 0, lower = 0; // para contar letras maiúsculas e minúsculas.

    for (int i = 0; s[i]; i++) {
        if (isupper(s[i])) // verifica se o caractere atual é uma letra maiúscula.
            upper++;       // Se for maiúscula, incrementa o contador 'upper'.
        else
            lower++;       // Incrementa o contador 'lower'.
    }

    for (int i = 0; s[i]; i++) {
        if (upper > lower) // verifica se o número de letras maiúsculas é maior que o de minúsculas.
            s[i] = toupper(s[i]); // se for maior, converte o caractere atual para maiúscula e o atualiza em 's'.
        else                  // se o número de minúsculas for maior ou igual ao de maiúsculas.
            s[i] = tolower(s[i]); // converte o caractere atual para minúscula e o atualiza em 's'.
    }

    printf("%s\n", s); 

    return 0; 
}