P = raw_input()
t=int(raw_input())

while (t>0):
    t = t - 1
    count = 0
    total = 0
    inp = raw_input()
    var = [int(k) if k.isdigit() else k for k in inp.split()]

    ch1 = var[0]
    ch2 = var[1]
    L = var[2]
    R = var[3]

    ch = 0

    i = L-1
    while i<R:
        if(ch==0):
            if P[i] == ch1:
                ch = 1
                count = count + 1
                pass
        else:
            if P[i] == ch1:
                count = count + 1
                pass
            if P[i] == ch2:
                total = total + count
                pass
        i = i + 1
    print total