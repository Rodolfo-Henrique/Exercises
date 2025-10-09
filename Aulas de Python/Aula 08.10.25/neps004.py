#https://neps.academy/br/exercise/52
#Lâmpadas

N = int(input())

interruptor = input().split()

A = 0
B = 0

for i in interruptor:
    estado = int(i)
    if estado == 1:
        A = 1 - A
    elif estado == 2:
        A = 1 - A
        B = 1 - B
print(A)
print(B)