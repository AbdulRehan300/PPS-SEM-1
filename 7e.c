#include<stdio.h>
void main()
{
int A[100],i,N,key;
int low,high,mid,found=0;
printf("Enter the size of N elements:");
scanf("%d",&N);
printf("Enter %d values in scrted order:\n",N);
for (i=0;i<N;i++)
{
scanf("%d",&A[i]);
}
printf("Array is :\n");
for (i=0;i<N;i++)
{
printf("%d\t",A[i]);
}
printf("\n enter key value to find:");
scanf("%d",&key);
low=0;
high=N-1;
while(low<=high)
{
  mid=(low+high)/2;
 if(A[mid]==key)
 {
 found=1;
 printf("Value found at %d position\n",mid+1);
 break;
 }
 else if(key<A[mid])
 {
  high=mid-1;
 }
 else
 {
       low=mid+1;
 }
}
if(found==0)
 printf("value not found\n");
}
