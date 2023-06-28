/*Program to find the square of a number using a function*/
/*Author : Magarajeswari 12-06-2023*/
#include<stdio.h>
float square(float);
int main()
{
float a,b;
printf("Enter any number:\n");
scanf("%f",&a);
b=square(a);
printf("The square of %f is %f",a,b);
return 0;
}
float square(float x)        /*function is declared as float. So irrespective of the calculation , square of the program will be in float format*/
{
float y;
y=x*x;
return(y);
}
