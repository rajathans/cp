t = int(raw_input())

while (t > 0):
    t = t - 1
    lsum = 0
    hsum = 0
    n = int(raw_input())

    testvar = raw_input()
    arr = testvar.split()
    arr = map(int, arr)

    while (n>0):
    	n=n-1
    	hsum = hsum + arr[n]
    	if(arr[n]>0):
    		lsum = lsum + arr[n] -1

    if((hsum>=100) and (lsum<100)):
        print "YES"
    else:
    	print "NO"