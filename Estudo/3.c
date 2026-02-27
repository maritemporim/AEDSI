//salario

#include <stdio.h>
int main(void){
    float s,p;
    scanf("%f%f",&s,&p);
    float c = s * (p/100);
    float r = s + c;
    printf("%.1f",r);
}