n = int(raw_input())
a = [0]*n
ans = 0
a = [int(i) for i in raw_input().split()]
ct = ct2 = 0

for i in xrange(0,n):
	ct = ct2 = 0
	t1 = t2 = a[i]
	while t1%5 == 0:
		ct+=1
		t1/=5
	while t2%2 == 0:
		ct2+=1
		t2/=2
	if ct-ct2 > 0:
		if (ct-ct2)%2==0:
			print a[i]<<(ct-ct2)
			continue
		else:
			print a[i]<<((ct-ct2)+1)
			continue
	else:
		print a[i]
		continue