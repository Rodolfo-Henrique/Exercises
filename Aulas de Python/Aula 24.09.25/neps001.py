#https://neps.academy/br/exercise/5
#Fuga com Helicóptero

def main():
    H, P, F, D = map(int, input().split())
    fuga = F
    while True:
        if fuga == H:
            print("S")
            break
        if fuga == P:
            print("N")
            break
        fuga = (fuga + D) % 16
if __name__ == "__main__":
    main()