#CORREÇÃO DO EXERCÍCIO DA TV

class televisao:
    def __init__(self, canal, cmin, cmax):
        self.canal = canal
        self.cmin = cmin
        self.cmax = cmax
    
    def muda_canal_para_baixo(self):
        if self.canal - 1 >= self.cmin: #SE ao subtrair 1 do canal e o resultado permanecer maior ou igual ao canal minimo. 
            self.canal -= 1 #Subtraia 1
        else:
            self.canal = self.cmax #Caso contrário. Volta para o maior canal (10)

    def muda_canal_para_cima(self):
        if self.canal + 1 <= self.cmax: #SE ao somar 1 no canal e o resultado permanecer menor ou igual ao canal máximo. 
            self.canal += 1 #Adicione 1
        else:
            self.canal = self.cmin #Caso contrário. Volta para o menor canal (2)

tv1 = televisao(9, 2, 10) #(CANAL_ATUAL: 9, CANAL_MINIMO: 2, CANAL_MAXIMO: 10)
for x in range(1, 4):
    print(tv1.canal)
    tv1.muda_canal_para_cima()

tv2 = televisao(3, 2, 10)#(CANAL_ATUAL: 3, CANAL_MINIMO: 2, CANAL_MAXIMO: 10)
for x in range(1, 4):
    print(tv2.canal)
    tv2.muda_canal_para_baixo()