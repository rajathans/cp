from __future__ import division

t = int(raw_input())
while t>0:
	t-=1
	T1,T2,t1,t2 = map(float,raw_input().split())
	a = T1*T2
	if t1==0 and t2==0:
		if T1==0 and T2==0:
			print "1.000000"
		else:
			print "0.000000"
		
	else:
		if T1>T2:
			temp = t1
			t1=t2
			t2=temp
			temp = T1
			T1=T2
			T2=temp
		if t1<T2:
			if T2-T1-t1>0:
				a=a-(T2-T1-t1)*(T1)
			if t1+T1<T2:
				a=a-0.5*(T1*(T1))
			elif T1+t1==T2:
				a=a-0.5*(T1*(T2-t1))
			else:
				a=a-0.5*(T2-t1)*(T2-t1)
		if T1-t2>0:
			a=a-(T1-t2)*(T1-t2)*0.5
		a=a/(T1*T2)
		print "%.6f" % a