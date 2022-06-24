#include<stdio.h>   		
#include<stdlib.h> 

int main()
{
	//verificadores e inputs;
	char letra; char letra2; 
	char ldigitadas[25] = "";
	char palavra[30] = "javascript"; char p[] = "__________";	

	//contadores de loops ou marcadores de erros
	int i=0;
	int cont=0; int cont2=0;
	int erro=0; int erro2=0;
	
	//Inicia um loop que encerra após tantos erros (no caso 6) ou acerto da palavra (no caso javascript)
	while(0 == 0)
	{
		
		//Pergunta
		while (i == 0)	
		{
			
			//Reseta o cortador de erros de posições (Leia o codigo primeiro)
			erro2 = 0;
			
			//comando para limpas informações de printf (limpeza de informações de mensagens)
			system("cls");
			
			//Chama a função forca, a qual, mostra o desenho da forca de acordo com tanto de erros
			forca(erro);
			
			printf("Letras erradas ja digitas:\n\n");
			printf("(%s)\n", ldigitadas);
			printf("%s\n", p);
			letra = getch();
		
			i++;
		}
		
		//Varios loops usam o (i) como termo de repetição, por isso, ao fim dos loops o (i) deve ser resetado para o valor 0
		i = 0;
		
		
		//Verifica se a letra ja foi digita anteriromente 
		if(letra == letra2)
		{
			continue;
		}
		
		
		//A variável (letra2) recebe a variável (letra) assim sendo um historico dela
		letra2 = letra;
		
		
		//Verificador
		for(i = 0; i < 10; i++)
		{
			
			//Verifica aonde está a posição da letra e sobrescreve a letra na veriável (p);
			if(palavra[i] == letra)
			{
				p[i] = letra;			
			}
			
			//Verifica se a letra digitada contem na palavra e contabiliza os acertos
			if(palavra[i] == letra)
			{
				cont = cont + 1;			
			}				
		}
		
		
		//Varios loops usam o (i) como termo de repetição, por isso, ao fim dos loops o (i) deve ser resetado para o valor 0
		i = 0;
		
		for(i = 0; i < 10; i++)
		{
			
			//Verifica se a letra não está naquela posição
			if(palavra[i] != letra)
			{
				
				//Um contador de erros que marca quantas vezes essa posição foi falsa
				erro2 = erro2 + 1;
				
				//Se esse contador (erro) for igual a 10, que é o numero de letras da palavra ou seja não há está letra na palavra
				if(erro2 == 10)
				{
					//Assim uma outra variável quantas vezes o usuario erro a letra
					erro = erro + 1;
					
					//Armazena as letra erradas para mostrar na proxima repetição, qual foi a letras erradas já digitadas
					ldigitadas[cont2] = letra;
					
					//A variável é somada para poder oculpar outro espaço nela
					cont2++;
					
					//Esse espaço é preenchido com um espaçamento (afim de estetica)
					ldigitadas[cont2] = ' ';
					
					//A variável é somada mais uma vez para que na proxima reptição outra possivel letra possa o culpar outro espaço
					cont2++;
				}				
			}				
		}
		
		//Varios loops usam o (i) como termo de repetição, por isso, ao fim dos loops o (i) deve ser resetado para o valor 0
		i = 0;
		
		//Quando a variável de acertos chega a 10 (quantidades de letras presentes na palavra) ela encerra o loop
		if(cont == 10)
		{
			break;
		}
		
		//Quando a variável de erros chega a 6 (quantidades de erros baseada no google) ela encerra o loop
		if(erro == 6)
		{
			break;
		}		
	}
	
	//Caso ganhe
	if(cont == 10)
	{
		system("cls");
		printf("Voce acertou a palavra:\n\n%s\n\n", p);
		
		//Comando para pausar o programa afim de o usuario conseguir ler a informçãoes (quando aperta qualquer tecla o programa encerra)
		system("pause");
	}
	
	//Caso perca
	if(erro == 6)
	{	
		system("cls");
		printf("Voce errou a palavra\n\n");
		
		//Chama a função forca, a qual, mostra o desenho da forca de acordo com tanto de erros (ela é chamada novamente por causa da limpeza)
		forca(erro);
		
		//Comando que espera tantos segundos (no caso um) para executar comandos abaixo dele
		sleep(1);
		
		printf("Voce deseja ver qual era a palavra? Sim(aperte s) Nao (Aperte qualquer tecla)\n");
		
		//É usada a mesma variável, pois, essa variável não está mais em uso após o fim do loop (isso economiza variáveis)
		letra = getch();
		
		//Caso aperte (s) entrará nessas condições ou caso aperte qualquer outra tecla o programa será encerrado
		if(letra == 's')
		{
			system("cls");
			printf("A palavra era: %s\n\n", palavra);
			system("pause");
		}
	}
}

//função que mostra desenhos (no caso a forca) e dicas (no caso após 3 erros) depedendo do tanto de erros (variável: erro)
int forca(int erro)
{
	if(erro == 0)
		{
			printf("  ________      \n");
			printf(" |/      |      \n");
			printf(" |              \n");
			printf(" |              \n"); 
			printf(" |              \n");
			printf(" |              \n");
			printf(" |              \n");
			printf("\n\n");
		}
		
		if(erro == 1)
		{
			printf("  ________      \n");
			printf(" |/      |      \n");
			printf(" |       O      \n");
			printf(" |              \n"); 
			printf(" |              \n");
			printf(" |              \n");
			printf(" |              \n");
			printf("\n\n");
		}
		
		if(erro == 2)
		{
			printf("  ________      \n");
			printf(" |/      |      \n");
			printf(" |       O      \n");
			printf(" |       |      \n"); 
			printf(" |       |      \n");
			printf(" |              \n");
			printf(" |              \n");
			printf("\n\n");;
		} 
		
		if(erro == 3)
		{
			printf("  ________      \n");
			printf(" |/      |      \n");
			printf(" |       O      \n");
			printf(" |       |      \n"); 
			printf(" |       |      \n");
			printf(" |      /       \n");
			printf(" |              \n");
			printf("\n\n");
			
			printf("DICA: A palavra tem haver com programacao\n\n");
		}
		
		if(erro == 4)
		{
			printf("  ________      \n");
			printf(" |/      |      \n");
			printf(" |       O      \n");
			printf(" |       |      \n"); 
			printf(" |       |      \n");
			printf(" |      / \     \n");
			printf(" |              \n");
			printf("\n\n");
		}
		
		if(erro == 5)
		{
			printf("  ________      \n");
			printf(" |/      |      \n");
			printf(" |       O      \n");
			printf(" |     --|      \n"); 
			printf(" |       |      \n");
			printf(" |      / \     \n");
			printf(" |              \n");
			printf("\n\n");
		}
		
		if(erro == 6)
		{
			printf("  ________      \n");
			printf(" |/      |      \n");
			printf(" |       O      \n");
			printf(" |     --|--    \n"); 
			printf(" |       |      \n");
			printf(" |      //      \n");
			printf(" |              \n");
			printf("\n\n");
		}
}
