import sys
import math

fact = [0]*20
s = [0]*30
a = [x[:] for x in [[]*15]*10]

visit = [0]*20
count = [0]*20
fact[0] = 1

i = 1
while i<20:
    fact[i] = fact[i-1]*i
    i+=1

for i in xrange(0,20):
    visit[i] = 0
    count[i] = 1

t = int(raw_input())
while t > 0 :
    values = map(int,sys.stdin.readline().split())
    n = values[0]
    q = values[1]
    s = raw_input()
    l = len(s)

    l = l*(l+1)/2

    z = 0
    while z<len(s):
        x = 0
        while s[x]:
            for y in xrange(0,x+1):
                a[i][y] = s[y]
            a[i][y] = '\0'
            i+=1
            x+=1
        z+=1

    for x in xrange(0,l):
        for j in xrange(0,l):
            if i!=j:
                if visit[i]==0:
                    if a[i]!=a[j]:
                        count[i]+=1
                        visit[j]=1
                        count[j]=0

    for i in xrange(0,q):
        k = int(raw_input())
        if k==1:
            print l
        else:
            ans = 0
            for j in xrange(0,l):
                if count[j]==k:
                    ans+=1
                elif count[j]>k:
                    c = fact[count[j]] / (fact[k] * fact[(count[j] - k)])
                    ans = ans + c
            print ans 