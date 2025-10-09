#https://neps.academy/br/exercise/86
#Aprovado ou Reprovado

def main():
    a, b = input().split()
    a = float(a)
    b = float(b)
    media = (a + b) / 2
    media = float(media)

    if media > 7:
        print('Aprovado')
    elif 4 <= media < 7:
        print('Recuperacao')
    else:
        print('Reprovado')
if __name__ == '__main__':
    main()