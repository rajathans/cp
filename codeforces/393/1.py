n,m,k = map(int, raw_input().split())
if k == 1 or k == n:
    c = 1
    while c * (c + 1) / 2 <= m:
        c+=1
    c -= 1
    print c
else:
    z = (k - 1) * k / 2 + (n - k) * (n - k + 1) / 2
    c = 1
    while c * n - z <= m:
        c+=1
    c -= 1
    print c
