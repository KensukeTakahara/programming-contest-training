def main():
    import math
    N = int(input())
    cnt = 0
    A = math.ceil(N ** (1/3))
    for a in range(1, A):
        B = math.ceil((N/a) ** (1/2))
        for b in range(a, B):
            cnt += math.floor((N/(a+b)) - b + 1)

    print(cnt)


main()
