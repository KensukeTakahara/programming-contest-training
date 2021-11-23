def main():
    N = int(input())
    arr = [int(s) for s in input().split(' ')]
    patterns = list()
    for a in range(1, 251):
        for b in range(1, 251):
            patterns.append((4 * a * b) + (3 * a) + (3 * b))

    cnt = 0
    for predict in arr:
        hit = False
        for pattern in patterns:
            if predict == pattern:
                hit = True
                break

        if hit == False:
            cnt += 1

    print(cnt)


main()
