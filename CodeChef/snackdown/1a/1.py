t = int(raw_input())
while t>0:
	t=t-1
	zeroes=su=0
	n=int(raw_input())
	temp = [1]*n
	ans = [1]*n
	arr = [int(i) for i in raw_input().split()]
	su = sum(arr)
	zeroes = arr.count(0)
	if su!=n:
		print "-1"
	elif zeroes==n-1:
		print "-1"
	else:
		check=1
		i=0
		while i<n:
			j=0
			while j<arr[i]:
				if check==n:
					check=0
				ans[check]=i
				temp[check]=-1
				check+=1
				j+=1
			i+=1
		i=0
		while i<n-1:
			print ans[i]+1,
			i+=1
		print ans[i]+1