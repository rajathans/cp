string = raw_input()
k = int(raw_input())
ans = False
eachlength = len(string)/k
string = list(string)
i = eachlength
while i<len(string):
	string.insert(i,'\n')
	i+=eachlength+1
string = ''.join(string)
strings = string.split()

i = 0
while i<len(strings):
	if strings[i] == ''.join(reversed(strings[i])):
		ans = True
	else:
		ans = False
		break
	i+=1
if ans==True:
	print "YES"
else:
	print "NO"