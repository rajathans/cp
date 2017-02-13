def partition(lst, start, end):
    pos = start                           # condition was obsolete, loop won't
                                          # simply run for empty range

    for i in range(start, end):           # i must be between start and end-1
        if lst[i] < lst[end]:             # in your version it always goes from 0
            lst[i],lst[pos] = lst[pos],lst[i]
            pos += 1

    lst[pos],lst[end] = lst[end],lst[pos] # you forgot to put the pivot
                                          # back in its place
    return pos

def quick_sort_recursive(lst, start, end):
    if start < end:                       # this is enough to end recursion
        pos = partition(lst, start, end)
        quick_sort_recursive(lst, start, pos - 1)
        quick_sort_recursive(lst, pos + 1, end)

t=int(raw_input())

while (t>0):
    t=t-1
    sumtemp =0
    flag=0
    n,k = map(int, raw_input().split())
    example = [int(z) for z in raw_input().split()]
    quick_sort_recursive(example, 0, len(example)-1)
    i=0
    while (i<k):
    	sum = (example[i]*(example[i]+1))/2
        sumtemp = sumtemp + example[i]
    	if((sum - sumtemp) < example[i]):
            flag=1
            break
        i=i+1
    
    if(flag==1):
    	sum=sum-sumtemp
    else:
    	sum=((n*(n+1))/2)-sumtemp

    if(sum%2==0):
    	print "Chef"
    else:
    	print "Mom"