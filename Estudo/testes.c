#include <stdio.h>
#include <stdlib.h>

int main(void){
    int var = 15;
    int *ptr;

    ptr = &var;

    printf("conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", &var);
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereco apontado por ptr = %p\n", ptr);
    printf("endereco no ptr = %p\n", &ptr);

    *ptr = 870;

    printf("\n\n");
    printf("conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", &var);
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereco apontado por ptr = %p\n", ptr);
    printf("endereco no ptr = %p\n", &ptr);

    printf("\n\nEnd.");
    while(1);
    return 0;
    //end main
}