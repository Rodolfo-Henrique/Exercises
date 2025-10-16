#https://neps.academy/br/exercise/259
#O Problema 3n + 1

def main():
    n = int(input())
    cont = 0
    while n != 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        cont += 1
    print(cont)
if __name__ == '__main__':
    main()