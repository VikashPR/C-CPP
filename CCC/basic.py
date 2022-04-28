import math


def findMaxGCD(arr, n):
    high = 0
    i = 0
    while i < n:
        high = max(high, arr[i])
        i = i + 1
    divisors = [0] * (high + 1)
    i = 0
    while i < n:
        j = 1
        while j <= math.sqrt(arr[i]):
            if (arr[i] % j == 0):
                divisors[j] = divisors[j]+1
                if (j != arr[i] / j):
                    divisors[arr[i] / j] = divisors[arr[i] / j]
                    + 1
            j = j + 1
        i = i + 1
    i = high
    while i >= 1:
        if (divisors[i] > 1):
            return i
        i = i - 1
    return 1


arr = [1, 2, 4, 8, 8, 12]
n = len(arr)

print(findMaxGCD(arr, n))
