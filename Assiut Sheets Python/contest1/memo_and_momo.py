a, b, k = [int(num) for num in input().split()]

if a % k == 0 and b % k == 0:
    print("Both")
elif a % k == 0:
    print("Memo")
elif b % k == 0:
    print("Momo")
else:
    print("No One")
