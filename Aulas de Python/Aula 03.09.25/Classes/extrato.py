#A composição é uma forma mais forte de associação, onde um objeto é parte de outro e não pode existir de forma independente

class Extrato:
    def __init__(self):
        self.transacoes = [] #Lista de transações da conta

    def extrato(self, numeroConta):
        print(f"Extrato: {numeroConta}\n")
        for transacao in self.transacoes:
            print(f"{transacao[0]:15s} {transacao[1]:10.2f} {transacao[2]:10s} {transacao[3].strftime('%d/%b/%Y')}")