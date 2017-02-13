t = int(raw_input())
while t>0:
	t-=1
	cnt=ans=0
	n,k = map(int, raw_input().split())
	if k==1:
		aa = raw_input()
		s = list(aa)
		a = ['']*(len(s)+2)
		b = ['']*(len(s)+3)
		z = ['']
		count1=count2=0
		i=0
		while i<len(s):
			a[i]='0'
			b[i]='0'
			i+=1
		i=1
		while i<len(s)+2:
			a[i]='1'
			i+=2
		i=0
		while i<=len(s):
			b[i] = '1'
			i+=2
		i=0
		while i<len(s):
			if s[i]!=a[i]:
				count1+=1
			if s[i]!=b[i]:
				count2+=1
			i+=1

		if count1>=count2:
			print count2
			i=0
			while i<n:
				z.append(b[i])
				i+=1
		else:
			print count1
			i=0
			while i<n:
				z.append(a[i])
				i+=1
		count1 = 0
		count2 = 0
		print ''.join(z)
	else:
		aa = raw_input()
		a = list(aa)
		b = a
		i=1
		while i<n:
			if a[i-1]==a[i]:
				cnt+=1
			else:
				cnt=0
			if cnt==k:
				cnt=0
				if a[i]==a[i+1]:
					if a[i]=='1':
						a[i]='0'
					else:
						a[i]='1'
				else:
					if a[i-1]=='1':
						a[i-1]='0'
					else:
						a[i-1]='1'
			i+=1
		i=0
		while i<n:
			if a[i]!=b[i]:
				ans+=1
			i+=1
		print ans
		print ''.join(a)