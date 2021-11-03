N = int(input())
arr = [0, 0] * N

for i in range(0, N):
    arr[i] = [int(s) for s in input().split(' ')]

vector = list()
for i in range(0, N - 1):
    vector.append(list())
    vector[i] = [[arr[j][0] - arr[i][0], arr[j][1] - arr[i][1]]
                 for j in range(i + 1, N)]

cnt = 0
for i in range(0, len(vector)):
    for j in range(0, len(vector[i])):
        for k in range(j + 1, len(vector[i])):
            if (vector[i][j][0] * vector[i][k][1]) - (vector[i][j][1] * vector[i][k][0]) != 0:
                cnt += 1

print(cnt)
