v1 = []
v2 = []
C = [[0 for i in range(100001)] for i in range(501)]
def dp(W):
	siz = len(v1)
	i = 1
	while i<=siz:
		j=1
		while j<=W:
			C[i][j] = C[i-1][j]
			if v2[i-1]<=j:
				C[i][j]=max(C[i][j],v1[i-1]+C[i-1][j-v2[i-1]])
			j+=1
		i+=1
	return C[siz][W]

t = int(raw_input())
while t>0:
	t-=1
	N,K,M = map(int, raw_input().split())
	arr = [int(z) for z in raw_input().split()]
	costm = [0]*N

	while M>0:
		M-=1
		l,r,cost = map(int,raw_input().split())
		for i in xrange(0,r):
			if costm[i] == 0:
				costm[i]=cost
				continue
			if cost<costm[i]:
				costm[i] = cost
	ans = 0
	for i in xrange(0,N):
		ans+=arr[i]
		if arr[i]<0 and costm[i]>0:
			v1.append(-arr[i])
			v2.append(costm[i])
	ans+=dp(K)
	print ans
	v1 = []
	v2 = []