#include<stdio.h>
void main()
{
int S[5],i,sum=0;
printf("Enter all 5 elements\n");
for(i=0;i<5;i++)
 scanf("%d",&S[i]);

for(i=0;i<5;i++)
 sum=sum+S[i];
printf("sum=%d",sum);
}
