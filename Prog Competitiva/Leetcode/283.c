void moveZeroes(int* nums, int numsSize) {

    int *novoV = malloc (numsSize * sizeof(int));
    int *zero = malloc (numsSize * sizeof(int));

    int cNum = 0; // tamanho de numeros, ou seja, contador
    int cZero = 0; // tamanho de zeros, ou seja, contador

    for(int i = 0; i < numsSize; i++){
        if(nums[i] != 0) novoV[cNum++] = nums[i]; // se o numero for diferente de zero copia-se para o vetor novoV
        else zero[cZero++] = nums[i]; // se ele for igual a zero copiasse para o vetor zero
    }

    for(int i = 0; i < cNum; i++){
        nums[i] = novoV[i]; // mudando a ordem de nums[i], colocando todos os numeros nas primeiroas posições

    }

    for(int i = 0; i < cZero; i++){
        nums[i+cNum] = zero[i]; // adicionando os zeros nas ultimas posições
    }


}
    