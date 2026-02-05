import math
while True:
    p = float(input("digite a probabilidade de sucesso em valor absoluto:"))
    q = math.fabs(1.00 - p)
    print(q)
    n = int(input("digite o n:"))
    x = int(input("digite o x:"))
    y = n - x

    xInd = math.comb(n, x)
    # print(xInd)
    # qprint(xInd)
    P = xInd * ((p)**x) * ((q)**y)
    print("\n=============================================")
    print(f"distribuição individual:{P:.4f}")

    i = x
    j = n + 1
    z = 0

    while i < j:
        Pa = math.comb(n, i) * ((p)**i) * ((q)**(n - i))
        z += Pa
        # print("apapap", Pa)
        # print("zzzzz", z)
        i += 1
    y = (1.00 - z) + P
    print(f'distribuição acumulada (x +){z:.4f}')
    print(f'distribuição acumulada (x -){y:.4f}')

    print("digite 0 para sair ou outro para refazer \n ===========================================")
    s = int(input())
    if s == 0:
        break
