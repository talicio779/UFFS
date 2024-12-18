#include <stdio.h>
//6. Sabendo que as faixas etárias para votação são: 18 a 70 anos voto obrigatório; 16, 17 e acima de 70 anos voto facultativo;
//outras idades (ou seja, menor que 16 anos) não pode votar, crie um programa que processa essa verificação. Exemplos de execução:

int main(int argc, char const *argv[]) {

    int idade;
    printf("digite sua idade:");
    scanf("%d", &idade);
    if ((18 <= idade && idade < 70) ==1){
        printf("voto obrigatório");
        
    }else {if (idade > 69){
    
        printf("voto facultativo");
    }else {if (idade < 18){
        
        printf("voto facultativo");}
    }}
    /*if (70 > idade){
        printf("voto facultativo");
    }*/



return 0;
}
