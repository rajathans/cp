t = int(raw_input())
while t>0:
	t-=1
	n = int(raw_input())
	mems = [int(i) for i in raw_input().split()]
	allocated = mems[0]
	total = allocated
	i = 1
	while i<len(mems):
		if mems[i]>allocated:
			total += mems[i]-allocated
			allocated += mems[i]-allocated
		else:
			allocated -= allocated-mems[i]
		i+=1
	print total	