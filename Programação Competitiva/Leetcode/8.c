int myAtoi(char* s) {

    int i = 0;
    long int resultado = 0; 
    int sinal = 0; 
    int digito = 0;

    while(s[i] == ' ') i++; 

    //encontrando o sinal
    if (s[i] == '-') {
        sinal = 1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    // le os digitos e ignora os caracteres que nao queremos
     for (int j = i; s[j] != '\0'; j++) {
        if (s[j] < '0' || s[j] > '9') break;

        digito++;
        resultado = resultado * 10 + (s[j] - '0');

        if (!sinal && resultado > 2147483647L) return 2147483647;
        if (sinal && resultado > 2147483648L) return -2147483648;
    }

    //tratamento de erro
    if(digito == 0) return 0;

    //tratamento se for negativo 
    if(sinal == 1){ resultado = -resultado;}
    return (int)resultado;
}