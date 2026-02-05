#include <stdio.h>
//3. Faça um programa que calcule a duração de um evento qualquer. 
//Para tal, o programa pede a hora de início e hora de fim (sem os minutos), as horas serão informadas de 0 a 23.
//Perceba que um evento pode começar em um dia e acabar em outro. Os eventos nunca terão duração de mais de 24 horas. Exemplos de execução:
int main(int argc, char const *argv[])
{
    int i, f, e;
    scanf("%d %d", &i, &f);
    if (i < f){
        e = (f) - (i);
        printf("duração: %d \n", e);
    }   else   
            if (i > f){
                e = ((i)-(f)-(24)*(-1));
                printf("duração: %d \n", e);
    }

return 0;
}