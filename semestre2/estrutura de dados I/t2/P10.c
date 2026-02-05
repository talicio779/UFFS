/*10. ⊘ Um professor gostaria de ter um programa para calcular a média final de seus alunos. Para isso, ele informa a matrícula e as 5 notas que o alunos teve durante o semestre. Após informar as 5 notas, o programa imprime a matrícula do aluno e a média que obteve (média aritmética simples). Quando o professor digitar 0 o programa finaliza e apresenta a média geral da turma. Proibido colocar 5 scanf para pedir as notas. Exemplo: 
Matrícula: 22010 
Nota 1: 4 
Nota 2: 6 
Nota 3: 6 
Nota 4: 6 
Nota 5: 8 
Aluno: 22010  Média: 6.0
Matrícula: 0 
Média geral da turma: 6.0
*/
#include <stdio.h>

int main(int argc, char const *argv[]) {

    int matr, n1, n2, n3, n4, n5, i =0;

    float m = 0.0 , mf = 0.0;

    while (1){
    printf("matrícula:");
    scanf(" %d", &matr);
    if (matr == 0) {break;}
    printf("\n");
    printf("digite as 5 notas do aluno:\n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    printf("nota1: %d nota 2: %d nota 3: %d nota 4: %d nota 5: %d", n1, n2, n3, n4, n5);
    printf("\n");

    if (n1 == 0 && n2 == 0 && n3 == 0 && n4 == 0 && n5 == 0) {break;}

    i++;
    m = (float)(n1 + n2 + n3 + n4 + n5) / 5;
    mf += m;
    printf("Aluno: %d Média: %0.1f", matr, m);
    printf("\n");

    }
    
    mf = mf / i;
    printf("média geral da turma: %0.1f", mf);
    printf("\n");

return 0;
}