cb = cg = 0
str1 = [0]*100001
str2 = [0]*100001

def mini(a,b):
	if a<=b:
		return a
	else:
		return b
	

def solve(a,b,c,s):
	cost = i = 0
	l = cb + cg
	k0 = k1 = 0
	if c==0:
		while i<l:
			if i%2 ==0:
				if s[i] == b:
					s[i] = a
					cost+=1
			if i%2 == 1:
				if s[i]==a:
					s[i] = b
					cost+=1
			i+=1
		cost = cost/2
	else:
		while i<l:
			if i%2 ==0:
				if s[i] == b:
					if k0<i+1:
						k0 = i+1
					while s[k0] ==b:
						k0+=1
					s[i] = a
					s[k0] = b
					cost = cost + k0 - i
			if i%2 == 1:
				if s[i]==a:
					if k1<i+1:
						k1 = i+1
					while s[k1] ==a:
						k1+=1
					s[i] = a
					s[k1] = b
					cost = cost + k1 - i
			i+=1
	return cost

def copy():
	i = 0
	cb = cg = 0
	while str2[i]==str1[i]:
		if str[i]=='B':
			cb+=1
		i+=1
	cg = i - cb

t = int(raw_input())
while t>0:
	t -=1
	cb = cg = 0
	cost = int(raw_input())
	str1 = raw_input()
	copy()

	if cg>cb+1 or cb>cg+1:
		print "-1"
		continue
	elif cg>cb:
		print solve('G','B',cost,str1)
	elif cb>cg:
		print solve('B','G',cost,str1)
	else:
		print mini(solve('G','B',cost,str1),solve('B','G',cost,str2))
	