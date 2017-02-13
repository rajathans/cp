#include <conio>
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

void findMinMax(int count,long long no){
	int arr[10]={0},flag=0,flag1=0;
	long long temp=no;
	int i=0;
	while(temp){
		arr[i]=temp%10;
		temp=temp/10;
		i++;
	}
	int l=i;
	for(int i=l-1;i>=0;i--){
		int min=arr[i];
		int minIndex=i;
		for(int j=i-1;j>=0;j--){
			if(arr[j]==0 && i==l-1)
				continue;
			if(arr[j]<=min && arr[j]!=arr[i]){
				min=arr[j];
				minIndex=j;
			}
		}
		if(i==l-1 && min==0)
			continue;
		if(minIndex!=i){
			fout<<"Case #"<<count+1<<": ";
			for(int k=l-1;k>=0;k--){
				if(k==i){
					fout<<arr[minIndex];
				}
				else if(k==minIndex){
					fout<<arr[i];
				}
				else
					fout<<arr[k];
			}
			flag=1;
			break;
		}
	}
	if(flag==0){
		fout<<"Case #"<<count+1<<": ";
		for(int k=l-1;k>=0;k--){
			fout<<arr[k];
		}
		if(l==0 ){
			fout<<"0";
		}
	}


	//for maximum
	for(int i=l-1;i>=0;i--){
		int max=arr[i];
		int maxIndex=i;
		for(int j=i-1;j>=0;j--){
			if(arr[j]==0 && i==l-1)
				continue;
			if(arr[j]>=max && arr[j]!=arr[i]){
				max=arr[j];
				maxIndex=j;
			}
		}
		if(i==l-1 && max==0)
			continue;
		if(maxIndex!=i){
			fout<<" ";
			for(int k=l-1;k>=0;k--){
				if(k==i){
					fout<<arr[maxIndex];
				}
				else if(k==maxIndex){
					fout<<arr[i];
				}
				else
					fout<<arr[k];
			}
			flag1=1;
			fout<<"\n";
			break;
		}
	}
	if(flag1==0){
		fout<<" ";
		for(int k=l-1;k>=0;k--){
			fout<<arr[k];
		}
		if(l==0 ){
			fout<<"0";
		}
		fout<<"\n";
	}
}

void main(){
	int total;	
	long long no;
	fin>>total;
	for(int i=0;i<total;i++){
		fin>>no;
		findMinMax(i,no);
	}
	_getch();
}