t = int(raw_input())
while t>0:
    t-=1
    inputs = [int(i) for i in raw_input().split()]
    x, y = inputs[0], inputs[1]
    revx = int(str(x)[::-1])
    revy = int(str(y)[::-1])
    sumrev = revx + revy
    print int(str(sumrev)[::-1])
