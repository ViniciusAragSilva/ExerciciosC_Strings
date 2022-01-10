/*
EXERCICIO 10 - LISTA DE STRINGS DE VINICIUS ARAGAO 4323
---------------------------------------------------------
  Solicite ao usuário que digite seu nome e último sobrenome (uma variável). 
  Separe a variável em duas, garantindo que a primeira letra é maiúscula 
  e as demais são minúsculas. Exiba o resultado.
 
*/
#include <windows.h>	
#include <stdio.h>	
#include <stdlib.h>	
#include <locale.h>
#include <time.h>	

int main()
{
	setlocale (LC_ALL,"");
	char nome[20], snome[20], cnome[40];
	int i= 0, k= 0, j= 0;
	printf("                        Separa nomes \n digite seu primeiro e ultimo nomes juntos, separados com espaço.");
	printf(" Será mostrado o seu nome separado do sobrenome com maiuscula no inicio\n\n");
	printf("Digite o nome: ");
    gets(cnome);
    fflush(stdin);
    
    printf("\n---------------------------------------------------------------\n");
    while(cnome[i]!= '\0')
    {
        /////////////////Maiuscula inicial/////////////////////////
        
        if(cnome[0]>= 97 && cnome[0]<= 122)
        {
            cnome[0] = cnome[0]  - 32;              //se tiver minusculo, vira maiusculo
        }
        ////////////////atribuicao de nome inicial/////////////////
        nome[k]= cnome[i];
        
        if(cnome[i]== ' ')
        {
            break;                          // A partir daqui ele começa a rodar o sobrenome, ao achar o espaco
        }
        i++;                                //pula 1 no contador 
        k++;                                //pula 1 no atribuidor pra terminar a string, pra n terminar no ponto que parou e comer o ultimo caract
    }
    
    nome[k]= '\0';                          //termina a string do primeiro nome
    k= 0;                                   //determina que o atribuidor eh zero
    i++;                                    //pula 1 pra n haver conflito no espaco dado
    j = i;
    
    while(cnome[i]!= '\0')
    {
        /////////////////Maiuscula inicial/////////////////////////
        
        if(cnome[j]>= 97 && cnome[j]<= 122)
        {
            cnome[j] = cnome[j]  - 32;
        }
        snome[k]= cnome[i];
        
        i++;
        k++;
    }
    snome[k]= '\0';
    
    printf("\n---------------------------------------------------------------\n");
    
    printf("\n Seu primeiro nome é %s \n\n", nome);
    printf("\n Seu ultimo nome é %s \n\n", snome);
}

