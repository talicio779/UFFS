#ifndef PROG_HEADER_H
#define PROG_HEADER_H

struct newTarefa //estrutura tarefa
{
    int id;
    char nome[100];
    int situacao;
    struct newTarefa *next, *prev;

};

typedef struct newTarefa tarefa;

struct tagTarefa //sentinela tag
{

    tarefa *head;
    tarefa *tail;

};

typedef struct tagTarefa tag;

/* Protótipos */
void init_lista(tag *t);
int menu_Prog(void);

tarefa *criar_Tarefa(int id, char nome[], int situacao);
tarefa *incluir_Elemento_no_Comeco(tag *lista, tarefa *tarefa);

void tar_Visualizar(tag t);
void ver_Ativas(tag t);
void ver_Concluidas(tag t);

void tar_Excluir(tag *t, int id);
void tar_Concluir(tag *lista, int id);

#endif