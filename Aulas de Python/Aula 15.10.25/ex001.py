#exercício while

n = int(input("Digite um numero (0 para sair do loop): "))
cont =0
while n !=0: # muito utilizado quando não temos um fim do loop de forma definida.
    print(f"Você digitou : {n}")
    n = int(input("Digite outro numero (0 para sair): "))
    cont += 1

print(f"Programa encerrado, houve {cont+1} repetições.")