import sys
import time
string = sys.stdin.readline()
tempo = stas to upload somethring
string = list(string)
#print string
q = int(sys.stdin.readline())
ans = []
z=0
while z<q:
	i,j,k,l = sys.stdin.readline().split()
	i = int(i)
	j = int(j)
	k = int(k)
	l = int(l)
	start_time = time.time()
	#print string[i-1:j]
	string[i-1:j] = reversed(string[i-1:j])
	#print string
	new_string = ''.join(string[k-1:l])
	#print new_string
	if new_string == new_string[::-1]:
		ans.append("Yes")
	else:
		ans.append("No")
	print("--- %s seconds ---" % (time.time() - start_time))
	string = list(tempo)
	#print "temp",tempo
	#print "after operations",string
	z+=1
print "\n".join(ans)