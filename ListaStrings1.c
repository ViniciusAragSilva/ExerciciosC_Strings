/*
EXERCICIO 1 - LISTA DE STRINGS DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Solicite que o usuário digite uma palavra. 
 Exiba o número de caracteres que esta palavra contém 
 e exiba a palavra na ordem contrária (de trás para frente). 
 Faça esta tarefa sem utilizar as funções da biblioteca string.h
*/
#include <windows.h>	
#include <stdio.h>	
#include <stdlib.h>	
#include <locale.h>
#include <time.h>	

int main()
{
	setlocale (LC_ALL,"");
	char palavra[40]={}, arvalap[40]={};														// Palavra que a pessoa escreve
	int tamanho = 0, ohnamat= 0;														// conta o tamanho da palavra
	
	printf("Digite uma palavra. \n Será exibida seu numero e letras e \n sua ordem contraria \n");
	//scanf("%s", palavra);													// scanneia a palavra como uma string
	gets(palavra);
	fflush(stdin);
	while(palavra[tamanho]!='\0')											// enquanto a posição da palavra, baseada no tamanho,for diferente do final:
    {
        tamanho++;															// incrementa tamanho, aumentando a posição em 1, até o final
    }
    
    printf("\n A palavra %s tem %d letras.\n", palavra,tamanho);			// printa a string digitada e o tamanho dela
    printf("\n A palavra %s ao contrário é: ", palavra);					// agora o contra
    
    while(tamanho != 0)														// enquanto a palavra, basead no tamanho (que é o valor da ultima letra) for diferente do valor inicial 
    {
       
		arvalap[ohnamat] = palavra[tamanho-1];								// tem q ser -1, pois por exemplo, uma palavra de 5 letras vai de 0 a 4
		tamanho--;															// decrementa o tamanho em 1, isso até a posição inicial, que é palavra[0]
        ohnamat++;
    }
    printf("%s", arvalap);
}
