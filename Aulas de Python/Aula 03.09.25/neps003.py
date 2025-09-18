#https://neps.academy/br/exercise/156

def main(a, b):
    """
    Imprime todos os valores inteiros entre dois números (a e b) em ordem crescente.

    Args:
      a: O primeiro número inteiro.
      b: O segundo número inteiro.
    """

    inicio = min(a, b)  # Determina o menor valor
    fim = max(a, b)  # Determina o maior valor

    for i in range(inicio, fim + 1):
        print(i, end = ' ')


# Leitura dos valores
a = int(input("Digite o primeiro valor inteiro (A): "))
b = int(input("Digite o segundo valor inteiro (B): "))

# Chamada da função para imprimir o intervalo
main(a, b)