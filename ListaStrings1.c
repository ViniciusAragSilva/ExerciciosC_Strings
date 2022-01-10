/*
EXERCICIO 1 - LISTA DE STRINGS DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Solicite que o usu�rio digite uma palavra. 
 Exiba o n�mero de caracteres que esta palavra cont�m 
 e exiba a palavra na ordem contr�ria (de tr�s para frente). 
 Fa�a esta tarefa sem utilizar as fun��es da biblioteca string.h
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
	
	printf("Digite uma palavra. \n Ser� exibida seu numero e letras e \n sua ordem contraria \n");
	//scanf("%s", palavra);													// scanneia a palavra como uma string
	gets(palavra);
	fflush(stdin);
	while(palavra[tamanho]!='\0')											// enquanto a posi��o da palavra, baseada no tamanho,for diferente do final:
    {
        tamanho++;															// incrementa tamanho, aumentando a posi��o em 1, at� o final
    }
    
    printf("\n A palavra %s tem %d letras.\n", palavra,tamanho);			// printa a string digitada e o tamanho dela
    printf("\n A palavra %s ao contr�rio �: ", palavra);					// agora o contra
    
    while(tamanho != 0)														// enquanto a palavra, basead no tamanho (que � o valor da ultima letra) for diferente do valor inicial 
    {
       
		arvalap[ohnamat] = palavra[tamanho-1];								// tem q ser -1, pois por exemplo, uma palavra de 5 letras vai de 0 a 4
		tamanho--;															// decrementa o tamanho em 1, isso at� a posi��o inicial, que � palavra[0]
        ohnamat++;
    }
    printf("%s", arvalap);
}
