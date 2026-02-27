#include <stdio.h>

int calculaProduto(int n) {
    int digito;
    int pares = 1, impares = 1;

    while (n > 0) {
        digito = n % 10;
        if (digito % 2 == 0) {
            pares *= digito;
        } else {
            impares *= digito;
        }
        n /= 10;
    }

    return pares + impares;
}

int main() {
    int numero;

    printf("Digite um número inteiro maior que 0: ");
    scanf("%d", &numero);

    if (numero > 0) {
        int resultado = calculaProduto(numero);
        printf("Resultado: %d\n", resultado);
    } else {
        printf("O número deve ser maior que 0.\n");
    }

    return 0;
}
