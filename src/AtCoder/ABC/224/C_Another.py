def main():
    N = int(input())
    arr = [0, 0] * N

    for i in range(0, N):
        arr[i] = [int(s) for s in input().split(' ')]

    cnt = 0
    for i in range(0, N - 2):
        arr_i = arr[i]
        for j in range(i + 1, N - 1):
            arr_j = arr[j]
            for k in range(j + 1, N):
                arr_k = arr[k]
                if ((arr_j[0] - arr_i[0]) * (arr_k[1] - arr_i[1])) - ((arr_k[0] - arr_i[0]) * (arr_j[1] - arr_i[1])) != 0:
                    cnt += 1

    print(cnt)


main()
