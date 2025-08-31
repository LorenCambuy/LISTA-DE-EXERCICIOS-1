#include <stdio.h>

int main() {
	
	float lado1, lado2, lado3;
	
	printf("Informe o valor do primeiro lado do triangulo: ");
	scanf("%f", &lado1);
	
	printf("Informe o valor do segundo lado do triangulo: ");
	scanf("%f", &lado2);
	
	printf("Informe o valor do terceiro lado do triangulo: ");
	scanf("%f", &lado3);
	
	// verificando se os valores informados formam um triangulo valido
	
	if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){
		
		printf("\n Triangulo Valido.");
		printf("\n Classificacao:");
		
		//classificação do triangulo 
		
		if(lado1 == lado2 && lado1 == lado3)
		{
			printf("EQUILATERO - Possui todos os lados iguais");
		}
		else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
			printf("ISOSCELES - Possui dois lados iguais");
		}
		else{   // lado1 != lado2 && lado1 != lado3 && lado2 != lado3 
			printf("ESCALENO - Possui todos os lados diferentes");
		}
	}	
	else{
		printf("\n Os valores informados nao formam um triangulo, informe outros valores.");
	}	
	
	return 0;
}