#Flíper - https://neps.academy/br/exercise/87

p, r = input().split()
p = int(p)
r = int(r)

if p == 0:
    print("C")
elif p == 1 and r == 0:
    print("B")
else:
    print("A")