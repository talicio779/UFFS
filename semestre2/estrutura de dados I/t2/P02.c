//2. ⊙ Faça um programa que simule a multiplicação por meio de adições. Para tal serãoo pedidos os dois operandos. Por exemplo se for informado 3 e 4, deverá ser calculado, usando a soma, 3∗4, ou seja, 12. Este cálculo é feito somando o primeiro valor informado por ele mesmo o número de vezes representada pelo segundo número. Nesse exemplo, o três seria somado quatro vezes: 3+3+3+3, resultando 12. 
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // numb = número base v = vezes
    int numb, v, m = 0, num = 0;
   
    printf("digite o número base:");
    scanf("%d", &numb);
    printf("digite a quantidade de vezes dessa soma:");
    scanf("%d", &v);

    num = numb;
    m = numb * v;

    //printf("%d %d %d %d", numb, v, m, num);
    while (numb < m){
        printf("%d", num);
        printf(" + ");
        numb = numb + num;
        //printf("%d %d %d %d", numb, v, m, num);

    }
    printf("%d", num);
    printf(" = ");
    printf("%d\n", m);


return 0;
}