#
for(i=0; i<input; i++)
{
for(j=0; j<input; j++)
{
if(a[i]<a[j])
{
emp=a[j];
a[j]=a[i];
a[i]=emp;
}
}
}