#include "prog_header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init_lista(tag *t) //iniciador de lista
{

    t->head=NULL;
	t->tail=NULL;
    

}
int menu_Prog() //menu ddo usuário
{
    printf("\n");

    int var_loop;
    printf("1 - Adicionar\n2 - Visualizar T+odas\n 5 - Visualizar Ativas\n 6 - Visualizar Concluídas\n3 - Concluir\n4 - Excluir \n0 - Finalizar\n: ");
    scanf("%d",&var_loop);
    printf("\n");
    return var_loop;


}



tarefa *criar_Tarefa(int id, char nome[], int situacao) { // cria uma tarefa
    tarefa *tarr;
    tarr = (tarefa *)malloc(sizeof(tarefa));
    strcpy(tarr->nome, nome);
    tarr->situacao = situacao;
    tarr->id = id;
    tarr->next = NULL;
    tarr->prev = NULL;
    return tarr; 
}


tarefa *incluir_Elemento_no_Comeco(tag *lista, tarefa *tarefa) { // apenas encadeia
    if (lista->head == NULL){
        lista->head = tarefa;
        lista->tail = tarefa;
    } else {
        tarefa->next = lista->head;
        lista->head->prev = tarefa;
        lista->head = tarefa;
    }
    
    return tarefa;
}


void tar_Visualizar(tag t)
{
    tarefa *atual = t.head;

    if (atual == NULL)
    {
        printf("A lista de tarefas está vazia.\n");
        return;
    }

    printf("Lista de Tarefas:\n");

    while (atual != NULL)
    {
        if (atual->situacao == 0)
        {
            printf("ID: %d\n", atual->id);
            printf("Tarefa: %s\n", atual->nome);
            printf("Ativa\n");
            printf("<><><><><><>\n");
        }
        atual = atual->next;
    }

    atual = t.head; 

    while (atual != NULL)
    {
        if (atual->situacao == 1) 
        {
            printf("ID: %d\n", atual->id);
            printf("Tarefa: %s\n", atual->nome);
            printf("Concluída\n");
            printf("<><><><><><>\n");
        }
        atual = atual->next;
    }
}

void ver_Ativas(tag t) // visualiza apenas as ativas
{
    tarefa *atual = t.head;

    if (atual == NULL)
    {
        printf("A lista de tarefas está vazia.\n");
        return;
    }

    printf("Lista de Tarefas ativas:\n");

    while (atual != NULL)
    {
        if (atual->situacao == 0)
        {
            printf("ID: %d\n", atual->id);
            printf("Tarefa: %s\n", atual->nome);
            printf("Ativa\n");
            printf("<><><><><><>\n");
        }
        atual = atual->next;
    }
    printf("\nFim das tarefas ativas . . . \n");
    }



void ver_Concluidas(tag t) // visualiza as concluídas
{
    tarefa *atual = t.head;

    if (atual == NULL)
    {
        printf("A lista de tarefas está vazia.\n");
        return;
    }

    printf("Lista de Tarefas concluídas:\n");

    while (atual != NULL)
    {
        if (atual->situacao == 1)
        {
            printf("ID: %d\n", atual->id);
            printf("Tarefa: %s\n", atual->nome);
            printf("Concluída\n");
            printf("<><><><><><>\n");
        }
        atual = atual->next;
    }
    printf("\nFim das tarefas concluídas . . .\n");

    }



void tar_Excluir(tag *t, int id) //excluí
{
    tarefa *current = t->head;

    while (current != NULL)
    {
        if (current->id == id) //encontra a tarefa a ser excluida por id
        {
            if (current == t->head)
            {
                t->head = current->next;
                if (t->head != NULL)
                {
                    t->head->prev = NULL;
                }
            }
            else if (current == t->tail)
            {
                t->tail = current->prev;
                t->tail->next = NULL;
            }
            else
            {
                current->prev->next = current->next;
                current->next->prev = current->prev;
            }

            free(current);
            printf("Tarefa %d excluída com sucesso.\n", id);
            return;
        }

        current = current->next;
    }

    printf("Tarefa com ID %d não encontrada.\n", id);
}

void tar_Concluir(tag *lista, int id) { //conclui as tarefas
    tarefa *current = lista->head;

    while (current != NULL) {
        if (current->id == id) { //if para encontrar as tarefas com id fornecido pelo usuário
            current->situacao = 1;
            printf("Tarefa %d concluída com sucesso.\n", id);
            return;
        }

        current = current->next;
    }

    printf("Tarefa com ID %d não encontrada.\n", id);
}