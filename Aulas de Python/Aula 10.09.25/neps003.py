#https://neps.academy/br/exercise/176
#Ordenação Simples

def main():
    """
    Lê o tamanho e os elementos de um vetor, ordena-os e imprime em ordem crescente.
    """

    # Leitura do tamanho do vetor
    tamanho_vetor = int(input("Digite o tamanho do vetor: "))

    # Leitura dos elementos do vetor
    N = input("Digite os elementos do vetor separados por espaço: ").split() #split == lista

    # Função len verifica a quantidade de elementos na lista
    if len(N) != tamanho_vetor:
        print("Erro: A quantidade de elementos não corresponde ao tamanho do vetor.")
        return  # Encerra a função se houver erro

    # Ordenação dos elementos
    N.sort()  # Ordena a lista "in-place" (modifica a lista original)

    # Impressão dos elementos ordenados
    print(*N)  # Imprime os elementos separados por espaço


# Chamada da função para executar o programa
main()