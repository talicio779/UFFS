# Bibliotecas


# Trabalho feito por Thaynnã Tomaz e Marco Veiga


# Lista Central
i = 0
j = 0
lista_de_tarefas = []



# Classes


class Tarefas:

    id = None
    nome_tarefa = None
    incompleto = True
    tempo_limite = 0
    # lista_de_tarefas.append()


# Funções

# Função adicionar tarefa
def adicionar_tarefa(lista_de_tarefas):
    adiciona = Tarefas()
    adiciona.id = int(
        input("Digite um ID (valor numérico inteiro não utilizado): "))
    for tarefa in lista_de_tarefas:
        if adiciona.id == tarefa.id:
            return print(f"O id de número {tarefa.id} já está sendo usado")
    adiciona.nome_tarefa = input("Digite a descrição da tarefa: ")
    adiciona.tempo_limite = input("Digite o tempo limite (em horas): ")
    adiciona.incompleto = True
    lista_de_tarefas.append(adiciona)


# Função visualizar tarefa


def visualizador(lista_de_tarefas):
    print("===============================================")
    determinante = int(input("Digite 1 para visualizar todas as tarefas, 2 para as tarefas ativas e 3 para as tarefas concluídas: "))
    for tarefa in lista_de_tarefas:   
        xisounao = "[X]" if not tarefa.incompleto else "[ ]"
        if tarefa.incompleto == True and determinante == 2:
             print("\n ID da tarefa:", tarefa.id,
                    "\n Descrição da tarefa:", tarefa.nome_tarefa,
                    "\n Tempo limite da tarefa:", tarefa.tempo_limite, "horas"
                    "\n Situação:", xisounao,)
             
        elif tarefa.incompleto == False and determinante == 3: 
            print("\n ID da tarefa:", tarefa.id,
                    "\n Descrição da tarefa:", tarefa.nome_tarefa,
                    "\n Tempo limite da tarefa:", tarefa.tempo_limite, "horas"
                    "\n Situação:", xisounao,)
            
        elif determinante == 1:
            print("\n ID da tarefa:", tarefa.id,
                    "\n Descrição da tarefa:", tarefa.nome_tarefa,
                    "\n Tempo limite da tarefa:", tarefa.tempo_limite, "horas"
                    "\n Situação:", xisounao,)
            
    print('\n"X"determina que a tarefa está concluída.')     
    if not lista_de_tarefas:
        print("Você não adicionou nenhuma atividade.")

# Função excluir tarefa


def excluir_tarefa():
    digite_tipo = int(input("Digite o ID da tarefa que você deseja excluir: "))
    for i, tarefa in enumerate(lista_de_tarefas):
        if digite_tipo == tarefa.id:
            lista_de_tarefas.pop(i)
            print(f"Tarefa de ID {tarefa.id} excluída com sucesso!")
            break

# Função atualizar tarefa


def atualizar_tarefa():
    digite_tipo = int(
        input("Digite o ID da tarefa que você deseja atualizar: "))
    for tarefa in lista_de_tarefas:
        if tarefa.id == digite_tipo:
            # inputs de mudança
            N1 = input("Digite a nova descrição para a tarefa: ")
            N2 = input("Digite o tempo (em horas) desejado para a tarefa: ")
            N3 = input(
                "Digite 1 para marcar como ativa, e 2 para marcar como concluída: ")
            tarefa.nome_tarefa = N1
            tarefa.tempo_limite = N2
            if N3 == "1":
                tarefa.incompleto = True
            if N3 == "2":
                tarefa.incompleto = False
            break
    else: 
        print('\n"X"determina que a tarefa está concluída.')    

# Função concluir tarefa


def concluir_tarefa():
    digite_numero = int(input("Número:  "))
    for tarefa in lista_de_tarefas:
        if tarefa.id == digite_numero:
            tarefa.incompleto = False
            print(f'Tarefa {digite_numero} concluída com sucesso!')
            break
        if tarefa.id == digite_numero and tarefa.incompleto == False:
            print("A tarefa já está concluída!")
            break

# Menu


def selecao_menu():
    while True:

        print("\n======================================================================")
        print()
        print("¯\_¯\_¯\_ Sistema de Gerenciamento de Tarefas _/¯_/¯_/¯")
        print("\tDigite uma opção disponível: ")
        print("0 - Sair")
        print("1 - Adicionar nova tarefa")
        print("2 - Visualize todas as tarefas")
        print("3 - Excluir uma tarefa")
        print("4 - Atualize uma tarefa")
        print("5 - Concluir uma tarefa")
        print()
        print("======================================================================")
        opcao = input("Digite o número desejado: ")
        # opções desejadas estão como condições
        if opcao == "0":
            break
        if opcao == "1":
            adicionar_tarefa(lista_de_tarefas)
        elif opcao == "2":
            visualizador(lista_de_tarefas)
        elif opcao == "3":
            excluir_tarefa()
        elif opcao == "4":
            atualizar_tarefa()
        elif opcao == "5":
            concluir_tarefa()

selecao_menu()
