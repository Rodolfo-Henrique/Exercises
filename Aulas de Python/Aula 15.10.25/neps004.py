#https://neps.academy/br/exercise/83
#Função Troca

def main():
    a = int(input())
    b = int(input())
    a, b = b, a
    print(f"{a} {b}")
if __name__ == '__main__':
    main()