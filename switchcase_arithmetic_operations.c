/*Author : R.Magarajeswari*/
/*Date :19-06-2023*/
/*Problem : Write a menu driven program to do the following operations 1. Factorial of a number , 2. Odd or even , 3. Prime number or not , any other number as
invalid selection*/
#include<stdio.h>
int main()
{
int i,n,fact=1,x=1,j,flag=0;
printf("Choose an operation to perform:");
scanf("%d",&i);
printf("Enter any number to perform the operation");
scanf("%d",&n);
switch(i)
{
case 1:
while(x<=n)
{
  fact=fact*x;

x++;

}
  printf("Factorial of %d is: %d",n,fact);
break;

case 2:
if(n%2==0)
{
    printf("%d is even",n);
}else
{
printf("%d is odd",n);
}
break;
case 3:
   for(j=2;j<=n/2;j++)
   {
       if(n%j==0)
       {
           flag=1;
           printf("%d is not a prime number",n);
           break;
       }else if(n%j!=0)
       {
           printf("%d is a prime number",n);
       }
   }
    break;
default:
printf("Invalid selection. Please select values from 1-3\n");
}
}
