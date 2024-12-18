#include <stdio.h>
//5. Você vai fazer um programa para classificar os competidores segundo as suas posições. Foram criadas 5 classes:
// Top 5 (1-5), Top 10 (6-10), Top 20 (11-20), Top 30 (21-30) e Top 100 (outras posições).
//Faça um programa que peça a posição do competidor e indique a classe do mesmo. Exemplos de execução:

int main(int argc, char const* argv[])
{
    int p;
    printf("digite uma posição:\n");
    scanf("%d", &p);
    
    if (p < 5){
        printf("Top5");
    }else {if ((p < 10 && p > 5 ) ==1){           
        printf("Top 10");
    }else {if ((p > 10 && p <=20) == 1){
        printf("Top 20");
    }else {if ((p > 20 && p <=30) == 1){
        printf("Top 30");
    }else {if ((p > 30 && p <=100) == 1){
        printf("Top 100");}
    }}}}





return 0;
}