/*
EXERCICIO 4 - LISTA DE STRINGS DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Solicite ao usu�rio uma palavra.
  Exiba esta palavra com a primeira letra mai�scula e as demais letras min�sculas.
*/
#include <windows.h>	
#include <stdio.h>	
#include <stdlib.h>	
#include <locale.h>
#include <time.h>	

int main()
{
	setlocale (LC_ALL,"");
	char palavra[50];
	int i;
	
	printf("\n\n                        Primeira Maiuscula \n digite uma palavra e a primeira letra ficar� maiuscula\n\n");
	printf("Digite uma palavra :");
    scanf("%s", palavra);
    printf("\n---------------------------------------------------------------\n");
	
	for(i=0; palavra[i]!= '\0'; i++)
    {
        if(palavra[0]>= 97 && palavra[0]<= 122)
        {
            palavra[0] = palavra[0]  - 32;
            printf("%c",palavra[0]);
        }else
        {
            printf("%c",palavra[i]);
        }
    }
}
