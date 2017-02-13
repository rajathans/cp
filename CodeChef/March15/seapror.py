import sys

t = int(sys.stdin.readline())
while t>0:
	t = t -1
	X = 0
	string = str(sys.stdin.readline())
	length = len(string)
	flag = -1
	k = 1
	while k<=505:
		X = k
		A = ['']*(length)
		i = 0
		while i<length:
			X = ((X * 1103515245)%4294967296 + 12345%4294967296)%4294967296
			temp = (X / 65536) % 32768
			A[i] = str(temp % 2 + 48)
			if A[i] == '48':
				A[i] = '0'
			else:
				A[i] = '1'
			i+=1

		yo = ''
		yo = ''.join(A)
		if string == yo:
			flag = 1
			break
		k+=1
	if flag==1:
		print "LCG"
	else:
		print "Xorshift"