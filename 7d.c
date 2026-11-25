#include<stdio.h>
void main()
{
int A[5],i,key,s=0;
printf("Enter all 5 elements\n");
for(i=0;i<5;i++)
scanf("%d",&A[i]);
printf("Enter seaching element\n");
scanf("%d",&key);
for(i=0;i<5;i++)
{
 if(key==A[i])
 {
        s=1;
  printf("Element found at %d",i+1);
  break;
 }

}
if(s=0)
  printf("Element not found");


}
