#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include <conio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
		setlocale(LC_ALL,"");
		
	int pontos = 11;	
	int n1, n2 ,n3;
	
	
	printf("*************************************************\n");
	printf("**BEM VINDO AO JOGO DE ADIVINHA��O EM DUPLA ...**\n");
	printf("*************************************************\n\n\n");
	printf("<<<");
	printf("   REGRAS !!\n\n");
	printf(" - Neste Jogo, a 1 pessoa ir� Digitar 3 Numeros;\n\n");
	printf(" - Numeros Inteiro e na sequ�ncia;\n\n");
	printf(" - A 2 pessoa ter� que adivinhar os Numeros na Ordem e Sequ�ncias corretas ;\n\n");
	printf(" - Voc� ter� 10 chances Para adivinhar e come�ar� com o total de 10 Pontos;\n\n");
	printf(" - Cada Rodada sem acertar voc� Perde 1 ponto;\n\n");
	printf(" - Desafie seus Amigos Para Ver quem termina com Mais Pontos;\n\n\n");
	printf(">>>\n\n");
		
		printf("Aperte Enter para Continuar!!");
		getche();
		system("cls");



	
	printf("*****************************************************************\n");
	printf("********************* VAMOS COME�AR ?? ***************************\n");
	printf("*****************************************************************\n\n\n\n");
	
	printf("Esta Pronto ? ");
	
	printf("\n\n\n\nAperte Qualquer Tecla Para Come�ar!!");
		getche();
		system("cls");

		printf("*****************************************************************\n");
		printf("******************** VEZ DO DESAFIANTE ***************************\n");
		printf("*****************************************************************\n\n\n\n");
		
		
		
	int cert;
	printf("Digite o Primeiro numero : \t");
		scanf("%d", &n1);
	printf("\n\nDigite o Segundo numero : \t");
		scanf("%d", &n2);
	printf("\n\nDigite o Terceiro numero : \t");
		scanf("%d", &n3);
		
	printf("\n\n\n\n\n Digite (1) para Continuar \n");
	printf("\n\n Digite (2) para Reiniciar o Jogo \n\t\n");
		scanf("%d", &cert);
		
		
	printf("\n\nAperte Qualquer Tecla Para Continuar!!");
		getche();
		system("cls");

	
			
	switch (cert){
			case 2:
			throw main();
			
	}
		
	
	
	

for(int i = 1; i <= 10; i++){
	
	
	
		printf("*****************************************************************\n");
		printf("******************** VEZ DO DESAFIADO ***************************\n");
		printf("*****************************************************************\n\n\n\n");
		
		
	int r1, r2 ,r3, tecla;
	
	
	printf("* TENTATIVA %d de 10",i);
	printf("\n\n\nQual foi o Primeiro numero ? \t");
		scanf("%d", &r1);
		
				if(r1 == n1){
				printf("Acertou o N�mero e a posi��o\n\n");
			}else if((r1 == n2) || (r1 == n3)){
				printf("Acertou o N�mero mas a posi��o est� errada\n\n");
			}else{
				printf("O N�mero est� errado\n\n");
			}
		
		
	printf("Qual foi o Segundo numero ? \t");
		scanf("%d", &r2);
	
			if(r2 == n2){
				printf("Acertou o N�mero e a posi��o\n\n");
			}else if((r2 == n1) || (r2 == n3)){
				printf("Acertou o N�mero mas a posi��o est� errada\n\n");
			} else{
				printf("O N�mero est� errado\n\n");
			}
			
			
	printf("Qual foi o Terceiro numero ? \t");
		scanf("%d", &r3);
		
			if(r3 == n3){
				printf("Acertou o N�mero e a posi��o\n\n");
			}else if((r3 == n1) || (r3 == n2)){
				printf("Acertou o N�mero mas a posi��o est� errada\n\n");
			}else{
				printf("O N�mero est� errado\n\n\n");
			}
		printf("Aperte Qualquer Tecla Para Continuar!!");
		getche();
		system("cls");
	
		
		pontos = pontos - 1;
		int tempo = clock();
		
	
	if((r1 == n1) && (r2 == n2) && (r3 == n3)){

	printf("\n\nCALCULANDO O RESULTADO . . . . .  \n");
	printf(". . . . . . . . . . . . . . . . . .\n\n ");
	printf(". . . . . . . Aguarde Alguns Segundos. . . . . . .\n\n ");

	tempo = clock();

	while(clock() - tempo < 6000){
		
	}

	
		printf("PRONTO, RESULTADO CALCULADO !!\n\n");
 		printf("Aperte para ver o RESULTADO !!\n");
		getche();
		system("cls");

		
		printf("*****************************************************************\n");
		printf("*********************** RESULTADO *******************************\n");
		printf("*****************************************************************\n");
		printf("\n\n\n\n\nParab�ns Voc� conseguiu Acertar os N�meros \n");
		printf("\n\nCom %d pontos\n\n\n\n",pontos);
		break;
	}else if (i == 10) {
		printf("\n\n\ VOC� N�O CONSEGUIU CONCLUIR O JOGO !!\n\n\n");
		printf("TENTAR NOVAMENTE (Aperte ENTER)!!\n");
		getche();
		system("cls");

	}
}
		
			
	system("pause");
	return 0;	
}
		
		
		
		
		
		
		
		
		
		
		
		
		
	
