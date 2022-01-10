/*
EXERCICIO 3 - LISTA DE STRINGS DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Solicite ao usuário uma palavra.
 Exiba esta palavra com todas as letras maiúsculas.
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
	
	printf("\n\n\t\t\t\tDigita Maiuscula \n digite uma palavra e será mostrada ela toda em maiuscula\n\n");
	printf("Digite uma palavra :");
    scanf("%s", palavra);
    printf("\n---------------------------------------------------------------\n");
	
	for(i=0; palavra[i]!= '\0'; i++)
    {
        if(palavra[i]>= 97 && palavra[i]<= 122)
        {
            palavra[i] = palavra[i]  - 32;
            printf("%c",palavra[i]);
        }else
        {
            printf("%c",palavra[i]);
        }
    }
	
}
