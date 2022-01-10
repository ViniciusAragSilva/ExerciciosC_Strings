/*
EXERCICIO 8 - LISTA DE STRINGS DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Solicite que o usuário escreva uma frase, 
 escolha um caractere para busca e um caractere para substituição. 
 Realize a substituição escolhida. Exiba o resultado.
*/
#include <windows.h>	
#include <stdio.h>	
#include <stdlib.h>	
#include <locale.h>
#include <time.h>	

int main()
{
    setlocale (LC_ALL,"");
	char frase[50], c1, c2;
	int i= 0, numero= 0;
	
	printf("                        Troca de caractere \n digite uma frase e dois caracteres.");
	printf(" Será mostrado o trocado o primeiro pelo segundo\n\n");
	printf("Digite uma frase :");
    scanf("%[^\n]", frase);
    fflush(stdin);
    printf("\n\nDigite o caracter pra ser trocado:  ");
    scanf("%c", &c1);
     fflush(stdin);
    printf("\n\nDigite o caracter pra troca :");
    scanf("%c", &c2);
    printf("\n---------------------------------------------------------------\n");
    
    while(frase[i]!= '\0')
    {
        if(frase[i]== c1)
        {
             printf("%c", c2);
        }else
        {
             printf("%c", frase[i]);
        }
        i++;
    }
    printf("\n---------------------------------------------------------------\n");
}	
