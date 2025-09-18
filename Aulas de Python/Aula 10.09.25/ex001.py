#Exercício de WHILE

tentativas = 0
max_tentivas = 3

while tentativas < max_tentivas:
    senha = input("Digite sua senha: ")
    if senha == " ":
        print("Digite uma senha válida\n")
        tantativas += 1
        continue
    if senha == "1234":
        print("Acesso liberado!\n")
        break
    else:
        print("Senha incorreta! Tente novamente!\n")
        tentativas += 1
else:
    print("Acesso bloqueado pelo número de tentativas")