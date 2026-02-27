int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes) {
    int total = matSize * (*matColSize);

    // verifica se é possível fazer o reshape
    if (total != r * c) {
        // se não for retorna a matriz original com os dados originais
        *returnSize = matSize;

        *returnColumnSizes = (int*)malloc(matSize * sizeof(int));
        for (int i = 0; i < matSize; i++) {
            (*returnColumnSizes)[i] = matColSize[i]; // copia os tamanhos das colunas originais
        }
        return mat; // retorna a original
    }

    int** nMatrix = (int**)malloc(r * sizeof(int*));
    *returnColumnSizes = (int*)malloc(r * sizeof(int));
    for (int i = 0; i < r; i++) {
        nMatrix[i] = (int*)malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c; // tamanho da linha
    }

    *returnSize = r;  // define o número de linhas da nova matriz

    // preenche a nova matriz com os elementos da original um por um
    for (int i = 0; i < total; i++) {

        int orRow = i / (*matColSize); // linha original
        int orCol = i % (*matColSize); // coluna original
        
        int nRow = i / c; // nova linha
        int nCol = i % c; // nova coluna

        // transfere o valor da matriz original para a nova posição na nova matriz
        nMatrix[nRow][nCol] = mat[orRow][orCol];
    }

    return nMatrix;
}