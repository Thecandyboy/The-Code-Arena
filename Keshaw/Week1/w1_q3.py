### This doesn't comply with the assignment. Sorry for that! Typed to check the efficiency in 'lovely' Python

n = int(input())
i=1000000007
output = 2**n
if output < i:
    print(output)
else:
    print((2**n)%i)
