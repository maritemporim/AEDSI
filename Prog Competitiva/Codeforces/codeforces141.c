// Link Codeforces: https://codeforces.com/problemset/problem/141/A
// Autor: Mariana Temporim Ferreira

#include <stdio.h>
#include <string.h> 

int main() {
    char nomeConvidado[105], nomeAnfitriao[105], letrasPilha[105];

    int contagemLetras[26] = {0};
    // Declara um array de inteiros chamado 'contagemLetras' de tamanho 26.
    // Cada elemento deste array irá armazenar a contagem de cada letra do alfabeto (A-Z).
    // Inicializa todos os elementos com 0.

    scanf("%s", nomeConvidado);
    scanf("%s", nomeAnfitriao);
    scanf("%s", letrasPilha);

    for (int i = 0; nomeConvidado[i]; i++) {
        // para cada caractere, calcula seu índice correspondente no array 'contagemLetras'.
        // subtraindo 'A' do caractere, obtemos um valor entre 0 (para 'A') e 25 (para 'Z').
        // incrementa a contagem da letra correspondente no array 'contagemLetras'.
        contagemLetras[nomeConvidado[i] - 'A']++;
    }

    for (int i = 0; nomeAnfitriao[i]; i++) {
        // basicamente igual ao outro, incrementa a contagem da letra correspondente no array 'contagemLetras'.
        contagemLetras[nomeAnfitriao[i] - 'A']++;
    }

    for (int i = 0; letrasPilha[i]; i++) {
        // para cada caractere na pilha, decrementa a contagem da letra correspondente no array 'contagemLetras'.
        contagemLetras[letrasPilha[i] - 'A']--;
    }

    for (int i = 0; i < 26; i++) {
        // Se algum elemento do array 'contagemLetras' for diferente de 0,
        // significa que a contagem de alguma letra não bate (ou sobrou letra dos nomes,
        // ou faltou letra para formar a pilha).
        if (contagemLetras[i] != 0) {
            printf("NO\n"); 
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}