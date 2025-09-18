#https://neps.academy/br/exercise/167
#Piso da Escola


# Leitura dos valores
l = int(input("Digite a largura (L): "))
c = int(input("Digite o comprimento (C): "))

piso1 = l * c + (l - 1) * (c - 1)
piso2 = 2 * (l - 1) + 2 * (c - 1)

print(f"{piso1}")
print(f"{piso2}")