/*
EXERCICIO 2 - LISTA DE STRINGS DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Solicite uma frase. Exiba a frase digitada, com cada palavra ocupando uma linha.
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
	char palavras[50];
	int i;
	
	printf("                        Digita Frase \n digite uma frase e será mostrada palavra por palavra dela\n\n");
	printf("Digite uma frase :");
    scanf("%[^\n]", frase);     // esse formato no scanf não interrompe a leitura com o espaco, mas ve o espaco como caractere
    printf("\n---------------------------------------------------------------\n");
    
    for(i= 0; frase[i]!= '\0'; i++) //para: i igual zero, enquanto frase(i) for diferente do final, i vai somar 1
    {
        printf("%c", frase[i]);     //printa cada caractere que foi analisada no scanf
        if(frase[i]== ' ')          //SE ele encontrar um caractere com o formato de um espaco:
        {
            printf("\n");           //printa um enter
        }
    }
    printf("\n---------------------------------------------------------------\n");
    printf("\n A frase original era: %s \n", frase);
}
