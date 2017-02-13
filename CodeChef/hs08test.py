x,y = raw_input().split()
x = int(x)
y = float(y)

if ((x % 5) == 0):
	if((y-x-0.5)>0):
		print("%0.2f"%(y-x-0.5))
	else:
		print("%0.2f"%y)
else:
	print("%0.2f"%y)