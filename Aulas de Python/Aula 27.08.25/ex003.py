#Área de teste

import tkinter as tk
from tkinter import messagebox

def comparar_numeros():
    num1 = int(entry_num1.get())
    num2 = int(entry_num2.get())
    if num1 > num2:
        messagebox.showinfo("Resultado", f"{num1} é maior que {num2}")
    elif num1 == num2:
        messagebox.showinfo("Resultado", f"{num1} é igual ao {num2}")
    else:
        messagebox.showerror("Resultado", f"{num2} é maior que {num1}")

#Criando janela
janela = tk.Tk()
janela.title("Comparador")

#Criando os widgets
label_num1 = tk.Label(janela, text="Número 1")
label_num1.grid(row=0, column=0, padx=10, pady=5, sticky="e")

entry_num1 = tk.Entry(janela)
entry_num1.grid(row=0, column=1, padx=10, pady=5)

label_num2 = tk.Label(janela, text="Número 2")
label_num2.grid(row=1, column=0, padx=10, pady=5, sticky="e")

entry_num2 = tk.Entry(janela)
entry_num2.grid(row=1, column=1, padx=10, pady=5)

#Botão
botao_comparar = tk.Button(janela, text="Comprar", command=comparar_numeros)
botao_comparar.grid(row=2, column=2, padx=10, pady=5)

#Looping
janela.mainloop()