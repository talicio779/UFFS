//4. ⊘ Construa um programa que simule uma calculadora simples. Primeiro é solicitada a operação desejada +, -, / ou *, em seguida os dois operandos. Como resultado, o programa mostra o resultado da operação. O Programa é finalizado quando a operação desejada for igual à @. 
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char op;
    int i = 0, num1, num2, x;
    while (i == 0){
    printf("digite o operador(+, -, / ou *)");
    scanf("%c", &op);
    if (op == '@') break;
    printf("digite o número 1:");
    scanf("%d",&num1);
    printf("digite o número 2:");
    scanf("%d",&num2);
    if (op == '+'){
        x = num1 + num2;
        printf("%d + %d = %d\n\n", num1, num2, x);
    }else {if (op == '-'){
        x = num1 - num2;
        printf("%d - %d = %d\n\n", num1, num2, x);
    }else {if (op == '/'){
        x = num1 / num2;
        printf("%d / %d = %d\n\n", num1, num2, x);
    }else {if (op == '*'){
        x = num1 * num2;
        printf("%d * %d = %d\n\n", num1, num2, x);
    }}}}
    
    
    
    
    }
    //printf("%c", op);
return 0;
}