#include<stdio.h>
void main()
{
int a,b;
char choice;
printf("Enter two number:");
scanf("%d %d",&a,&b);
printf("\n Enter an operator(+,-,*,/,%%):");
scanf("%c",&choice);
switch(choice)
{
case'+':
       printf("Addition=%d\n",a+b);
       break;
case'-':
       printf("subtraction=%d\n",a-b);
       break;
case'*':
       printf("multiplication=%d\n",a*b);
       break;
case'/':
       if(b!=0)
       printf("division=%d\n",a/b);
       break;
case'%':
       if(b!=0)
       printf("Moduius=%d\n",a%b);
       else
       printf("Modulus dy zero is not possible\n");
       break;
default:
       printf("Invalid operator\n");
}
}
