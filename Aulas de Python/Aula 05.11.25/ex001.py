class vendedor():
    def __init__(self, nome):
        self.nome = nome
        self.vendas = 0

    def venda(self, vendas):
        self.vendas = vendas

    def meta(self, metas):
        if metas <= self.vendas:
            print(f"O vendedor {self.nome} bateu a meta")
        else:
            print(f"O vendedor {self.nome} não bateu a meta")