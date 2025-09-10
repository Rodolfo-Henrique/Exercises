#EXERCÍCIO DA TV (Sem correção)

class televisao:
    def __init__(self, canal, cmin, cmax):
        self.canal = canal
        self.cmin = cmin
        self.cmax = cmax

    def muda_canal_para_baixo(self):
        self.canal -= 1

    def muda_canal_para_cima(self):
        self.canal += 1

tv1 = televisao(2, 2, 10)#(CANAL_ATUAL: 2, CANAL_MINIMO: 2, CANAL_MAXIMO: 10)
print(f"Mudando canal para cima")
print(f"Canal sintonizado: ", tv1.canal)

for x in range(1, 20):
    tv1.muda_canal_para_cima()
    print(f"Canal sintonizado: ", tv1.canal)

tv2 = televisao(10, 2, 10) #(CANAL_ATUAL: 10, CANAL_MINIMO: 2, CANAL_MAXIMO: 10)
print(f"Mudando canal para baixo")
print(f"Canal sintonizado: ", tv2.canal)

for x in range(1, 20):
    tv2.muda_canal_para_baixo()
    print(f"Canal sintonizado: ", tv2.canal)