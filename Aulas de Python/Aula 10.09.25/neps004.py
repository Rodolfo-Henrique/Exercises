#https://neps.academy/br/exercise/1190
#Daniel, the programmer.

def main():
    N = int(input())
    soma = 0
    for i in range(1, N + 1):
        soma = soma + i
    print(soma)

if __name__ == "__main__":
    main()