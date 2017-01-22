import string
t = int(raw_input())
while t>0:
    t-=1
    string = raw_input()
    ascii_values = [ord(i) for i in string]
    end = len(ascii_values) - 1
    start = 0
    ans = 0
    while end > start:
        ans = 1 if abs(ascii_values[start] - ascii_values[start+1]) == abs(ascii_values[end] - ascii_values[end-1]) else 0
        if not(ans):
            break
        start+=1
        end-=1

    print 'Funny' if ans else 'Not Funny'
