#include<stdio.h>
#include<limits.h>
int main()
{
int n;
printf("enter no of elements:");
scanf("%d",&n);
if(n<=0)
{
printf("Invalid input.\n");
return 1;
}
int min1=INT_MAX;
int min2=INT_MAX;
printf("enter numbers:\n");
for(int i=0;i<n;i++)
{
int num;
scanf("%d",&num);
if(num<min1)
{
min2=min1;
min1=num;
}
else
if(num<min2&&num!=min1)
{
min2=num;
}
}
if(min1!=INT_MAX&&min2!=INT_MAX)
{
printf("first two minimum values:%d,%d\n",min1,min2);
}
else
{
printf("Insufficient input to find first two minimum values.\n");
}
return 0;
}
