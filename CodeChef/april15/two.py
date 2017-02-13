def RMQUtil(int *st, int ss, int se, int qs, int qe, int index):
	if (qs <= ss && qe >= se)
        return st[index];
 
 
    if (se < qs || ss > qe)
        return INT_MAX;
 
 
    int mid = getMid(ss, se);
    return maxVal(RMQUtil(st, ss, mid, qs, qe, 2*index+1),
                  RMQUtil(st, mid+1, se, qs, qe, 2*index+2));
}