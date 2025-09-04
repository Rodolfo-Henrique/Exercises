#Criando uma classe
#self é a foma da classe se referir a ela mesma
#__init__ é o método construtor que cria o objeto da clesse

class conta:
    def __init__(self, numero, cpf, nomeTitular, saldo):
        self.numero = numero
        self.cpf = cpf
        self.nomeTitular = nomeTitular
        self.saldo = saldo

#Parâmetros passados na criação do objeto

def main():
    obj = conta(13103, "123.456.789-10", "João", 7896)
    print(f"Nome do titular da conta: {obj.nomeTitular}")
    print(f"Número da conta: {obj.numero}")
    print(f"CPF do titular: {obj.cpf}")
    print(f"Saldo da conta: {obj.saldo}")

if __name__ == "__main__":
    main()