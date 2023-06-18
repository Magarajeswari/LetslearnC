/*Program to find the sum of digits of a number*/
/*Author : Magarajeswari 14-06-2023*/
/*Logic : To find the sum of digits we need the digits of a number individually. so we use the mod function to find the remainder of a number when divided by
10. This gives the unit digit. Then the number as a whole is divided by 10 so that we can get the next unit digit as remainder. This is continued until
all the digits are included in the counting process*/
#include<stdio.h>
int main()
{
int a;
int digits;
int sum=0;
printf("Enter the value of a:");
scanf("%d",&a);
while(a>0)
{
  digits=a%10;
  sum=sum+digits;
  a=a/10;
}
printf("The sum of digits of %d is %d\n",a,sum);
return 0;
}
