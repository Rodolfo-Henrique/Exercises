#https://neps.academy/br/exercise/14
#Drone de Entrega

def main():
    A = int(input())
    B = int(input())
    C = int(input())
    H = int(input())
    L = int(input())
    if (A <= H and B <= L) or (B <= H and A <= L) or (C <= H and A <= L) or (A <= H and C <= L) or (C <= H and B <= L) or (B <= H and C <= L):
        print("S")
    else:
        print("N")
if __name__ == "__main__":
    main()