#https://neps.academy/br/exercise/81
#Função Menor

def menor(a, b):
           
    if a < b:
        return a
    else:
        return b

a = int(input())
b = int(input())

resultado = menor(a, b)
print(resultado)