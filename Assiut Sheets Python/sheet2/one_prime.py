num = int(input())
isPrime = True

for i in range(2, num):
    if num % i == 0: isPrime = False

print("YES") if isPrime else print("NO")