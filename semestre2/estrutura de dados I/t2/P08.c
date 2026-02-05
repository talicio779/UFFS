//8. ⊙ Antonio tem 1,50m e cresce 2cm por ano. Carlos tem 1,10m e cresce 3cm por ano. Fazer um programa que calcule quantos anos seriam necessários para que Carlos tivesse a mesma altura que Antonio. Supondo que os dois crescem todos os anos. 
#include <stdio.h>

int main(int argc, char const *argv[]){
    int i = 1, AA = 150, CC = 110;

    float A = 1.50, a = 0.02, C = 1.10, c = 0.03;
    printf("\naltura Antonio:%0.2f", A);
    printf("\naltura Carlos:%0.2f", C);

    while(CC <= AA){
    printf("ano %d", i);
    i++;
    A += a;
    C += c;
    AA += 2;
    CC += 3;
    printf("\naltura Antonio:%0.2f", A);
    printf("\naltura Carlos:%0.2f \n", C);
    if (AA < CC){
    break;
    }
    }
    printf("final!\n\n\n");


return 0;
}