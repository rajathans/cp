d = []
n = input()
n = int(n)

num = raw_input()
d = [int(x) for x in num.split()]

mx = 0
cnt = 0
length = len(d)

for idx, den in enumerate(d):
	d.remove(den)
	su = sum(d)
	if su % den == 0 and su != den:
		cnt += 1
		if den > mx:
			mx = den
	d.insert(idx, den)
if cnt == 0 and mx == 0:
	print '0 -1'
print cnt,mx
