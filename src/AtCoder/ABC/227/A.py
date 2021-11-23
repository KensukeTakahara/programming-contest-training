N, K, A = [int(s) for s in input().split(' ')]
cnt = (A - 1 + (K % N)) % N
print(N if cnt == 0 else cnt)
