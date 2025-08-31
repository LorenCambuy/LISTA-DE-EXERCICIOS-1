#include <stdio.h>

int main() {
	
	float peso, altura, imc;
	
	printf("Calculo de Indice de Massa Corporal (IMC)");
	
	printf("\n Informe sua altura em metros: ");
	scanf("%f", &altura);
	
	printf("Informe seu peso em kg: ");
	scanf("%f", &peso);
	
	// calculo
	imc = peso / (altura * altura);
	
	printf("\n Seu IMC e: %.2f", imc);
	
	//classificacao
	if(imc < 18.5){
		printf("\n IMC - Abaixo do peso");
	}
	else if(imc >= 18.5 && imc < 24.9 ){
		printf("\n IMC - Peso Normal");
	}
	else if(imc >= 25 && imc < 29.9 ){
		printf("\n IMC - Sobrepeso");
	}
	else if(imc >= 30 && imc < 34.9 ){
		printf("\n IMC - Obesidade grau 1");
	}
	else if(imc >= 35 && imc < 39.9 ){
		printf("\n IMC - Obesidade grau 2");
	}
	else { // imc >= 40
		printf("\n IMC - Obesidade grau 3");
	}
	
	return 0;
}