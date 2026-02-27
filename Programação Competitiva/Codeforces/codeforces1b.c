// Link Codeforces: https://codeforces.com/problemset/problem/1/B
// Autor: Mariana Temporim Ferreira

#include <stdio.h>
#include <string.h>
#include <ctype.h>   

void RC(char *s) {
    int col = 0, row = 0; 
    int i = 0;

    // enquanto os caracteres iniciais da string forem letras 
    while (isalpha(s[i])) {
        // converte a letra da coluna para um número. 'A' corresponde a 1, 'B' a 2, e assim por diante.
        // multiplica 'col' por 26 a cada nova letra para considerar a base 26 do sistema de colunas.
        // subtrai 'A' de s[i] para obter um valor de 0 a 25 e adiciona 1 para a correspondência correta.
        col = col * 26 + (s[i] - 'A' + 1);
        i++; 
    }

    sscanf(s + i, "%d", &row);
    printf("R%dC%d\n", row, col);
}

void l(char *s) {
    int row, col; 
    sscanf(s + 1, "%dC%d", &row, &col);

    char colStr[20];
    int i = 0;

    //enquanto o número da coluna for maior que 0
    while (col > 0) {
        col--; // secrementa 'col' para ajustar para a base 26 (0-25)

        // calcula a letra correspondente ao dígito atual na base 26 e armazena em colStr
        // 'A' + (col % 26) converte um valor de 0-25 para a letra maiúscula correspondente
        colStr[i++] = 'A' + (col % 26);

        col /= 26; // para processar o próximo dígito na base 26
    }

    // imprime a string da coluna em ordem reversa
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", colStr[j]);
    }

    printf("%d\n", row);
}

int main() {
    int n; 
    scanf("%d", &n);

    char s[100];

    while (n--) { 
        scanf("%s", s); 

        // verifica se a string começa com 'R' seguido por um dígito 
        if (s[0] == 'R' && isdigit(s[1])) {
            int i = 1; // inicializa o índice para verificar os caracteres após 'R'

            // avança o índice enquanto os caracteres forem dígitos
            while (isdigit(s[i])) i++;

            // se após o número da linha houver um 'C', então a notação é RC, e a função 'l' é chamada
            if (s[i] == 'C')
                l(s);
    
            else
                RC(s);
        }
        // se a string não começa com 'R' seguido por um dígito, assume-se que é a notação padrão,
        // então a função 'RC' é chamada para convertê-la para RC
        else {
            RC(s);
        }
    }

    return 0;
}