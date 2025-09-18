#https://neps.academy/br/exercise/153
#Senha 2018

erros = 0
while True:
    chute = int(input())
    if chute == 2018:
        break
    else:
        erros += 1
print(erros)