class Conta_Bancaria:
    def __init__(self, nomeTitular, saldo):
        self.nomeTitular = nomeTitular #Atributo PÚBLICO (Premissivo em todo o projetos)
        self.__saldo = saldo #Atributo PRIVADO (Permissivo somente na própria calsse)
        self.idade = 18 #Atributo PROTEGIDO (Permissivo somente no mesmo diretório)
        self.extrato = [] #Lista de registro de operações
    
    def depositar(self, valor):
        if valor > 0:
            self.__saldo += valor
            self.extrato.append(f'Depósito de R${valor}.')
            print(f"Depósito de R${valor} realizado com sucesso!")
            print(f"Novo saldo: R${self.__saldo}.")
        else:
            print(f"Valor do depósito é inválido.")
    
    def sacar(self, valor):
        if 0 < valor < self.__saldo:
            self.__saldo -= valor
            self.extrato.append(f'Saque de R${valor}.')
            print(f"Saque de R${valor} realizado com sucesso!")
            print(f"Novo saldo: R${self.__saldo}.")
        else:
            print("Saldo insuficiente ou valor inválido!")
        
    def mostrar_saldo(self):
        print(f"Saldo atual R${self.__saldo}")
    
    def mostrar_extrato(self):
        print("\nExtrato da conta: ")
        if self.extrato:
            for operacao in self.extrato:
                print(operacao)
        else:
            print("Nenhuma operação foi realizada.")
        print(f"Saldo atual: R${self.__saldo}")

conta = Conta_Bancaria("Teste", 2000)
while True:
    print("\nEscolha uma opção: ")
    print("1 - Depositar")
    print("2 - Sacar")
    print("3 - Mostrar saldo")
    print("4 - Exibir extrato")
    print("5 - Sair")

    opcao = int(input("Digite o número da opção desejada: "))
    if opcao == 1:
        valor = float(input("Digite o valor para depósito: "))
        conta.depositar(valor)
    elif opcao == 2:
        valor = float(input("Digite o valor para saque: "))
        conta.sacar(valor)
    elif opcao == 3:
        conta.mostrar_saldo()
    elif opcao == 4:
        conta.mostrar_extrato()
    elif opcao == 5:
        print("Encerrando o programa!")
        break
    else:
        print("Opção inválida! Tente novamente.")