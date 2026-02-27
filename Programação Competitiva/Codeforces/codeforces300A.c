// Link Codeforces: https://codeforces.com/problemset/problem/300/A
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int qtd_num; 
    scanf("%d", &qtd_num);

    int entrada[105]; // números digitados na ordem original
    int grupo1[105], grupo2[105], grupo3[105]; // vetores que representam os 3 grupos
    int qtd1 = 0, qtd2 = 0, qtd3 = 0; // quantidades de elementos em cada grupo

    int negativos[105], positivos[105], zeros[105]; // vetores auxiliares para separar por tipo
    int qtd_neg = 0, qtd_pos = 0, qtd_zero = 0;

    // separa em negativos, positivos e zeros
    for (int i = 0; i < qtd_num; i++) {
        scanf("%d", &entrada[i]);
        if (entrada[i] < 0)
            negativos[qtd_neg++] = entrada[i];
        else if (entrada[i] > 0)
            positivos[qtd_pos++] = entrada[i];
        else
            zeros[qtd_zero++] = entrada[i];
    }

    // 1: precisa ter produto negativo, então colocamos 1 negativo aqui
    grupo1[qtd1++] = negativos[0];

    // 2: precisa ter produto positivo
    if (qtd_pos >= 1) {
        // se tiver positivo, coloca todos os positivos aqui
        for (int i = 0; i < qtd_pos; i++) {
            grupo2[qtd2++] = positivos[i];
        }
    } else {
        // se não tiver positivo, usa-se dois negativos pra dar positivo
        grupo2[qtd2++] = negativos[1];
        grupo2[qtd2++] = negativos[2];
    }

    // 3: recebe o que sobrou dos negativos e os zeros
    int inicio_sobra = (qtd_pos >= 1) ? 1 : 3;
    for (int i = inicio_sobra; i < qtd_neg; i++) {
        grupo3[qtd3++] = negativos[i];
    }

    for (int i = 0; i < qtd_zero; i++) {
        grupo3[qtd3++] = zeros[i];
    }

    printf("%d", qtd1);
    for (int i = 0; i < qtd1; i++) {
        printf(" %d", grupo1[i]);
    }
    printf("\n");

    printf("%d", qtd2);
    for (int i = 0; i < qtd2; i++) {
        printf(" %d", grupo2[i]);
    }
    printf("\n");

    printf("%d", qtd3);
    for (int i = 0; i < qtd3; i++) {
        printf(" %d", grupo3[i]);
    }
    printf("\n");

    return 0;
}
