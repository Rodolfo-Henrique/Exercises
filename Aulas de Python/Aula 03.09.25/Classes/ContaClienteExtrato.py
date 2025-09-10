import datetime
from extrato import Extrato
    
class Conta:
    def __init__(self, clientes, numero, saldo):
        self.clientes = clientes
        self.numero = numero
        self.saldo = saldo
        self.data_abertura = datetime.datetime.today()
        self.extrato = Extrato() #Inicializando a composição

    def depositar(self, valor):
        self.saldo += valor
        self.extrato.transacoes.append(["Deposito", valor, "Data", datetime.datetime.today()])

    def sacar(self, valor):
        if self.saldo < valor:
            return False
        else:
            self.saldo -= valor
            self.extrato.transacoes.append(["Saque", valor, "Data", datetime.datetime.today()])
            return True
        
    def transfereValor(self, contaDestino, valor):
        if self.saldo < valor:
            return("Não existe saldo o suficiente")
        else:
            contaDestino.depositar(valor)
            self.saldo -= valor
            self.extrato.transacoes.append(["Transferência", valor, "Data", datetime.datetime.today()])

    def gerarsaldo(self):
        print(f"Número: {self.numero}\n Saldo: {self.saldo}")