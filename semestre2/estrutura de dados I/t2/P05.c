//5. ⊘ Faça um programa para calcular o fatorial de um número dado. O fatorial de um número n é n × (n − 1) × (n − 2) × . . . × 1, por definição o fatorial de 0 e 1 é 1. Por exemplo, o fatorial de 5 é 120, ou seja, 5 × 4 × 3 × 2 × 1 (perceba que não é necessário fazer a última multiplicação já que 1 é o elemento neutro da multiplicação). 
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, vf;
    printf("fatorial de:\n");
    scanf("%d", &n);
    i  = n;
    vf = n;
    printf("%d! = ", n);
       if (n == 0){
        printf("1\n");
    }
    //printf("\n\n%d\n\n", i);
    //printf("%d", vf);
    while (i > 2){
     
        printf("%d x ", i);
        i = i - 1;
        vf = vf * i;
    }
    if (i == 1){
    printf("1 = %d \n", vf);
    }



return 0;
}