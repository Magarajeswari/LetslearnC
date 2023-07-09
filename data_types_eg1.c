#include<stdio.h>
int main()
{
unsigned char ch=300;/* Total ASCII characters is from 0 to 127. ie 128 characters. If the number is greater than 128 then , 128 is subtracted from the number until it becomes less than 128*/
char ch1='B'+32;   /*ASCII value of character B is 66. So when we add add char B and 32 we will get 98 as the output*/
unsigned char ch2;
printf("\%d%c\n",ch,ch);
printf("\%d%c\n",ch1,ch1);
return 0;
}
