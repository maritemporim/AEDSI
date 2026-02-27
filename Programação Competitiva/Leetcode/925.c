bool isLongPressedName(char* name, char* typed) {

    int i = 0, j = 0; // i percorre 'name', j percorre 'typed'

    while (typed[j]) {
        if (name[i] == typed[j]) {
            // se os caracteres atuais de name e typed forem iguais, avança os dois contadores
            i++;
            j++;
        } else if (j > 0 && typed[j] == typed[j - 1]) {
            // se o caractere atual de typed for igual ao anterior avança só 'j'
            j++;
        } else {
            return false;
        }
    }
    // se todos os caracteres de 'name' foram correspondidos, retorna true
    return name[i] == '\0';
}