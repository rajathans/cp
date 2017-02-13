#include<stdio.h>
#include<string.h>

void main()
{
int x;
scanf("%d ",&x);
while(x--)
{
 char line[100];
 gets(line);
 int i=0,count=0;
 int len=strlen(line);
 for(i=0;i<len;i++)
 {
 if(line[i]=='B')
 count=count+2;
 if(line[i]=='A'||line[i]=='D'||line[i]=='O'||line[i]=='P'||line[i]=='Q'||line[i]=='R')
 count=count+1;
 }
 printf("%d\n",count);
}
}
