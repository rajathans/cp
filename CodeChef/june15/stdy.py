import sys
mod = 1000000000

foo = [0]
dp = [x[:] for x in [[foo]*2009]*2009]
cnr = [x[:] for x in [[foo]*4009]*4009]

i = 0
while i<4009:
	cnr[i][0] = cnr[i][i] = 1
	i+=1

i=1
while i<4006:
	j=1
	while j<min(i,2006):
		if i!=j:
			cnr[i][j] = (cnr[i-1][j-1]+cnr[i-1][j])%mod
		j+=1
	i+=1

t = int(input())
while t>0:
	t-=1
	su=0
	n,m = list(map(int, input().split()))
	dp[0][0]=1

	j=1
	while j<=m:
		dp[0][j] = cnr[m+j-1][m-1]
		j+=1

	dp[1][m]=dp[0][m]

	i=m
	while i>0:
		dp[1][i-1] = (dp[0][i-1]+dp[1][i])%mod
		i-=1

	i = 2
	while i<=n:
		j=m
		while j>=0:
			dp[i][j] = (dp[i-1][j]*dp[0][j])%mod if j==m else (dp[i][j+1]+dp[i-1][j]*dp[0][j])%mod
			j-=1
		i+=1
	print((dp[n][0]))	