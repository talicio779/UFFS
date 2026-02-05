/*9. ⊘ Fazer um programa que simule um campeonato com 4 times (A, B, C e D). 
Sera pedido o nome do primeiro time com os gols marcados e o nome do segundo time com os gols marcados. 
Este processo se repetirá até que seja informado um valor diferente de A, B, C ou D para o primeiro time. 
Ao final deverá ser apresentado o número de pontos de cada time e o campeão. 
Caso houver empate na primeira colocação informar que não houve campeão. Cálculo dos pontos: vitória 3 pontos, empate 1 ponto e derrota 0 ponto. Exemplo: 
Time: A 
Gols: 2 
Time: B 
Gols: 1 
Time: C 
Gols: 2 
Time: A 
Gols: 4 
Time: X ← valor diferente de A, B, C ou D, então finaliza 
Campeão: A 
A: 6 pontos 
B: 0 pontos 
C: 0 pontos 
D: 0 pontos 
*/
#include <stdio.h>

int main(int argc, char const *argv[]) {

    int A = 0, B = 0, C = 0, D = 0, G1 = 0, G2 = 0, t1, t2,
    *P1[4] = {&A, &B, &C, &D}, *P2[4] = {&A, &B, &C, &D};

    char T1, T2;

    printf("~~~~~campeonato de times!!~~~~~~\ndigite A B C ou D\ne os gols de cada partida\npara encerrar digite em Time(1): qualquer outro caracter \n\n");
    while (1){
        printf("Time(1):"); 
        scanf(" %c", &T1);
        if (T1 != 'A' && T1 != 'B' && T1 != 'C' && T1 != 'D'){
            printf("Fechando programa . . .");
            break;
        }

        if (T1 == 'A'){
            t1 = 0;
        }else if (T1 == 'B'){
            t1 = 1;
        }else if (T1 == 'C'){
            t1 = 2;
        }else if (T1 == 'D'){
            t1 = 3;
            }
        
        printf("Gols(1):\n"); 
        scanf("%d", &G1);

        printf("Time(2):"); 
        scanf(" %c", &T2);
        if (T2 != 'A' && T2 != 'B' && T2 != 'C' && T2 != 'D'){
            printf("Fechando programa . . .");
            break;
        }

        if (T2 == 'A'){
            t2 = 0;
        }else if (T2 == 'B'){
            t2 = 1;
        }else if (T2 == 'C'){
            t2 = 2;
        }else if (T2 == 'D'){
            t2 = 3;
        }

        printf("Gols(2):\n"); 
        scanf("%d", &G2);

        if (G1 == G2){
            (*P1[t1]) += 1;
            (*P2[t2]) += 1;
        }
        if (G1 > G2){
            (*P1[t1]) += 3;
            
        }else if (G1 < G2){
            (*P2[t2]) += 3;
        }}

    if (A > B && A > C && A > D){
        printf("Campeão: A");
    }else if (B > A && B > C && B > D){
        printf("Campeão: B");
    }else if (C > A && C > B && C > D){
        printf("Campeão: C");
    }else if (D > A && D > B && D > C){
        printf("Campeão: D");
    }else {
        printf("Não houve campeão!");
    }
    printf("\n A:%d \n B:%d \n C:%d \n D:%d", A, B, C, D);

return 0;
}