n = int(raw_input())
co = 1
tot = 0
start = 1
end = start*10-1

while n>end:
	tot += (end - start + 1) * co
	start *= 10
	end = start * 10 - 1
	co+=1

tot += (n- start + 1)*co
print tot