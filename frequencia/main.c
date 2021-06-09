#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

float classe[1000][10000];

int main() {
	system("color 07");
	system("title Estatistica e probabilidade");
	for(;;){
		system("cls");
		srand(time(NULL));
		float entradamin=0, numclasse=0,entradamax=0;
		printf("Entrada maxima:");
		scanf("%f",&entradamax);
		printf("Numero de colunas:");
		scanf("%f",&numclasse);
		entradamin = entradamax/numclasse;
		numclasse = numclasse -1;
		entradamax = entradamax -1;
		printf("Entrada minimo:%.0f",entradamin);
		float amp=0,pm=0,z0d7=0,d8t4=0,t5c2=0,c3s0=0,s1o8=0,o9c00=0,fc=0,fr=0;
		int j = 0;// coluna
		int resto=0;
		float menorv = entradamin;//entrada minima
		float maiorv = entradamax;//entrada maxima
		int i = 0;// linha
		amp = ((maiorv+1) - (menorv+1))/numclasse;
		int x = amp; //valor max carga coluna
		printf("\nColuna-0\n");
		for(i=0;i<=entradamax;i++){
			
				if(i==x){
					j++;
					x = x + amp;
					if(j==numclasse+1){
						j--;
						resto=1;
					}
					if(resto==0){
						printf("\nColuna-%d\n",j);
					}
					if(resto==1){
						printf("\nResto para a Coluna-%d\n",j);
					}
				}
				
			classe[j][i] = rand() % 101;
			printf("|%d/%d|",j,i);
		}
		printf("\n________________\n");
		printf("maior valor:%.0f\n",maiorv+1);
		printf("menor valor:%.0f\n",menorv);
		printf("Amplitude:%.2f\n",amp);
		printf("________________\n");
		
		if(j!=0){
			j=0;
			x=amp;
			resto=0;
		}
		printf("\nColuna-0\n");
		for(i=0;i<=entradamax;i++){
			
			if(i==x){
					j++;
					x = x + amp;
					if(j==numclasse+1){
						j--;
						resto=1;
					}
					if(resto==0){
						printf("\nColuna-%d\n",j);
					}
					if(resto==1){
						printf("\nResto para a Coluna-%d\n",j);
					}
				}
				
			printf("[%.0f]",classe[j][i]);
			if(classe[j][i] >= 0 && classe[j][i] <= 17 ){
				z0d7++;
			}
			if(classe[j][i] >= 18 && classe[j][i] <= 34 ){
				d8t4++;
			}
			if(classe[j][i] >= 35 && classe[j][i] <= 52 ){
				t5c2++;
			}
			if(classe[j][i] >= 53 && classe[j][i] <= 70 ){
				c3s0++;
			}
			if(classe[j][i] >= 71 && classe[j][i] <= 88 ){
				s1o8++;
			}
			if(classe[j][i] >= 89 && classe[j][i] <= 100 ){
				o9c00++;
			}
		}
		printf("\n_________________________________________________________\n");
		printf("Classe|Frequeicia|Ponto medio|FreqCumulativa|FreqRelativa\n");
		pm = (0+17)/2;
		fc = fc + pm;
		fr = z0d7/311;
		printf("0-17  |F=%.0f     |PM=%.0f       |FC=%.0f          |FR=%.2f\n",z0d7,pm,fc,fr);
		pm =(18+34)/2;
		fc = fc + pm;
		fr = d8t4/311;
		printf("18-34 |F=%.0f     |PM=%.0f      |FC=%.0f         |FR=%.2f\n",d8t4,pm,fc,fr);
		pm =(35+52)/2;
		fc = fc + pm;
		fr = t5c2/311;
		printf("35-52 |F=%.0f     |PM=%.0f      |FC=%.0f         |FR=%.2f\n",t5c2,pm,fc,fr);
		pm =(53+70)/2;
		fc = fc + pm;
		fr = c3s0/311;
		printf("53-70 |F=%.0f     |PM=%.0f      |FC=%.0f        |FR=%.2f\n",c3s0,pm,fc,fr);
		pm =(71+88)/2;
		fc = fc + pm;
		fr = s1o8/311;
		printf("71-88 |F=%.0f     |PM=%.0f      |FC=%.0f        |FR=%.2f\n",s1o8,pm,fc,fr);
		pm =(89+100)/2;
		fc = fc + pm;
		fr = o9c00/311;
		printf("89-100|F=%.0f     |PM=%.0f      |FC=%.0f        |FR=%.2f\n",o9c00,pm,fc,fr);
		printf("_________________________________________________________\n");
		printf("Amplitude:%.2f\n",amp);
		printf("Soma da frequencia:%.0f\n",z0d7+d8t4+t5c2+c3s0+s1o8+o9c00);
		getch();
	}
	return 0;
}
