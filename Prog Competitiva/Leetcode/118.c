int** generate(int numRows, int* returnSize, int** returnColumnSizes) {

    int** resultado = (int**)malloc(numRows * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));

    // o número total de linhas será 'numRows'
    *returnSize = numRows;

    // recursiva que constroi linha por linha do triangulo
    void construir(int linha) {
        if (linha == 0) return;

        construir(linha - 1);

        resultado[linha - 1] = (int*)malloc(linha * sizeof(int));

        // salva o tamanho da linha atual no vetor auxiliar
        (*returnColumnSizes)[linha - 1] = linha;

        // os extremos da linha sempre são 1
        resultado[linha - 1][0] = 1;
        resultado[linha - 1][linha - 1] = 1;

        // preenche os valores do meio
        for (int j = 1; j < linha - 1; j++) {
            resultado[linha - 1][j] = resultado[linha - 2][j - 1] + resultado[linha - 2][j];
        }
    }

    construir(numRows);

    return resultado;
}