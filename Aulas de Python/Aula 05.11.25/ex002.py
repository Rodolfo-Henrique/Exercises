from ex001 import vendedor

def main():
    
    vendedor1 = vendedor('Roberto')
    vendedor1.venda(500)
    vendedor1.meta(800)

    vendedor2 = vendedor('Pedro')
    vendedor2.venda(1500)
    vendedor2.meta(800)

    vendedor3 = vendedor('Felipe')
    vendedor3.venda(2500)
    vendedor3.meta(800)

if __name__ == "__main__":
    main()