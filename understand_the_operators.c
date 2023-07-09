/*Author : R.Magarajeswari*/
/*Date :01-07-2023*/
/*Problem : Program to understand the different types of operators in c using switch case*/
#include<stdio.h>
int main()
{
char i;
printf("Choose an operation to perform:");
scanf("%c",&i);
int m=5,n=4;
switch(i)
{
case 'r':     /*relational operators*/
if('x'<'y') /* when a letter is mentioned with single quotes '' then the operator between them compares the values of the variables and excecutes the code*/
{
printf("ASCII value of the 2 characters entered are %d %d and the condition is passed",'x','y');  /*for a better understanding , we are printing the values of the variables as per the ASCII code*/
}else
{
    printf("ASCII value of the 2 characters entered are %d %d and the condition is failed dumbo",'x','y');
}
break;
case 'c':     /*conditional operators (?:). Syntax - (condition)?(statement1):(statement2). This can be used as an alternative for if condition*/

(m > n) ? printf("m is greater than n that is %d > %d",
                     m, n)
            : printf("n is greater than m that is %d > %d",
                     n, m);
break;
default:
printf("Invalid selection. Please select values from characters r/c \n");
}
return 0;
}
