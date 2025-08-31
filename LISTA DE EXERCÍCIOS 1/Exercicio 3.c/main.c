#include <stdio.h>

int main() {
	
	int valor;
	int cem, cinquenta, vinte, dez, cinco, dois;
	
	printf("CAIXA ELETRONICO");
	printf("\n Informe o valor de saque: ");
	scanf("%d", &valor);
	
	printf("\n");
	
	if(valor < 2 || valor == 1){
		printf("Erro: o valor não pode ser pago em cedulas, informe outro valor.");
	}
	else{
		 
		cem = valor / 100; //calcula a quantidade de notas
		valor %= 100; // % (modulo) retorna o resto da divisao 
		
		cinquenta = valor / 50;
		valor %= 50;
		
		vinte = valor / 20;
		valor %= 20;
		
		dez = valor / 10;
		valor %= 10;
		
		cinco = valor / 5;
		valor %= 5;
		
		dois = valor / 2;
		valor %= 2;
		
		if (valor != 0) {  // se sobrar 1 real o saque nao é realizado
            printf("Erro: o valor nao pode ser pago com as cedulas disponiveis.");
        } 
		else {
        	printf("Cedulas: \n");
        	printf("100: %d\n", cem);
	        printf("50 : %d\n", cinquenta);
	        printf("20 : %d\n", vinte);
	        printf("10 : %d\n", dez);
	        printf("5  : %d\n", cinco);
	        printf("2  : %d\n", dois);
	    }	
	}
	
	return 0;
}