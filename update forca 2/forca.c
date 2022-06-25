#include<stdio.h>   		
#include<stdlib.h> 

int main()
{
	//verificadores e inputs;
	char letra; char letra2[25] = ""; 
	char ldigitadas[25] = " ";
	char palavra[] = " "; char p[] = " ";	

	//contadores de loops ou marcadores de erros
	int i=0; int i2=0;
	int cont=0; int cont2=0; int cont3=0;
	int erro=0; int erro2=0;
	
	int rep=0;
	
	char palavra0[] = "porta.";
	char palavra1[] = "furao.";
	char palavra2[] = "gosta.";
	char palavra3[] = "normal.";
	char palavra4[] = "junto.";
	char palavra5[] = "javascript.";
	char palavra6[] = "queixo.";
	char palavra7[] = "lampada.";
	char palavra8[] = "mesa.";
	char palavra9[] = "costas.";
	
	srand(time(NULL));
	i = rand() % 10; 
	
	printf("%d\n", i);
	
	switch(i)
	{
		case 0:
			i = 0;
			for(i = 0; i < 26; i++)
			{
				palavra[i] = palavra0[i];
			}
			break;
			
		case 1:
			i = 0;
			for(i = 0; i < 26; i++)
			{
				palavra[i] = palavra1[i];
			}
			break;
			
		case 2:
			i = 0;
			for(i = 0; i < 26; i++)
			{
				palavra[i] = palavra2[i];
			}
			break;
			
		case 3:
			i = 0;
			for(i = 0; i < 26; i++)
			{
				palavra[i] = palavra3[i];
			}
			break;
			
		case 4:
			i = 0;
			for(i = 0; i < 26; i++)
			{
				palavra[i] = palavra4[i];
			}
			break;
			
		case 5:
			i = 0;
			for(i = 0; i < 26; i++)
			{
				palavra[i] = palavra5[i];
			}
			break;
			
		case 6:
			i = 0;
			for(i = 0; i < 26; i++)
			{
				palavra[i] = palavra6[i];
			}
			break;
			
		case 7:
			i = 0;
			for(i = 0; i < 26; i++)
			{
				palavra[i] = palavra7[i];
			}
			break;
			
		case 8:
			i = 0;
			for(i = 0; i < 26; i++)
			{
				palavra[i] = palavra8[i];
			}
			break;
			
		case 9:
			i = 0;
			for(i = 0; i < 26; i++)
			{
				palavra[i] = palavra9[i];
			}
			break;
	}
	
	i = 0; 
	
	while(i2 == 0)
	{
		if(palavra[i] == '.') 
		{
			palavra[rep + 1] = ' ';
			i2 = 1;
		} 

		rep++;
		i++;
	}
	
	rep--;
	i2 = 0;
	i = 0;
	
	for(i = 0; i < rep; i++)
	{
		p[i] = '_';
	}
	
	i = 0;

	//Inicia um loop que encerra após tantos erros (no caso 6) ou acerto da palavra (no caso javascript)
	while(0 == 0)
	{
		
		//Pergunta
		while (i == 0)	
		{
			
			//comando para limpas informações de printf (limpeza de informações de mensagens)
			system("cls");
			
			//Chama a função forca, a qual, mostra o desenho da forca de acordo com tanto de erros
			forca(erro);
			
			printf("Letras erradas ja digitas:\n\n");
			printf("(%s)\n", ldigitadas);
			printf("%s\n\n", p);
			letra = getch();
		
			i++;
		}
		
		//Verifica se a letra ja foi digita anteriromente 
		for(i2 = 0; i2 < 26; i2++)
		{
			if(letra2[i2] == letra)
			{
				i2 = 26;
			}
			
			if(letra2[i2] != letra)
			{
				erro2++;
				
				if(erro2 == 25)
				{
					cont3++;
					letra2[cont3] = letra;
				}
			}
		}
		
		//Varios loops usam o (i) como termo de repetição, por isso, ao fim dos loops o (i) deve ser resetado para o valor 0
		i = 0;
		
		if(i2 == 27)
		{
			system("cls");
			printf("Voce ja digitou essa letra\n\n");
			system("pause");
			i = 10;
		}
		
		i2 = 0;
		erro2 = 0;
		
		//Verificador
		while(i < rep)
		{
			
			//Verifica aonde está a posição da letra, sobrescreve a letra na veriável (p) e contabiliza os acertos;
			if(palavra[i] == letra)
			{
				p[i] = letra;
				cont = cont + 1;			
			}
			
			//Verifica se a letra não está naquela posição
			if(palavra[i] != letra)
			{
				
				//Um contador de erros que marca quantas vezes essa posição foi falsa
				erro2 = erro2 + 1;
				
				//Se esse contador (erro) for igual a 10, que é o numero de letras da palavra ou seja não há está letra na palavra
				if(erro2 == rep)
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
			
			i++;
		}
		
		//Reseta o cortador de erros de posições (Leia o codigo primeiro)
		erro2 = 0;
		
		//Varios loops usam o (i) como termo de repetição, por isso, ao fim dos loops o (i) deve ser resetado para o valor 0
		i = 0;
		
		//Quando a variável de acertos chega a 10 (quantidades de letras presentes na palavra) ela encerra o loop
		if(cont == rep)
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
	if(cont == rep)
	{
		system("cls");
		printf("Voce acertou a palavra:\n\n%s\n\n", p);
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
		
		printf("Voce deseja ver qual era a palavra? Sim(aperte space) Nao (Aperte qualquer tecla)\n");
		
		//É usada a mesma variável, pois, essa variável não está mais em uso após o fim do loop (isso economiza variáveis)
		letra = getch();
		
		//Caso aperte (space) entrará nessas condições ou caso aperte qualquer outra tecla o programa será encerrado
		if(letra == ' ')
		{
			system("cls");
			printf("A palavra era: %s\n\n", palavra);
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
			printf(" |      / \\    \n");
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
			printf(" |      / \\    \n");
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
			printf(" |      / \\    \n");
			printf(" |              \n");
			printf("\n\n");
		}
}
