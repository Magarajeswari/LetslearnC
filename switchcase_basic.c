/*Author : R.Magarajeswari*/
/*Date :18-06-2023*/
/*Problem : Write a code to select a card based on switch cases with break statement*/
#include<stdio.h>
int main()
{
char suite=1;
switch(suite)
{
case 1:
printf("Diamond\n");               /*since break is not available if char==1, both case 1 and 2 gets printed*/
case 2:
printf("Spade\n");
break;
case 3:
printf("Heart\n");
break;
}
printf("Switch cases are used for decision making when multiple choices are involved\n");
return 0;
}
