#include <stdio.h>
#include <stdlib.h>

int main (){
	char nome[10];
	float n1, n2, soma;
	int valor;
	
	printf("\nDigite seu nome\n");
	scanf("%s", &nome);
	
	printf("\n %s, vamos calcular sua media\n", nome);
	
	
	printf("Digite sua primeira nota? \n");
	scanf("%f", &n1);
	
	printf("Digite sua segunda nota?\n");
	scanf("%f", &n2);
	
	soma= (n1+n2)/2;
	
	printf("A Soma de %2.f e %2.f e = %2.f\n", n1, n2, soma);
	
	if(soma>=10)
	{
		
		printf("\nVoce passou\n");
		
	} 
	else if (soma<10) 
	{
		printf("\nRecuperaçao\n");
		
	} 
	
	 printf("\n Vamos de sorteio\n ");
    
	printf("Vamos a escolha do premio, qual celular voce escolhe: Iphone12=[1], Google Pixel 5xl=[2], Samsung Note10plus=[3]");
	scanf("%d", &valor);
	
	
	switch(valor){	
		case 1:
			printf("\nVoce escolheu o Iphone 12, PARABENS!!\n");
		     break;
		
		case 2:
			printf("\n Voce escolheu o Google Pixel 5xl, Parabens\n");
			break;
		case 3:
			printf("\nVoce escolheu o Samsung Note10plus\n");
		    break;
		default:
		   printf("\nComando Invalido\n");	
		} 
	
	system("pause");
	return 0;
}