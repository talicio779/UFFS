#include <stdio.h> 
//4. Faça um programa que peça 4 números inteiros. 
//Em seguida, apresente quantos números informados são negativos e quantos são positivos (considere o 0 como positivo). 

int main(int argc, char const *argv[])
{
    int i = 0, N, addPos = 0 ,addNeg = 0;
    while (i < 5){
        printf("digite um número inteiro: \n");
        scanf("%d", &N);
        if (N >= 0){
        addPos++; 
        } else if (N < 0){
        addNeg++;
        }
    i++;
        }
    printf("%d (+) " "e" " %d (-) \n", addPos, addNeg);

return 0;
}