#include <stdio.h>

//1. Faça um programa que peça o número de horas trabalhadas e o valor da hora de um determinado funcionário. 
//Em seguida, calcule o salário do funcionário. Caso o funcionário tenha trabalhado mais de 200 horas, o salário final é acrescido de 5%. Exemplos de execução:

int main(int argc, char const *argv[])
{
    int h, v, s;
    printf("horas: ");
    scanf( "%d", &h);
    printf("valor hora: ");
    scanf( "%d", &v);
    if (h > 200){                //se as horas trabalhadas ultrapassarem 200
        s = h * v * (1.05);
    } else {
        s = h * v;
    }
    printf("salário: %d \n", s); 

return 0;
}
