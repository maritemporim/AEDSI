#include <stdio.h>

struct aluno{
    char nome[50];
    int matricula;
    float media;
};

typedef struct aluno aluno;

int main(void){
    aluno a[5];
    printf("colhendo dados\n");
    for(int i = 0; i < 5; i++){
        printf("%d pessoa\n", i+1);
        scanf("%s", &a[i].nome);
        scanf("%d", &a[i].matricula);
        scanf("%f", &a[i].media);
    }

    printf("mostrando dados:\n");

    for(int i= 0; i < 5; i++){
        printf("nome: %s",a[i].nome);
        printf("\nmatricula: %d", a[i].matricula);
        printf("\nmedia: %.2f\n",a[i].media);
    }
    return 0;
}