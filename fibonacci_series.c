/*Program to find the fibonacci series*/
/*Author : Magarajeswari 26-06-2023*/
/*The Fibonacci series is an infinite series, starting from '0' and '1', in which every number in the series is the sum of two numbers preceding it in the series.*/
#include<stdio.h>
int main()
{
int num, n1=0,n2=1,n3,i;                         /*n1, n2 are defined as 0 and 1 as they are the starting digits of Fibonacci series.*/
printf("Enter the number of elements");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
n3=n1+n2;
printf("%d\t",n3);  /* "\t" - escape sequence or to add a tab space to a program */
n1=n2;
n2=n3;
}
return 0;
}
