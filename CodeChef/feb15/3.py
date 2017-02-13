def main():
    t = int(raw_input())
    for test_case in range(t):
        n,s=map(int,raw_input().split())
        total = sum(range(1,n+1))
        diff = total - s
        #print "diff:",
        #print diff
        i=1
        lower=1
        upper= n-i
        num=1
        if diff==0: #sum(n)==s
            print 0
        else:
            while True:
                if diff>=lower and diff<=upper:
                    print num
                    break
                else:
                    i+=1
                    lower=upper+1
                    upper+=(n-i)
                    num+=1