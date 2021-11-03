N = int(input())
cnt = [0] * N

for i in range(0, N - 1):
    str = input()
    a, b = str.split(' ')
    cnt[int(a) - 1] += 1
    cnt[int(b) - 1] += 1

print('Yes' if (N - 1) in cnt else 'No')
