bool isAnagram(char* s, char* t) {

    // anagramas posssuem a mesma quantidade de caracteres, se elas forem diferentes não é um anagrama
    if(strlen(s) != strlen(t)) return false;

    int cs[26] = {0}; // contador de frequencia de letras de s
    int ct[26] = {0}; // contador de frequencias de letras de t

    for(int i = 0; s[i] != '\0'; i++) {
        cs[s[i] - 'a']++; // incrementa o contador da letra correspondente em s
        ct[t[i] - 'a']++; // faz o mesmo com t
    }

    //compara as duas frequencias, se forem diferentes retorna falso
    for(int i = 0; i < 26; i++) {
        if(cs[i] != ct[i]) return false;
    }

    //se o programa n identificar nenhuma frequencia diferente é pq são anagramas
    return true;
}
   