#Par ou Ímpar - https://neps.academy/br/exercise/148

#Bino = par e Cino = ímpar
par = int(input("Digite um número par de 0 a 10: ")) #(Bino)
impar = int(input("Digite um número impar de 1 a 9: ")) #(Cino)

r = par + impar

if r % 2 == 0:
    print("Bino")
else:
    print("Cino")