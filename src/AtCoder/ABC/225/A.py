from math import factorial

str = input()
unique = len(set(list(str)))
pattern = factorial(len(str)) / factorial(len(str) + 1 - unique)
print(int(pattern))
