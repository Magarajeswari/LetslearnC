/*Program to find whether a letter is lowercase or uppercase*/
/*Author : Magarajeswari-02-07-2023*/
#include<stdio.h>
int main()
{
char ch;
printf("\n Enter The Character : ");
scanf("%c", &ch);
if (ch >= 65 && ch <= 90)
{
printf("You have entered an uppercase character");
}
else if(ch >= 97 && ch <= 127)
{
printf("You have entered a lower character");
}
else
{
printf("Please enter an alphabet. You cannot enter a random character and ask me to do dumb tasks");
}
return 0;
}
