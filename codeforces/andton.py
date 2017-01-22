n=int(raw_input())
s=raw_input()
a=s.count('A')
d=len(s)-a
if a>d: print 'Anton'
elif a<d: print 'Danik'
else: print 'Friendship'
# your code goes here
