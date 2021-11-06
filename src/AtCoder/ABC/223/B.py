def main():
    S = input()
    arr = [S[i:len(S)] + S[0:i] for i in range(0, len(S))]
    arr.sort()
    print(arr[0])
    print(arr[-1])


main()
