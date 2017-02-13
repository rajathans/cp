#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int mat[8][8];
		int black=0,white=0;

		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				cin>>mat[i][j];
			}
		}

		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(mat[i][j]=='Q')
					black+=9;
				else if(mat[i][j]=='R')
					black+=5;
				else if(mat[i][j]=='B')
					black+=3;
				else if(mat[i][j]=='N')
					black+=3;
				else if(mat[i][j]=='P')
					black+=1;
				else if(mat[i][j]=='q')
					white+=5;
				else if(mat[i][j]=='r')
					white+=5;
				else if(mat[i][j]=='b')
					white+=5;
				else if(mat[i][j]=='n')
					white+=5;
				else if(mat[i][j]=='p')
					white+=5;
			}
		}

		if(black<white)
			cout<<"Black"<<endl;
		else if(white>black)
			cout<<"White"<<endl;
		else
			cout<<"Draw"<<endl;
		
	}

	return 0;
}
