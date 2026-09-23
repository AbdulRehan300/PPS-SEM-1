#include<stdio.h>
void main()
{
int i,n,m;
printf("Enter any two numder:\n");
scanf("%d %d",&m,&n);
i=m;
do
{
if(i%2!=0)
printf("%d\n",i);
i++;
}while(i<=n);
}
