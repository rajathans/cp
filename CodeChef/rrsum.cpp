#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
    int subt,q,m,n,i,ans;
    scanf("%d%d",&n,&m);
    while(m--){
        ans=0;
        scanf("%d",&q);
        for(i=1;i<=n;i++){
            subt = q-i;
            if(subt>n && subt<=(2*n))
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}