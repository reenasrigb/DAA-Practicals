#include<stdio.h>
int ispalindrome(int x)
{
if(x<0)
return 0;
int original=x;
int reversed=0;
while(x>0)
{
int digit=x%10;
reversed=reversed*10+digit;
x/=10;
}
return original==reversed;
}
int main()
{
int num;
printf("enter a interger:");
scanf("%d",&num);
if(ispalindrome(num))
printf("True\n");
else
printf("False\n");
return 0;
}
