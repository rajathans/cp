a,b = map(int, raw_input().split())
string = raw_input()

startednow = True
add = 0

i = 0
while i<len(string):
	if string[i] == '1':
		if startednow==True:
			add = a
		else:
			add += a
			a = a*a
	else:
		a = a*a
	print "day",i+1,"=", add,"for a =",a
	i+=1
print a%b