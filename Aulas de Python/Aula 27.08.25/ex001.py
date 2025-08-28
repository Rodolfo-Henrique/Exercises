#Interface gráfica

from tkinter import *

janelaPrincipal = Tk()
texto = Label(master = janelaPrincipal, text = "Mensagem de teste!!")
texto.place(x = 50, y = 100)
janelaPrincipal = mainloop()

#botao = Button(master = janelaPrincipal, text = 'clique', command = NOME_DA_FUNCAO)