/*
EXERCICIO 7 - LISTA DE STRINGS DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Faça um programa em C que leia uma palavra pelo teclado 
 e faça a impressão conforme o exemplo a seguir para a palavra OLA. 
 O 
 OL 
 OLA 
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
	int i= 0, j= 0, k= 0;
	
	printf("                        Printa diferente \n digite uma palavra.");
	printf(" Será reprintada de uma maneira diferente\n\n");
	printf("Digite uma palavra de aé 50 caracteres:");
    scanf("%s", palavra);
    printf("\n---------------------------------------------------------------\n");
    
     while(palavra[k]!= '\0')       //enquanto a string digitada nao chegar ao final:
    {
        k++;                //k ira contar. k tera uso futuramente
    }
    
    while(palavra[i]!= '\0')        // enquanto a string digitada nao chegar no fim:
    {
        printf("%c", palavra[i]);     //printe letra por letra dela, porem:
        if(i==j)                    // se I(posicao da variavel) for igual  a J
        {
            printf("\n");           //printe um  enter
            j++;                    //some J (Limite da string ate o proximo enter)
            i=0;                    //resete I (posicao da variavel)
            
            if(j== k)               //SE J (limite da string) for igual K(fim da string)
            {
                break;              //pare o while
            }
        }else
        {
            i++;                
        }
    }
    
    printf("\n---------------------------------------------------------------\n");
    printf("\n A palavra %s virou aqui ali em cima \n\n", palavra);
     printf("\n A palavra %s tem %d letras \n\n", palavra, k);
}	
