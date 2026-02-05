# include "prog_header.h"
# include <stdio.h>

int main()
{
    tag listaTarefa;
    init_lista(&listaTarefa);

    int var_loop = -1;

    while (var_loop != 0)
    {
        var_loop = menu_Prog();

        switch (var_loop)
        {
        case 1:
        {
            int id, situacao;
            char nome[100];

            printf("ID: ");
            scanf("%d", &id);

            printf("Nome: ");
            scanf("%s", nome);

            printf("Status: (0 - Ativa, 1 - Concluída): ");
            scanf("%d", &situacao);

            tarefa *novaTar = criar_Tarefa(id, nome, situacao);
            incluir_Elemento_no_Comeco(&listaTarefa, novaTar);

            printf("Tarefa adicionada.\n");
            break;
        }
        case 2:
            tar_Visualizar(listaTarefa);
            break;
        case 3:
        {
            int id;
            printf("ID: ");
            scanf("%d", &id);
            tar_Concluir(&listaTarefa, id);
            break;
        }
        case 4:
        {
            int id;
            printf("ID: ");
            scanf("%d", &id);
            tar_Excluir(&listaTarefa, id);
            break;
        }
        case 5:
            ver_Ativas(listaTarefa);
            break;
        case 6:
            ver_Concluidas(listaTarefa);
            break;    
        case 0:
            printf("Saindo . . .\n");
            break;
        default:
            printf("escolha inválida.\n");
            break;
        }
    }

    return 0;
}