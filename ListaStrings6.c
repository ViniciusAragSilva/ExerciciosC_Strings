/*
EXERCICIO 6 - LISTA DE STRINGS DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Solicite que o usu�rio escreva uma frase e escolha um caractere. 
 Exiba o n�mero de ocorr�ncias do caractere na frase.  
*/
#include <windows.h>	
#include <stdio.h>	
#include <stdlib.h>	
#include <locale.h>
#include <time.h>	

int main()
{
	setlocale (LC_ALL,"");
	char frase[50], carac;
	int i= 0, numero= 0;
	
	printf("===========================================================================\n");
	printf("\t\t\t Vezes de caractere \n digite uma frase e um caractere.");
	printf(" Ser� mostrado quantas vezes ele aparece\n\n");
	printf("===========================================================================\n");
	
	printf("Digite uma frase :");
    scanf("%[^\n]", frase);
    fflush(stdin);
    
    printf("\n\n Digite o caracter para an�lise :");
    scanf("%c", &carac);
    printf("\n---------------------------------------------------------------\n");
    
	while(frase[i]!= '\0')
    {
        printf("\n %c ", frase[i]);
        
        if(frase[i]== carac)
        {
           numero++;
        }
        i++;
    }
    printf("\n---------------------------------------------------------------\n");
    printf("\n A frase \" %s \" possui %d caracteres iguais a \" %c \" \n\n", frase, numero, carac);
}	
