char* licenseKeyFormatting(char* s, int k) {
      int tamanhoOriginal = strlen(s);
    char* letrasValidas = (char*)malloc((tamanhoOriginal + 1) * sizeof(char));
    int qtdeLetras = 0;

    // converte os caracteres válidos em letras maiúsculas
    for (int i = 0; i < tamanhoOriginal; i++) {
        if (s[i] != '-') {
            letrasValidas[qtdeLetras++] = toupper(s[i]);
        }
    }

    // calcula quantos hífens serão necessários na formatação final
    int qtdeT = (qtdeLetras - 1) / k;

    // calcula o tamanho final da string formatada (letras + "-")
    int tamanhoFinal = qtdeLetras + qtdeT;

    char* chaveFormatada = (char*)malloc((tamanhoFinal + 1) * sizeof(char));
    chaveFormatada[tamanhoFinal] = '\0';

    // indices para percorrer as strings de tras pra frente
    int i = qtdeLetras - 1; // última letra válida
    int j = tamanhoFinal - 1; // última posição da string
    int contadorGrupo = 0; // conta quantos caracteres ja foram adicionados no grupo

    // preenche a string de tras para frente e adiciona os "-"
    while (i >= 0) {
        if (contadorGrupo == k) {
            chaveFormatada[j--] = '-';
            contadorGrupo = 0;
        } else {
            chaveFormatada[j--] = letrasValidas[i--];
            contadorGrupo++;
        }
    }

    free(letrasValidas);
    return chaveFormatada;
}