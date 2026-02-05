/*7. ⊙ Faça um programa que peça o salário e o número de filhos dos habitantes de uma região. Quando o salário informado for menor que zero, as entradas são finalizadas e serão apresentadas as médias salarial e de filhos informados. Exemplo: 
Salário: 1500 
Filhos: 2 
Salário: 3245 
Filhos: 2 
Salário: -1 
Média salários: 2372.5 
Média filhos: 2.0 */
#include <stdio.h>

int main(int argc, char const *argv[]) {

    int sal = 1, fil, totalsal = 0, totalfil = 0, somsal = 0, somfil = 0;
    while (sal > 0){
        printf("salário:");
        scanf("%d", &sal);
        if (sal < 0){
            break;
        }
        printf("filhos:");
        scanf("%d", &fil);
        
        totalsal += sal;
        totalfil += fil;

        somsal++;
        somfil++; //a média que fiz anterior era de somfil += fil mas de output não dava como pedia
        
    }

    printf("\n\n\n\n%d\n", totalsal);
    printf("%d\n\n\n\n", totalfil);

    float mediasal = (float)totalsal / somsal;
    printf("média salário: %.02f \n",mediasal);
    float mediafil = (float)totalfil / somfil;
    printf("média filhos: %.02f \n",mediafil);





return 0;
}
