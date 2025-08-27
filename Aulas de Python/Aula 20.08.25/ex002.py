#Máquina de Café - https://neps.academy/br/exercise/95


n1 = int(input()) #Quantidade de pessoas no primeiro andar.
n2 = int(input()) #Quantidade de pessoas no segundo andar.
n3 = int(input()) #Quantidade de pessoas no terceiro andar.
#Quanitdade de andares (andar 1, anadar 2 e andar 3)
a1 = n2*2 + n3*4
a2 = n1*2 + n3*2
a3 = n1*4 + n2*2

if a1 <= a2 and a1 <= a3:
    print(f"{a1}")
elif a2 <= a3:
    print(f"{a2}")
else:
    print(f"{a3}")