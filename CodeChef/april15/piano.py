import sys
t = int(raw_input())
while t>0:
	t = t - 1
	string = raw_input()
	#string = list(string)
	#print string
	su = 0
	octaves = int(raw_input())
	octaves = 12 * octaves
	i = 0
	while i<len(string):
		if string[i] == 'T':
			su += 2
		else:
			su += 1
		i += 1
	ans = 0
	x = 0
	i = 1
	while i<=octaves-su:
		x = (octaves-i)/su
		ans += x
		i += 1
	print ans