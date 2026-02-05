/*1. • Faça um programa que peça um número e imprima os números de 1 até o número informado. Sendo que, quando chegar na metade da impressão, mostrar a mensagem Metade (a metade não precisa ser exata). Exemplos: 
Número: 6				Número: 7		ou	Número: 7
1 						1				1
2 						2				2
3 						3				3
Metade 					4		        Metade
4 						Metade			4	
5 						5				5
6 						6				6
						7				7
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, m, n = 0;
    printf("digite um número:");
    scanf("%d", &num);
    m = num / 2;
    //printf("%d", m);
     while (n < num){

        if (n == m){
            printf("\n%d", n);
            printf("\n metade");
            n++;

    
    }else {
        printf("\n%d", n );
        n++;
    }}    





return 0;
}    