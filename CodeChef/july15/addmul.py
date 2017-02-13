mod = 1000000007

segtree = []*400010
arr = []*100000
lazy1 = []*400010
lazy2 = []*400010
lazy3 = []*400010

def update_lazy(node,start,end):
	if(lazy3[node]):
		segtree[node]=(lazy3[node]*(end-start+1))%mod
		if(start!=end):
			lazy3[node*2]=lazy3[node*2+1]=lazy3[node]
			lazy1[node*2]=lazy1[node*2+1]=0
			lazy2[node*2]=lazy2[node*2+1]=1
		lazy3[node]=0
	if(lazy2[node]!=1 or lazy1[node]!=0):
		segtree[node]=(segtree[node]*lazy2[node])%mod
		segtree[node]=(segtree[node]+(lazy1[node]*(end-start+1))%mod)%mod
		if(start!=end):
			lazy2[node*2+1]*=lazy2[node]
			lazy2[node*2]*=lazy2[node]
			lazy1[node*2]*=lazy2[node]
			lazy1[node*2+1]*=lazy2[node]
			lazy1[node*2]%=mod
			lazy1[node*2+1]%=mod
			lazy1[node*2]+=lazy1[node]
			lazy1[node*2+1]+=lazy1[node]
			lazy2[node*2]%=mod
			lazy2[node*2+1]%=mod
			lazy1[node*2]%=mod
			lazy1[node*2+1]%=mod
		lazy1[node]=0
		lazy2[node]=1

def build_tree(node,start,end):
	if(start==end):
		segtree[node]=arr[start]
		lazy1[node]=lazy3[node]=0
		lazy2[node]=1
	else:
		mid=(start+end)/2
		build_tree(node*2,start,mid)
		build_tree(node*2+1,mid+1,end)
		segtree[node]=(segtree[node*2]+segtree[node*2+1])%mod
		lazy1[node]=lazy3[node]=0
		lazy2[node]=1

def summ(node,start,end,l,r):
	update_lazy(node,start,end)
	if(end<l or start>r):
		return 0
	if(start>=l and end<=r):
		return segtree[node]
	else:
		mid=(start+end)/2
		return (summ(node*2,start,mid,l,r)+summ(node*2+1,mid+1,end,l,r))%mod

def update(node,start,end,l,r,operation,value):
	update_lazy(node,start,end)
	if start > r or end < l:
		return
	if start>=l and end <=r:
		if operation == 3:
			segtree[node]=(value*(end-start+1))%mod
			if(start!=end):
				lazy3[node*2+1]=lazy3[node*2]=value
				lazy2[node*2+1]=lazy2[node*2]=1
				lazy1[node*2+1]=lazy1[node*2]=0
		elif operation == 2:
			segtree[node]=(segtree[node]*value)%mod
			if(start!=end):
				lazy1[node*2]=(lazy1[node*2]*value)%mod
				lazy1[node*2+1]=(lazy1[node*2+1]*value)%mod
				lazy2[node*2]=(lazy2[node*2]*value)%mod
				lazy2[node*2+1]=(lazy2[node*2+1]*value)%mod
		elif operation == 1:
			segtree[node]=(segtree[node]+(value*(end-start+1))%mod)%mod
			if(start!=end):
				lazy1[node*2]=(lazy1[node*2]+value)%mod
				lazy1[node*2+1]=(lazy1[node*2+1]+value)%mod
	else:
		mid=(start+end)/2
		update(node*2,start,mid,l,r,operation,value)
		update(node*2+1,mid+1,end,l,r,operation,value)

n,q = map(int, raw_input().split())
arr = [int(i) for i in raw_input().split()]
while q>0:
	q-=1
	inp = [int(i) for i in raw_input().split()]
	op = int(inp[0])
	x = int(inp[1])
	y = int(inp[2])
	if len(inp)==4:
		v = int(inp[3])
	if op!=4:
		update(1,0,n-1,x-1,y-1,op,v)
	else:
		print summ(1,0,n-1,x-1,y-1)