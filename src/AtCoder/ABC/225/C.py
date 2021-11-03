str = input().split(' ')
N, M = [int(s) for s in str]
arr = [[0] * M] * N

prev_col = None
for i in range(0, N):
    row = [int(s) for s in input().split(' ')]
    if prev_col == None:
        prev_col = row[0]
    elif prev_col != None and prev_col + 7 != row[0]:
        print('No')
        exit(0)

    prev_col = row[0]
    prev_row = None

    for j in range(0, M):
        if row[j] % 7 == 0 and j != M - 1:
            print('No')
            exit(0)

        if prev_row == None:
            prev_row = row[j]
            continue

        if prev_row + 1 == row[j]:
            prev_row = row[j]
            continue

        print('No')
        exit(0)

print('Yes')
