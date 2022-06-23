#include<stdio.h>   		
#include<stdlib.h> 

int main()
{
	char letra; char letra2; char ldigitadas[25] = "";
	char palavra[] = "javascript"; char p[] = "__________";	
	int i=0; int cont=0; int cont2=0; int erro=0; int erro2=0;
	
	while(0 == 0)
	{
		//pergunta
		while (i == 0)	
		{
			erro2 = 0;
			
			system("cls");
			forca(erro);
			printf("Letras erradas ja digitas:\n\n");
			printf("%s\n", ldigitadas);
			printf("%s\n", p);
			letra = getch();
		
			i++;
		}
		i = 0;
		
		if(letra == letra2)
		{
			continue;
		}
		
		letra2 = letra;
		
		//verificador
		for(i = 0; i < 10; i++)
		{
			if(palavra[i] == letra)
			{
				p[i] = letra;			
			}
			
			if(palavra[i] == letra)
			{
				cont = cont + 1;			
			}				
		}
		
		i = 0;
		for(i = 0; i < 10; i++)
		{
			if(palavra[i] != letra)
			{
				erro2 = erro2 + 1;
				if(erro2 == 10)
				{
					ldigitadas[cont2] = letra;
					cont2++;
					ldigitadas[cont2] = ' ';
					cont2++;
					erro = erro + 1;
				}				
			}				
		}
		
		i = 0;
		
		if(cont == 10)
		{
			break;
		}
		
		if(erro == 6)
		{
			break;
		}		
	}
	
	if(cont == 10)
	{
		system("cls");
		printf("voce acertou a palavra:\n\n %s", p);
		system("pause");
	}
	
	if(erro == 6)
	{	
		system("cls");
		printf("voce errou a palavra\n\n");
		forca(erro);
		
		printf("voce deseja ver qual era a palavra? Sim(aperte s) Não (Aperte qualquer tecla)\n");
		letra = getch();
		
		if(letra == 's')
		{
			printf("A palavra era: \n%s\n\n", palavra);
			system("pause");
		}
		
		else
		{
			system("pause");
		}
	}
}

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
			printf(" |      / \     \n");
			printf(" |              \n");
			printf("\n\n");
		}
}
