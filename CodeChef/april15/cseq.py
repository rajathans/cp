fact = [0]*1000015
su = [0]*1000005
MOD = 1000003
fact[0] = 1
i = 1
while i<=MOD+2:
	fact[i] = (fact[i-1]*i)%MOD
	i += 1
t = int(raw_input())
while t>0:
	t = t - 1
	n,l,r = map(int, raw_input().split())
	diff = r - l
	num = n+diff+1
	remain = ans = 0
	first = []
	second = []
	third = []
	while num != 0:
		remain = num % MOD
		num = num / MOD
		first.append(remain)
	num = max(diff+1, n)
	while num!=0:
		remain = num % MOD
		num/=MOD
		second.append(remain)
	temp = 1
	i = 0
	while i<len(first):
		temp=(temp*fact[first[i]])%MOD
		temp=(temp*pow(fact[second[i]],MOD-2,MOD))%MOD
		if first[i]-second[i]>=0:
			temp=(temp*pow(fact[max(0,first[i]-second[i])],MOD-2,MOD))%MOD
		else:
			temp = 0
		i+=1
	temp-=1
	temp = temp % MOD
	if temp<0:
		temp+=MOD
	ans = (ans + temp)%MOD
	print ans