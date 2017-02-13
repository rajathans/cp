#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int n,k,num,i,count,iread,res,first;
	const int size=30000;
	char arr[size];
 
	fgets(arr,size,stdin);
 
	sscanf(arr,"%d%d",&n,&k);
 
	count=0;
	num=0;
	res=0;
	while(count<n){
		iread=fread(arr,1,size,stdin);
		for(i=0;i<iread;i++){
			if(arr[i]=='\n'){
				count++;
				if(num%k==0)
					res=res+1;
				num=0;
			}else{
				num=num*10+(arr[i]-'0');
			}
		}
	}
 
	printf("%d\n",res);
 
	return 0;
}