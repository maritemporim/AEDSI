// divisivel sem if
#include <stdio.h>
int main(void){
    int x,y;
    scanf("%d%d",&x,&y);
    int r = !(x%y); // imprimira 1 se for verdadeiro (true) e 0 se for falso (false)
    printf("%d",r); 
}