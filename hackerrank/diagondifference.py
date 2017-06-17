n = int(raw_input())
i = d1 = d2 = 0
while n>0:
    array = [int(z) for z in raw_input().split()]
    d1 += array[i]
    d2 += array[n-1]
    n-=1
    i+=1

print abs(d1-d2)