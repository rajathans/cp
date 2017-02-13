t = int(raw_input())

while (t > 0):
    t = t - 1
    temp = 0
    n = int(raw_input())

    testvar = raw_input()
    arr = testvar.split()
    arr = map(int, arr)

    sum = 0
    m = 0
    j = 0
    zero = 0
    while (m < n):
    	sum = sum + arr[m]
    	m = m + 1

    if(sum == 100):
    	print "YES"
        continue
    if (sum < 100):
    	print "NO"
        continue
    if((sum-100)==a/2):
        print "YES"
    else:
    	print "NO"