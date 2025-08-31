#include <stdio.h>
#include <stdlib.h> // biblioteca necessaria para o rand e srand
#include <time.h> // biblioteca para usar funcoes de tempo
	 
int main() {
	 
	int numero_secreto, palpite;
	
	// gerando numeros aleatorios antes de realizar a entrada de dados
	
	srand(time(NULL));  //Inicializando (srand) - gerador de números aleatorios usando o tempo atual (time(NULL))
	numero_secreto = rand() % 100 + 1;  //definindo que a variavel vai receber um numero aleatorio na faixa de 1 a 100
	
	printf("Adivinhe o numero secreto (entre 1 e 100)");
	printf("\n Digite seu palpite: ");
	scanf("%d", &palpite);
	
	printf("\n");
	
	if(palpite == numero_secreto){
		printf("\n Parabens, voce acertou!");
	}
	else if(palpite > numero_secreto){
		printf("\n Muito alto, tente um numero menor!");
	}
	else{  //palpite < numero_secreto
		printf("\n Muito baixo, tente um numero maior!");
	}
	
	printf("\n O numero secreto era: %d", numero_secreto);
	
	
	return 0;
}