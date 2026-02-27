char* intToRoman(int num) {

    // vetor com os numeros que correspondem aos numeros em decimais dos romanos
    int v[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}; 

    // vetor com os numeros que correspondem aos numeros romanos
    char* s[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    char* resultado = malloc(num * sizeof(int));  
    int pos = 0; 

    for (int i = 0; i < 13; i++) {
        while (num >= v[i]) {

            for (int j = 0; s[i][j] != '\0'; j++) {
                // copia os caracteres do algarismo romano correspondente para a string resultado
                resultado[pos++] = s[i][j];
            }
             // subtrai o valor correspondente do número
            num -= v[i];
        }
    }

     // Adiciona o caractere nulo para finalizar a string
    resultado[pos] = '\0'; 
    return resultado;
}