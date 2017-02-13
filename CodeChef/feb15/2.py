def partition(lst, start, end):
    pos = start                           

    for i in range(start, end):           
        if lst[i] < lst[end]:             
            lst[i],lst[pos] = lst[pos],lst[i]
            pos += 1

    lst[pos],lst[end] = lst[end],lst[pos] 
    return pos

def quick_sort_recursive(lst, start, end):
    if start < end:                       
        pos = partition(lst, start, end)
        quick_sort_recursive(lst, start, pos - 1)
        quick_sort_recursive(lst, pos + 1, end)

def gcd(a,b):
	if(b==0):
		return a
	return gcd(b,a%b)

t=int(raw_input())

while (t>0):
    t=t-1
    n = int(raw_input())
    example = [int(z) for z in raw_input().split()]
    quick_sort_recursive(example, 0, len(example)-1)
    maxi = 0
    c = 0
    it1=1
    while (it1<n):
    	if(example[it1]==example[it1-1]):
    		c=c+1
    	else:
    		c = 0
    	if(c > maxi):
    		maxi = c
    	it1 = it1 + 1
    print n-maxi-1