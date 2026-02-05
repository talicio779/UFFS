/*6.⊙ Dada uma sequência de n números (um número menor ou igual à 0 finaliza a sequência), apresentar o porcentual de números informados que são maiores ou igual a 10 e menores ou igual a 20. Exemplo:  
Número: 5
Número: 6 
Número: 11 
Número: 21 
Número: 0 
% entre 10 e 20: 50% 
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    //n = número s = soma p = porcentagem
    int n, s = 0, p = 0;
    scanf("%d", &n);

    while (n > 0){
        scanf("%d", &n);
    if ((n >= 10) && (n <= 20)){
        s++;
    }
    p++;
    }
    float per = (float)s / p * 100;
    printf("\n\na porcentagem de números entre 10 e 20 É: %.2f%%\n\n", per);

return 0;
}