test = int(raw_input())
while test>0:
	test=test-1
	st = raw_input()
	s = list(st)
	s.sort()
	t=[]
	i=0
	j=len(s)-1
	while i<j:
		if s[i]!=s[j]:
			t.append(s[i])
			t.append(s[j])
		i+=1
		j-=1
	ans = 1 
	if len(s) & 1:
		t.append(s[len(s)/2])
		ans = 1
	elif len(t)==0:
		ans = 0
	if ans==0:
		print "-1"
	else:
		print ''.join(t)