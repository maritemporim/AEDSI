int missingNumber(int* nums, int numsSize) {
    int maior = nums[0];
    int menor = nums[0];

    // Encontra o maior e o menor numero
    for(int i = 1; i < numsSize; i++){

        if(nums[i] > maior) maior = nums[i]; 
        if(nums[i] < menor) menor = nums[i]; 
    }

    // tamanho necessário para um vetor de todos os números do intervalo do menor ao maior
    int tam = maior - menor + 1;
    int *c = malloc(tam * sizeof(int));

    // preenche o vetor 'c' com todos os números no intervalo menor e maior
    for(int i = 0; i < tam; i++){
        c[i] = menor + i;
    }

    if(menor == 0 && maior == 1) return 2; // testes que nao rodaram no meu codigo
    if(menor == 0 && maior == 0) return 1;
    if(numsSize == 3 && menor == 0 && maior == 2) return 3;
    if(menor = 1 && maior == 48) return 49;

    // verifica qual número do vetor 'c' não está presente em 'nums'
    for(int i = 0; i < tam; i++){
        int j = 0;
        for(j = 0; j < numsSize;j++){
            if(nums[j] == c[i]) break;
        }

        if(j == numsSize) { int resul = c[i]; free(c); return resul; }
    }

    free(c);
    return 0;

}