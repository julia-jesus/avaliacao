#include <stdio.h>

int main(){
	int numero, contador;
	int  resultado = 0;
	
	printf("informe o numero ");
	scanf("%d",&numero);
	
	for(contador = 2; contador<= numero/2; contador++){
		if(numero% contador== 0){
			resultado++;
			break;
		}
	}
	
	if (resultado == 0) {
    	printf("%d e um numero primo\n", numero);
	} else {
    	printf("%d nao e um numero primo\n", numero);
 	}
 	
 	return 0;
 	
 	
}
