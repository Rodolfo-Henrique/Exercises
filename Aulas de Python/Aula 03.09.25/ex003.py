#Métodos de classe
#Definem as ações que o objeto pode realizar

class Conta:
    def __init__(self, numero, cpf, nomeTitular, saldo):
        self.numero = numero
        self.cpf = cpf
        self.nomeTitular = nomeTitular
        self.saldo = saldo

    def depositar(self, valor):
        self.saldo += valor

    def sacar(self, valor):
        self.saldo -= valor

    def extrato(self):
        print(f"Conta: {self.numero} \n CPF: {self.cpf} \n Saldo: {self.saldo}")

def main():
    c1 = Conta(13013, "123.456.789-10", "João", 0)
    c1.depositar(300) #Chamando o método DEPOSITAR para c1
    c1.extrato() #Chamando o método gerar_extrato para c1
    c1.sacar(100) #Chamando o método SACAR para c1
    c1.extrato() #Chamando o método gerar_extrato para c1

if __name__ == "__main__":
    main()