int* getRow(int rowIndex, int* returnSize) {
    *returnSize = rowIndex + 1;
    int* resul = (int*)malloc((*returnSize) * sizeof(int));

    // inicializa todos os elementos do vetor com 0
    for (int i = 0; i <= rowIndex; i++) {
        resul[i] = 0;
    }

    // primeira posição da linha sempre começa com 1
    resul[0] = 1;

    // cada elemento é atualizado como a soma dele com o elemento anterior
    for (int i = 1; i <= rowIndex; i++) {
        for (int j = i; j > 0; j--) {
            resul[j] += resul[j - 1];
        }
    }

    return resul;
}
