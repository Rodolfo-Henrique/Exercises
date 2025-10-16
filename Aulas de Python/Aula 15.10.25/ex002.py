#exercício while

senha = 12345
cont = 0
while True:
    log = int(input())
    if log == senha:
        print('Sucesso!')
        break
    else:
        print('Erro!')
        cont+=1
print(f'Tentativas: {cont}')