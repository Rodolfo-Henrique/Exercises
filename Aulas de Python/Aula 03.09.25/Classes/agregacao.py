#Realizando a agregação dos arquivos.py separados
#ARQUIVO MAIN()

from cliente import cliente
from ContaClienteExtrato import Conta

cliente1 = cliente("123.456.789-10", "João", "Rua 1") #CPF, Nome, Endereço
cliente2 = cliente("987.654.321-00", "Maria", "Rua 2") #CPF, Nome, Endereço

#Criando uma conta com dois clientes, fazendo a agreação com uma lista (array/vetor)
conta1 = Conta([cliente1, cliente2], 1, 2000) #Clientes, Número da Conta, Saldo

conta1.depositar(1000)
conta1.sacar(1500)
conta1.extrato.extrato(conta1.numero)