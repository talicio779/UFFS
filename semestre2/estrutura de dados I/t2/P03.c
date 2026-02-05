//3. ⊙ Faça um programa que peça uma valor e imprima a soma de todos os números de 1 até o valor informado. Por exemplo, se o valor informado for 6, o resultado será 21, ou seja, 1 + 2 + 3 + 4 + 5 + 6. 
#include <stdio.h>

int main(int argc, char const *argv[])
{
    //v =valor s = soma vf = valor final
    int v, s = 0, vf = 0;
    
    printf("insira um valor:");
    scanf("%d", &v);

    while (s < v){
        vf = vf + s;
        s++;
        if (s == 0){
            continue;
        }
    printf("%d", s);
        if (s == v){
            continue;
        }
    printf(" + ");
    }
    vf = vf + v;
    printf(" = ");
    printf("%d", vf);

return 0;    
}