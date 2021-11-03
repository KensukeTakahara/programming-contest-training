H, W = [int(s) for s in input().split(' ')]
arr = [[0] * W] * H

for i in range(0, H):
    arr[i] = [int(s) for s in input().split(' ')]

yes = True
for i1 in range(0, H - 1):
    for j1 in range(0, W - 1):
        for i2 in range(i1, H):
            for j2 in range(j1, W):
                yes &= arr[i1][j1] + arr[i2][j2] <= arr[i2][j1] + arr[i1][j2]

print('Yes' if yes else 'No')
