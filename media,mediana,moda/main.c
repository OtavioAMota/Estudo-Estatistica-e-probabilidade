#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
	int numvalor=0;
	int numfor= numvalor;
	float varsomato, aux;
	float mediana = 0;
	float moda = 0;
	printf("numero de valores(0 = 1):");
	scanf("%d",&numvalor);
	numfor = numvalor;
	float varsoma[numfor];
	
	for(int i=0;i<numfor;i++){
		printf("valor-%d:",i);
		scanf("%f",&varsoma[i]);
		varsomato = varsomato + varsoma[i];
	}
	
	printf("\n");
	int auxmediana = numvalor/2;
	//crescente
	for(int i=0;i<numfor;i++){
		for(int j=0;j<numfor;j++){
			if(varsoma[i] < varsoma[j]){
				aux = varsoma[i];
				varsoma[i] = varsoma[j];
				varsoma[j] = aux;
			}
		}
	}
	for(int i=0;i<numfor;i++){
		printf("vetor-%d:%.0f\n",i,varsoma[i]);
		if(i == auxmediana){
			mediana = mediana + varsoma[i];
		}
	}
	printf("\n");
	//decrescente
	for(int i=0;i<numfor;i++){
		for(int j=0;j<numfor;j++){
			if(varsoma[i] > varsoma[j]){
				aux = varsoma[i];
				varsoma[i] = varsoma[j];
				varsoma[j] = aux;
			}
		}
	}
	
	for(int i=0;i<numfor;i++){
		printf("vetor-%d:%.0f\n",i,varsoma[i]);
		if(i == auxmediana){
			mediana = mediana + varsoma[i];
		}
	}
	
	mediana = mediana/2;
	varsomato = varsomato/numvalor;
	printf("\nmedia:%.2f",varsomato);
	printf("\nmediana:%.2f(Se for par, eh usado valores centrais.)",mediana);
	printf("\nmoda:%.2f(O numero que mais repete eh a moda)",moda);
	system("pause");
	return 0;
}
