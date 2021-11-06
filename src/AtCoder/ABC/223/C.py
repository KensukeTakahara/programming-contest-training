def main():
    N = int(input())
    arr = [0.0] * N
    times = [0.0] * N

    for i in range(0, N):
        arr[i] = [float(s) for s in input().split(' ')]
        times[i] = arr[i][0] / arr[i][1]

    average = sum(times) / 2
    time_cnt = 0.0
    distance_cnt = 0.0
    for i in range(0, N):
        time_cnt += times[i]
        distance_cnt += arr[i][0]

        if time_cnt >= average:
            diff = time_cnt - average
            ratio = diff / times[i]
            print(distance_cnt - (arr[i][0] * ratio))
            break


main()
