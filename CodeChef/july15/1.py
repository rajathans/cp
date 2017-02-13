t = int(raw_input())
while t>0:
	t-=1
	inputs = raw_input().split()
	front = inputs[0]
	back = inputs[1]
	left = inputs[2]
	right = inputs[3]
	top = inputs[4]
	bottom = inputs[5]

	ans = "NO"
	
	if front == left and left == bottom:
		ans = "YES"
	if front == bottom and bottom == right:
		ans ="YES"
	if front == left and left == top:
		ans ="YES"
	if(top == right and back == right):
		ans ="YES"
	if(bottom == left and left == back):
		ans ="YES"
	if front == right and right == top:
		ans ="YES"
	if top == left and left == back:
		ans ="YES"
	if(bottom == right and back == right):
		ans ="YES"
	print ans