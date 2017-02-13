ans = 0
n = int(raw_input())
m = {}
for i in xrange(0,n):
	string = raw_input()
	if string not in m:
		m[string] = 1
	else:
		m[string] = m[string] + 1
print m[max(m, key=lambda i: m[i])]