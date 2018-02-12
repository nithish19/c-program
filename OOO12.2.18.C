#include<stdio.h>
void main()
{
int b[10],i,n,t,j;
printf("enter the range");
scanf("%d",&n);
printf("enter the array values");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(b[i]<b[j])
{
t=a[i];
b[i]=b[j];
b[j]=t;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",b[i]);
}
}
