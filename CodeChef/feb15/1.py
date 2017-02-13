t = int(raw_input())
while (t>0):
    t = t- 1
    str = raw_input()
    if(str[0]=='+'):
    	temp = '-'
    else:
    	temp = '+'

	count = 0
	it1=1
	while (it1<len(str)):
		if(str[it1]!=temp):
			count=count+1
		if(temp == '+'):
			temp = '-'
		else:
			temp = '+'
		it1 = it1 + 1
	print count