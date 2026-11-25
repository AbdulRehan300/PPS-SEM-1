#include<stdio.h>
void main()
{
int M[3][3],i,j,z=0,nz=0;
printf("Enter 3X3 matrix elements\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
        scanf("%d",&M[i][j]);
        if(M[i][j]==0)
           z++;
        else
          nz++;
 }
}
printf("\n matrix is =\n");
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
     printf("%d\t",M[i][j]);

   printf("\n");
}
printf("no.of zeros=%d",z);
printf("\nno.of non zeros=%d",nz);
if (z>nz)
  printf("\n matrix is sparse");
else
  printf("\n Give is Not a sparse");
}
