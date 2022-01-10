/*
EXERCICIO 5 - LISTA DE STRINGS DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Solicite que o usuário escreva uma frase.
 Exiba o número de palavras que esta frase contém. 
*/
#include <windows.h>	
#include <stdio.h>	
#include <stdlib.h>	
#include <locale.h>
#include <time.h>	

int main()
{
	setlocale (LC_ALL,"");
	char frase[50];
	int i= 0, palavra= 1;
	
	printf("                        Digita Frase \n digite uma frase e será mostrada o numero de palavras\n\n");
	printf("Digite uma frase :");
    scanf("%[^\n]", frase);
    printf("\n---------------------------------------------------------------\n");
    while(frase[i]!= '\0')
    {
        if(frase[i]== ' ')
        {
            palavra++;
        }
        i++;
    }
    printf("\n A frase \"%s\" possui %d palavras \n\n", frase, palavra);
}
