#include<stdio.h>
void main()
{
int i,f=1,n;
printf("Enter a number");
scanf("%d",&n);
if(n<0)
printf("no factorial\n");
else

for(i=1;i<=n;i++)
{

f=f*i;
}
printf("the factorial is %d",f);
}
