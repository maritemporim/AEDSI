#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char placa[10];
	int contador = 0;
	scanf("%s", placa);
	if(strlen(placa) == 8 && placa[0] >= 'A' && placa [0] <= 'Z' && placa[1] >= 'A' && placa [1] <= 'Z' && placa[2] >= 'A' && placa [2] <= 'Z' && placa [3] == '-' && placa[4] >= '0' && placa[4] <= '9' && placa[5] >= '0' && placa[5] <= '9' && placa[6] >= '0' && placa[6] <= '9' && placa[7] >= '0' && placa[7] <= '9'){
		contador = 1;
	}

	if(strlen(placa) == 7 && placa [0] >= 'A' && placa[0] <= 'Z' && placa [1] >= 'A' && placa[1] <= 'Z' && placa [2] >= 'A' && placa[2] <= 'Z' && isdigit(placa[3]) && placa[4] >= 'a' && placa[4] <='z' && isdigit(placa[5]) && isdigit(placa[6])){
		contador = 2;
	
	}
	printf("%d\n",contador);
	return 0;
}



	