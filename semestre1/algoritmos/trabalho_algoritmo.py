# Bibliotecas
import colored


# Lista Central
lista_de_tarefas = []
j = 0

# Classes


class Tarefas:

    ID = j
    j += 1
    nome_tarefa = None
    situacao = True
    tempo_limite = 0
    # lista_de_tarefas.append()


# Funções
def adiconar_tarefa():
    adiciona = Tarefas()
    adiciona.nome_tarefa = input("digite a descrição; ")
    adiciona.tempo_limite = input("digite o tempo limite em horas: ")
    lista_de_tarefas.append(adiciona)


def visualizador():
    print("==============================================")
    if len(lista_de_tarefas) != 0 and lista_de_tarefas[i].situacao == True:
        for i in range(len(lista_de_tarefas)):
            lista_de_tarefas[i].situacao
            print({i}, end="")
            # print(lista_de_tarefas[i].ID)
            print(" [ ] ", end="")
            print(
                lista_de_tarefas[i].nome_tarefa,
                lista_de_tarefas[i].tempo_limite, "horas")
        print("fim das atividades ativas")

    elif len(lista_de_tarefas) != 0 and lista_de_tarefas[i].situacao == False:
        for i in range(len(lista_de_tarefas)):
            print({i}, end="")
            print(lista_de_tarefas[i].ID)
            print(" [x] ")
            print(
                lista_de_tarefas[i].nome_tarefa,
                lista_de_tarefas[i].tempo_limite, "horas")
        print("fim das atividades ativas")

    else:
        print("você não adicionou nenhuma atividade.")


def excluir_tarefa():
    lista_de_tarefas.pop(input("digite o número da tarefa"))


def atualizar_tarefa():
    digite_tipo = input(
        "digite a situação da tarefa: \n 1 - Em execução \n 2 - Concluída")
    if digite_tipo == "1":
        if len(lista_de_tarefas) != 0 and lista_de_tarefas[i].situacao == True:
            digite_numero = input("digite o número da tarefa: ")
            renomeia = Tarefas()
            renomeia.nome_tarefa = input("reescreva o nome: ")
            renomeia.tempo_limite = input("reescreva o tempo: ")
            for digite_numero in lista_de_tarefas[i].situacao == True:
                lista_de_tarefas.insert(digite_numero, renomeia)

    elif digite_tipo == "2":
        if len(lista_de_tarefas) != 0 and lista_de_tarefas[i].situacao == False:
            digite_numero = input("digite o número da tarefa: ")
            renomeia = Tarefas()
            renomeia.nome_tarefa = input("reescreva o nome: ")
            renomeia.tempo_limite = input("reescreva o tempo: ")
            for digite_numero in lista_de_tarefas[i].situacao == False:
                lista_de_tarefas.insert(digite_numero, renomeia)


def concluir_tarefa():
    digite_para_concluir = input("digite a tarefa a ser concluída: ")
    if digite_para_concluir <= len(lista_de_tarefas.situacao == True):
        concluira = Tarefas()
        concluira.situacao == False
        for digite_para_concluir in lista_de_tarefas[i].situacao == True:
            lista_de_tarefas.insert(digite_para_concluir, concluira)


def selecao_menu():
    while True:

        print("==============================================")
        print("###  Sistema de Gerenciamento de Tarefas  ###")
        print("Digite uma opção disponível: ")
        print("\t0 - Sair")
        print("\t1 - Adicionar nova tarefa")
        print("\t2 - Visualize todas as tarefas")
        print("\t3 - Excluir uma tarefa")
        print("\t4 - Atualize uma tarefa")
        print("\t5 - Concluir uma tarefa")
        print("\t6 - Excluir todas as tarefas")

        opcao = input("digite aqui:")
        if opcao == "0":
            break
        if opcao == "1":
            adiconar_tarefa()
        elif opcao == "2":
            visualizador()
        elif opcao == "3":
            excluir_tarefa()
        # elif opcao == "4":


selecao_menu()
