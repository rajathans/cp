def triangular(st,en):
    num=en-st+1
    return num*(num+1)//2
 
t=int(input())
for i in range(1,t+1):
    n,k,q=map(int,raw_input().split())
    string=raw_input()
    dictS=[[0,0,0]]
    count=0
    length=0
    startInd=1
    num0=num1=0
    for i in range(0,len(string)):
        length+=1
        if string[i]=='0':
            num0+=1
        else:
            num1+=1
        if num0<=k and num1<=k:
            count+=length
        else:
            dictS.append([startInd,i,count])
            #print(dictS)
            while num0>k or num1>k:
                startInd+=1
                length-=1
                if string[startInd-2]=='0':
                    num0-=1
                else:
                    num1-=1
            count=length*(length+1)//2
    dictS.append([startInd,i+1,count])
    #print(dictS)
    for j in range(1,q+1):
        l,r=map(int,raw_input().split())
        count=0
        a=1
        while dictS[a][0]<l:
            a+=1
        if dictS[a][0]==l:
            a+=1
        if dictS[a-1][1]>=r:
            count=triangular(l,r)
        else:
            count=triangular(l,dictS[a-1][1])
            while dictS[a][1]<r:
                count=count+dictS[a][2]-triangular(dictS[a][0],dictS[a-1][1])
                a+=1
            count=count+triangular(dictS[a][0],r)-triangular(dictS[a][0],dictS[a-1][1])
        print(count)