#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int marca, modelo;
	float preco[4]= {200, 120, 150, 190}; 
	int option = 1;
	
	setlocale(LC_ALL, "portuguese");
	
	//qualquer coisa teste
	while (option!=2) {
	printf("Escolha a marca do Tenis \n 0 - Nike \n 1 - Puma \n 2 - Adidas \n 3 - Nb \n selecione o produto: ");
	scanf("%d", &marca);
	switch (marca) {
		case 0 :
			printf("\n Escolha o modelo do tenis: \n 1 - Air Max \n 2 - Air Force \n selecione o modelo: ");
			scanf("%d",&modelo);
			break;
		case 1 : 
			printf("\n Escolha o modelo do tenis: \n 1 - XRay2 \n 2 - Flyer Runner \n selecione o modelo: ");
			scanf("%d",&modelo);
			break;
		case 2 :
			printf("\n Escolha o modelo do tenis: \n 1 - Superstar \n 2 - Forum \n selecione o modelo: ");
			scanf("%d",&modelo);
			break;
		case 3 :
			printf(" \n Escolha o modelo do tenis: \n 1 - Nb 574 \n 2 - Nb 550 \n selecione o modelo: ");
			scanf("%d",&modelo);
			break;
	}
	if (marca==0){
		printf("\n o valor a ser pago �: %.2f \n", preco[marca]);
		
	}
	if (marca==1){
		printf("\n o valor a ser pago �: %.2f \n", preco [marca]);
		
	}
	if (marca==2){
		printf("\n o valor a ser pago �: %.2f \n", preco [marca]);
		
	}if (marca==3){
		printf("\n o valor a ser pago �: %.2f \n", preco [marca]);
		
	}
	
	printf("\n deseja continuar? \n 1 - S \n 2 - N \n selecione um n�mero: ");
	scanf("%d", &option);
	
	
	}
	return 0;
}
