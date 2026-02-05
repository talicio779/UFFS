#include <stdio.h>
//2. Uma loja vende produtos à vista e a prazo (pagamento 30 dias depois da compra). À vista tem um desconto de 5% e a prazo um acréscimo de 10%. 
//Faça um programa em C que peça o preço do produto e a forma de pagamento: 1 para à vista e 2 para a prazo. 
//Depois apresente o preço final do produto. Exemplos de execução:
int main(int argc, char const *argv[])
{
    int pp, fp;
    printf("preço:");
    scanf("%d", &pp);
    printf("forma de pagamento: (1) à vista, (2) à prazo");
    scanf("%d", &fp);
    if (fp == 1){
        pp * (0.95);
        printf("preço final: %d \n", pp);

    }else if (fp == 2){
        pp * (1.10);
        printf("preço final: %d \n", pp);}

return 0;
}