#https://neps.academy/br/exercise/156
#Valores Entre Dois Números

def main(a, b):
    inicio = min(a, b)
    fim = max(a, b)

    for i in range(inicio, fim + 1):
        print(i, end = ' ')

a = int(input("Digite o primeiro valor inteiro (A): "))
b = int(input("Digite o segundo valor inteiro (B): "))

main(a, b)