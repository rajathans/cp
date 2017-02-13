def countfact(n,p):
    k = 0
    while n>0:
        k+=n/p
        n/=p
    return k
def C(n,r,MOD):
    res = 1
    isprime = [1]*(n+1)
    i = 2
    while i<=n:
        if isprime[i]:
            j = 2*i
            while j<=n:
                isprime[j]=0
                j+=i
            k = countfact(n,i) - countfact(r,i) - countfact(n-r,i)
            res = (res * pow(i, k, MOD)) % MOD
        i+=1
    return res

print C(5,2,10000)