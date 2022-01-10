/*
EXERCICIO 9 - LISTA DE STRINGS DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Solicite ao usuário que digite seu nome e último sobrenome 
 (variáveis separadas). Crie uma string cujo conteúdo 
 é o nome completo do usuário. 
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
	printf("                        Junta nomes \n digite seu primeiro e ultimo nomes.");
	printf(" Será mostrado o seu nome junto com o sobrenome\n\n");
	printf("Digite o primeiro nome: ");
    gets(nome);
    fflush(stdin);
    printf("\n\nDigite o ultimo nome: ");
    gets(snome);
    fflush(stdin);
    
    printf("\n---------------------------------------------------------------\n");
    
    while(nome[i]!= '\0')           //enquanto o nome, na posicao I, for diferente do fim:
    {
        cnome[k] = nome[i];         //cnome na posicao K eh igual o nome na posicao I
        i++;                        //adiciona 1 pra I
        k++;                        //adiciona 1 pra K
    }
    cnome[k] = ' ';                 //O fim de cnome na posicao K ficou sem nada, portanto ganha um espaco
    i= 0;                       //reseta I para usar no snome
    k++;                        //adiciona 1 pro K pra ele nao sobrepor o espaco colocado, no comeco do proximo while

    while(snome[i]!= '\0')      //enquanto snome, na posicao I, for diferente do fim:
    {
        cnome[k] = snome[i];        //cnome na posicao K eh igual o snome na posicao I
        i++;                        //soma I
        k++;                        //soma K
    }
    
    cnome[k] = '\0';                //NECESSARIO colocar um FIM em cnome baseado em K, pra ele n colocar valores quaiquer pra terminar a string
    
    printf("\n---------------------------------------------------------------\n");
    
    printf("\n Seu nome inteiro é %s \n\n", cnome);
}
