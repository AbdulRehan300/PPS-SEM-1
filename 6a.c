#include<stdio.h>

int main()
{
int n,s;
printf("Enter a number:");
scanf("%d",&n);
s=sum(n);
printf("sum of first %d natural number is %d",n,s);

return 0;
}
int sum(int n)
{
if(n==0||n==1)
return 1;
else
return n+sum(n-1);
}
